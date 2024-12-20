# SignGlove
SignGlove: Translating Gestures into Words

Overview

SignGlove is a wearable device designed to bridge the communication gap by translating sign language gestures into text or speech in real-time. This project aims to promote inclusivity and accessibility for individuals with hearing or speech impairments.

Features:
Real-Time Gesture Recognition: Detects and translates hand gestures instantaneously.
Cross-Language Support: Customizable to recognize gestures from various sign languages.
Portable Design: Lightweight and ergonomic glove for daily use.
Open Source: Encourages contributions and enhancements from the community.

Project Goals:

To enhance inclusivity and accessibility by enabling seamless communication between sign language users and non-signers.

Components and Technologies:

Hardware
Flex Sensors: Measure the bending of fingers to capture gestures.
Arduino Microcontroller: Processes sensor data and facilitates communication with other devices.

Software

Programming Language: Arduino C++
Gesture Recognition Algorithms: Processes data from sensors to identify specific gestures.
Output Interfaces: Text display (LCD) or speech synthesis module for communication.

Getting Started

Prerequisites

Hardware Components:
Flex sensors (5 for each finger)
Arduino (e.g., Arduino Uno or Nano)
Connecting wires
Power supply(Battery)
Resistors (5 each of 10kohms)
Glove

Software:
Arduino IDE
Necessary libraries and other components (available in Arduino Library Manager)

Assembly:

Attach flex sensors to each finger of the glove.
Wire the output devices (e.g., LCD or speaker module) to the Arduino.
Secure all components to the glove using adhesive or stitching.
For Refernce look into the block diagram provided.

Installation:

Open the project in Arduino IDE.
Install the required libraries via Sketch > Include Library > Manage Libraries.
Upload the code to the Arduino board.

Usage:

Wear the glove and ensure all connections are secure.
Power on the device.
Perform gestures; the glove will translate them to text displayed on the screen or output as speech.

Repository Structure

SignGlove/
├── Code/
│   ├── sign_glove.ino       # Main Arduino code
│   ├── gesture_library.h    # Gesture recognition logic
├── Images/                  # Assembly and usage images
├── README.md                # Project documentation
├── LICENSE                  # Licensing information


Contributing

Contributions are welcome! To contribute:
Fork the repository.
Create a feature branch.
Submit a pull request with your changes.

License:

This project is licensed under the MIT License. See the LICENSE file for details.

Acknowledgments

Special thanks to open-source contributors and developers of Arduino libraries.
Inspired by the need for more accessible communication tools.


Contact

For queries or collaboration opportunities, contact:

Email: kothintimani@gmail.com

GitHub: https://github.com/TONY7569
