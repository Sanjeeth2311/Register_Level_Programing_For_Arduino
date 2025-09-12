<xaiArtifact artifact_id="352846cb-033c-4e21-a9c0-6fbb49a4536e" artifact_version_id="53da33cd-cc45-412f-b1e6-0c0cff75311d" title="README.md" contentType="text/markdown">

# LED Binary Pattern Project

## Overview
This project implements a binary pattern sequence using an Arduino microcontroller. The code controls 8 LEDs connected to a port, displaying a sequence of binary patterns (0x02, 0x0A, 0x2A, 0xAA) and then keeps the final pattern (0xAA) on indefinitely.

## Hardware Requirements
- Arduino board (e.g., Arduino Uno)
- 8 LEDs
- Resistors (typically 220-330 ohms, depending on your LEDs)
- Breadboard and jumper wires

## Circuit Setup
The circuit consists of 8 LEDs connected to a single port of the Arduino (e.g., PORTD on Arduino Uno). Each LED is connected to a pin of the port through a current-limiting resistor. Refer to the images below for the circuit diagram and setup.

### Images
- **LED Binary Pattern Setup**: [ETALVIS_LED_Set_2_Problem_5](ETALVIS_LED_Set_2_Problem_5.png)
- **LED Binary Pattern Circuit Diagram**: [ETALVIS_LED_Set_2_Problem_5_Circuit](ETALVIS_LED_Set_2_Problem_5_Circuit.png)

## Simulation
You can simulate this project using Wokwi. Visit the following link to try it out:
[Wokwi Simulation](https://wokwi.com/projects/441879208181587969)

## Code Description
The Arduino code consists of two main functions:
- **setup()**: Configures the port direction by setting the data direction register (DDR) to output mode (0x30, all pins set to output with 0xFF).
- **loop()**: Sequentially sets the port data register (0x31) to binary patterns (0x02, 0x0A, 0x2A, 0xAA), lighting specific LEDs in each step. Each pattern is held for 100,000 iterations. After the final pattern (0xAA), an infinite loop keeps this pattern on by continuously setting *data to 0xAA.

## How to Run
1. Connect the LEDs to the Arduino as shown in the circuit diagram.
2. Upload the provided code to the Arduino using the Arduino IDE.
3. Power the Arduino to observe the LED sequence displaying binary patterns (0x02, 0x0A, 0x2A, 0xAA), ending with the final pattern (0xAA) persisting indefinitely.

## Notes
- The delay effect is achieved using busy-wait loops (100,000 iterations). For more precise timing, consider using Arduino's `delay()` function.
- Ensure the LEDs are connected to the correct port (e.g., PORTD, addressed as 0x30 for DDR and 0x31 for PORT on ATmega328P-based Arduinos).
- The final infinite loop (`for(i = 1; i > 0; i++)`) keeps the last pattern (0xAA) on, lighting alternate LEDs (bits 1, 3, 5, 7).
- The images (`ETALVIS_LED_Set_2_Problem_5.jpg` and `ETALVIS_LED_Set_2_Problem_5_Circuit.jpg`) should be included in the repository for reference.