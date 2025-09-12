<xaiArtifact artifact_id="e27c2d99-914c-4a02-af74-c2ffb953e6f2" artifact_version_id="1ab9d464-c79b-4025-aca1-fd442375bc72" title="README.md" contentType="text/markdown">

# Fast LED Sequence Project

## Overview
This project creates a fast sequential LED lighting pattern using an Arduino microcontroller. The code rapidly cycles through 8 LEDs connected to a port, lighting each one in sequence within a loop, followed by a brief period where all LEDs are off, creating a blinking effect.

## Hardware Requirements
- Arduino board (e.g., Arduino Uno)
- 8 LEDs
- Resistors (typically 220-330 ohms, depending on your LEDs)
- Breadboard and jumper wires

## Circuit Setup
The circuit consists of 8 LEDs connected to a single port of the Arduino (e.g., PORTA on some Arduino models). Each LED is connected to a pin of the port through a current-limiting resistor. Refer to the images below for the circuit diagram and setup.

### Images
- **Fast LED Sequence Setup**: [ETALVIS_LED_Set_2_Problem_2](ETALVIS_LED_Set_2_Problem_2.png)
- **Fast LED Sequence Circuit Diagram**: [ETALVIS_LED_Set_2_Problem_2_Circuit](ETALVIS_LED_Set_2_Problem_2_Circuit.png)

## Simulation
You can simulate this project using Wokwi. Visit the following link to try it out:
[Wokwi Simulation](https://wokwi.com/projects/441867445173002241)

## Code Description
The Arduino code consists of two main functions:
- **setup()**: Configures the port direction by setting the data direction register (DDR) to output mode (0x21, all pins set to output with 0xFF).
- **loop()**: Rapidly cycles through setting the port data register (0x22) to values (0x01, 0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0x80) to light each LED in sequence within a single loop iteration, repeated 100,000 times. This is followed by a loop that turns all LEDs off (0x00) for 100,000 iterations, creating a blinking effect.

## How to Run
1. Connect the LEDs to the Arduino as shown in the circuit diagram.
2. Upload the provided code to the Arduino using the Arduino IDE.
3. Power the Arduino to observe the fast LED sequence, where each LED lights up rapidly in order, followed by a brief period with all LEDs off.

## Notes
- The rapid cycling of LEDs within a single loop iteration may appear as a fast sequence or flicker due to the lack of delays between individual LED activations. For slower, more distinct transitions, consider adding delays or separating the LED activations into individual loops.
- The delay effect is achieved using busy-wait loops (100,000 iterations). For more precise timing, consider using Arduino's `delay()` function.
- Ensure the LEDs are connected to the correct port (e.g., PORTA, addressed as 0x21 for DDR and 0x22 for PORT on some Arduino models).
- The images (`ETALVIS_LED_Set_2_Problem_2.jpg` and `ETALVIS_LED_Set_2_Problem_2_Circuit.jpg`) should be included in the repository for reference.