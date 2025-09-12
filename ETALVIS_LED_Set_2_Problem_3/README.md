<xaiArtifact artifact_id="6058b127-2267-487a-9c7a-8e0aa08c2b29" artifact_version_id="16650012-7751-4988-99e1-63ee84b17d9e" title="README.md" contentType="text/markdown">

# LED Binary Counter Project

## Overview
This project implements a binary counter pattern using an Arduino microcontroller. The code controls 8 LEDs connected to a port, lighting them in a sequence that represents increasing binary values (0x01, 0x03, 0x07, 0x0F, 0x1F, 0x3F, 0x7F, 0xFF), culminating in all LEDs on, which persists indefinitely.

## Hardware Requirements
- Arduino board (e.g., Arduino Uno)
- 8 LEDs
- Resistors (typically 220-330 ohms, depending on your LEDs)
- Breadboard and jumper wires

## Circuit Setup
The circuit consists of 8 LEDs connected to a single port of the Arduino (e.g., PORTB on some Arduino models). Each LED is connected to a pin of the port through a current-limiting resistor. Refer to the images below for the circuit diagram and setup.

### Images
- **LED Binary Counter Setup**: [ETALVIS_LED_Set_2_Problem_3](ETALVIS_LED_Set_2_Problem_3.jpg)
- **LED Binary Counter Circuit Diagram**: [ETALVIS_LED_Set_2_Problem_3_Circuit](ETALVIS_LED_Set_2_Problem_3_Circuit.jpg)

## Simulation
You can simulate this project using Wokwi. Visit the following link to try it out:
[Wokwi Simulation](https://wokwi.com/projects/441867445173002241)

## Code Description
The Arduino code consists of two main functions:
- **setup()**: Configures the port direction by setting the data direction register (DDR) to output mode (0x24, all pins set to output with 0xFF).
- **loop()**: Sequentially sets the port data register (0x25) to increasing binary values (0x01, 0x03, 0x07, 0x0F, 0x1F, 0x3F, 0x7F, 0xFF), lighting an increasing number of LEDs. After reaching 0xFF (all LEDs on), an infinite loop keeps all LEDs on by continuously setting *data to 0xFF.

## How to Run
1. Connect the LEDs to the Arduino as shown in the circuit diagram.
2. Upload the provided code to the Arduino using the Arduino IDE.
3. Power the Arduino to observe the binary counter effect, where LEDs light up in a sequence representing increasing binary values, ending with all LEDs on indefinitely.

## Notes
- The delay in the code is implemented using busy-wait loops (100,000 iterations). For more precise timing, consider using Arduino's `delay()` function.
- Ensure the LEDs are connected to the correct port (e.g., PORTB, addressed as 0x24 for DDR and 0x25 for PORT on ATmega328P-based Arduinos).
- The final infinite loop (`for(i = 1; i > 0; i++)`) keeps all LEDs on after the sequence completes.
- The images (`ETALVIS_LED_Set_2_Problem_3.jpg` and `ETALVIS_LED_Set_2_Problem_3_Circuit.jpg`) should be included in the repository for reference.
