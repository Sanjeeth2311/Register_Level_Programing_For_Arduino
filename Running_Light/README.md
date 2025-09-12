# Running Light Project

This project demonstrates a simple running light sequence using an Arduino microcontroller and 8 LEDs.  The LEDs illuminate sequentially, creating a visually appealing "running" effect.

## Features

* *Sequential LED Illumination:*  Each LED lights up one after the other, creating a running light effect.
* *Arduino-based Control:* Uses an Arduino microcontroller for easy programming and control.
* *Simple Circuit:*  Requires minimal components: LEDs, resistors, and a breadboard.
* *Wokwi Simulation:*  Includes a link to a Wokwi simulation for testing without hardware.

## Hardware Used

* *Arduino:* Arduino Maga
* *LEDs:* 8 LEDs (any color)

## Installation

1. *Hardware Setup:*
   * Connect 8 LEDs to an Arduino port (e.g., PORTD) through current-limiting resistors (220-330 ohms each).  Refer to the Running_Light_Circuit.jpg diagram.
   * Connect the Arduino to your computer using a USB cable.
2. *Software Setup:*
   * Install the Arduino IDE ([https://www.arduino.cc/en/Main/Software](https://www.arduino.cc/en/Main/Software)).
   * Download the Arduino code from this repository.
   * Open the Arduino code in the Arduino IDE.
3. *Upload Code:*
   * Select your Arduino board from the Tools menu in the Arduino IDE.
   * Select the correct port from the Tools menu.
   * Click the upload button to upload the code to your Arduino.

## Usage

After uploading the code, power the Arduino. You should observe the LEDs illuminating sequentially, creating the running light effect.

## Wokwi Simulation

Test the project virtually using the Wokwi simulator: [Wokwi Simulation Link](https://wokwi.com/projects/441788934650700801)

## 📸 **Visuals**:
- Circuit Diagram: [Running_Light_Circuit.png](./Running_Light_Circuit.png)
- Circuit Photo: [Running_Light.png](./Running_Light.png)

## Notes

* The current implementation uses busy-wait loops for delays. For more precise timing, consider using the Arduino delay() function.  This would require modifying the loop() function.
* Ensure the LEDs are correctly connected to the specified port (e.g., PORTD).  Incorrect connections may lead to unexpected behavior or damage to the components.  Double-check the wiring against the Running_Light_Circuit.jpg diagram.
* The images Running_Light.jpg and Running_Light_Circuit.jpg are crucial for understanding the circuit setup.  Please ensure these are included in the repository.
