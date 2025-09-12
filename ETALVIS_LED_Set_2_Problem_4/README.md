<xaiArtifact artifact_id="b611c16b-febd-4605-a369-d6d3bc46839e" artifact_version_id="8f2bb934-49cb-4807-9873-18a5181cbcb2" title="README.md" contentType="text/markdown">

# LED Sequence Project

## Overview
This project demonstrates a sequential LED lighting pattern using an Arduino microcontroller. The code controls 8 LEDs connected to a port, lighting them one at a time in a continuous sequence.

## Hardware Requirements
- Arduino board (e.g., Arduino Uno)
- 8 LEDs
- Resistors (typically 220-330 ohms, depending on your LEDs)
- Breadboard and jumper wires

## Circuit Setup
The circuit consists of 8 LEDs connected to a single port of the Arduino (e.g., PORTC on some Arduino models). Each LED is connected to a pin of the port through a current-limiting resistor. Refer to the images below for the circuit diagram and setup.

### Images
- **LED Sequence Setup**: [ETALVIS_LED_Set_2_Problem_4](ETALVIS_LED_Set_2_Problem_4.png)
- **LED Sequence Circuit Diagram**: [ETALVIS_LED_Set_2_Problem_4_Circuit](ETALVIS_LED_Set_2_Problem_4_Circuit.png)

## Simulation
You can simulate this project using Wokwi. Visit the following link to try it out:
[Wokwi Simulation](https://wokwi.com/projects/441867445173002241)

## Code Description
The Arduino code consists of two main functions:
- **setup()**: Configures the port direction by setting the data direction register (DDR) to output mode (0x27, all pins set to output with 0xFF).
- **loop()**: Sequentially sets the port data register (0x28) to values (0x01, 0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0x80) to light each LED one at a time, with delays implemented using for loops (100,000 iterations).


## How to Run
1. Connect the LEDs to the Arduino as shown in the circuit diagram.
2. Upload the provided code to the Arduino using the Arduino IDE.
3. Power the Arduino to observe the LED sequence, where each LED lights up one at a time in order.

## Notes
- The delay in the code is implemented using busy-wait loops (100,000 iterations). For more precise timing, consider using Arduino's `delay()` function.
- Ensure the LEDs are connected to the correct port (e.g., PORTC, addressed as 0x27 for DDR and 0x28 for PORT on some Arduino models).
- The images (`ETALVIS_LED_Set_2_Problem_4.jpg` and `ETALVIS_LED_Set_2_Problem_4_Circuit.jpg`) should be included in the repository for reference.
