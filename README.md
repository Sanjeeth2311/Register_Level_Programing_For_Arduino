LED Blinking Project
This project demonstrates a simple LED blinking circuit controlled by an Arduino. The code toggles an LED on and off with a delay, using direct register manipulation for efficient pin control.
Circuit Description
The circuit consists of an LED connected to a digital pin on an Arduino board. Below is the circuit diagram:

Assets

Circuit Image: LED Blinking
Circuit Diagram: LED Blinking Circuit
Working Video: LED Blinking Circuit Video

Code
The Arduino code uses direct register manipulation to control the LED pin. Below is the source code:
void setup() {
  volatile char *dir;
  dir = 0x24; // Set DDRB (Port B Direction Register) for output
  *dir = 0xFF; // Configure all pins of Port B as output
}

void loop() {
  volatile char *data;
  data = 0x25; // Set PORTB (Port B Data Register) for output
  long long i;
  for (i = 0; i < 100000; i++) {
    *data = 0x01; // Turn LED ON (set PB0 high)
  }
  for (i = 0; i < 100000; i++) {
    *data = 0x00; // Turn LED OFF (set PB0 low)
  }
}

Code Explanation

Setup: Configures Port B as output by setting the Data Direction Register (DDRB) to 0xFF.
Loop: Toggles the LED connected to PB0 (Port B, pin 0) by writing 0x01 (ON) and 0x00 (OFF) to the PORTB register, with delays implemented using for loops.

How to Run

Connect the LED circuit as shown in the circuit diagram.
Upload the provided code to your Arduino board using the Arduino IDE.
Observe the LED blinking behavior, as demonstrated in the video.

Notes

The for loops are used to create a delay effect. For more precise timing, consider using delay() or hardware timers.
Ensure the LED is connected with the correct polarity and a current-limiting resistor.
