Running Light Project
Overview
This project implements a running light sequence using an Arduino microcontroller. The code controls a series of LEDs connected to a port, creating a pattern where each LED lights up sequentially and then turns off, producing a "running" effect.
Hardware Requirements

Arduino board (e.g., Arduino Uno)
8 LEDs
Resistors (appropriate values for your LEDs, typically 220-330 ohms)
Breadboard and jumper wires

Circuit Setup
The circuit consists of 8 LEDs connected to a single port of the Arduino. Each LED is connected to a pin of the port (e.g., PORTD on Arduino Uno) through a current-limiting resistor. Refer to the images below for the circuit diagram and setup.
Images

Running Light Circuit Diagram: Running_Light_Circuit
Running Light Setup: Running_Light

Simulation
You can simulate this project using Wokwi. Visit the following link to try it out:Wokwi Simulation
Code Description
The Arduino code consists of two main functions:

setup(): Configures the port direction by setting the data direction register (DDR) to output mode (0x30).
loop(): Repeatedly sets the port data register (0x31) to different values (0x01, 0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0x80) to light each LED in sequence, with delays implemented using for loops (100,000 iterations of setting the port to the value and then to 0x00).


How to Run

Connect the LEDs to the Arduino as shown in the circuit diagram.
Upload the provided code to the Arduino using the Arduino IDE.
Power the Arduino to observe the running light effect, where each LED lights up in sequence.

Notes

The delay in the code is implemented using busy-wait loops (100,000 iterations). For more precise timing, consider using Arduino's delay() function.
Ensure the LEDs are connected to the correct port (e.g., PORTD, addressed as 0x30 for DDR and 0x31 for PORT on ATmega328P-based Arduinos).
The images (Running_Light.jpg and Running_Light_Circuit.jpg) should be included in the repository for reference.
