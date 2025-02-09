#include <Wire.h>

#define ADXL345_ADDR 0x53  // I2C address of ADXL345

// Flex sensor pins
const int flexThumb = A0;
const int flexIndex = A1;
const int flexMiddle = A2;
const int flexRing = A3;
const int flexPinky = A5;

// ADXL345 variables
int16_t ax, ay, az;

void setup() {
    Serial.begin(9600);  // Bluetooth module uses Serial
    Wire.begin();

    // Initialize ADXL345
    Wire.beginTransmission(ADXL345_ADDR);
    Wire.write(0x2D);  // Power control register
    Wire.write(8);  // Enable measurements
    Wire.endTransmission();
}

void loop() {
    // Read flex sensor values
    int thumb = analogRead(flexThumb);
    int index = analogRead(flexIndex);
    int middle = analogRead(flexMiddle);
    int ring = analogRead(flexRing);
    int pinky = analogRead(flexPinky);

    // Read accelerometer data
    Wire.beginTransmission(ADXL345_ADDR);
    Wire.write(0x32);  // Start reading from data registers
    Wire.endTransmission(false);
    Wire.requestFrom(ADXL345_ADDR, 6, true);

    ax = Wire.read() | (Wire.read() << 8);
    ay = Wire.read() | (Wire.read() << 8);
    az = Wire.read() | (Wire.read() << 8);

    // Gesture Detection Logic
    String gesture = detectGesture(thumb, index, middle, ring, pinky, ax, ay, az);

    // Send detected gesture via Bluetooth
    Serial.println(gesture);
    delay(500);
}

String detectGesture(int t, int i, int m, int r, int p, int ax, int ay, int az) {
    if (t > 500 && i < 400 && m < 400 && r < 400 && p < 400) return "Thumbs Up";
    if (t < 400 && i > 500 && m > 500 && r > 500 && p > 500) return "Open Palm";
    if (t > 500 && i > 500 && m < 400 && r < 400 && p < 400) return "Peace Sign";
    if (ax > 100 && ay < 50) return "Wave Left";
    if (ax < -100 && ay < 50) return "Wave Right";
    // You can add as many as gestures if need
    return "Unknown Gesture";
}
