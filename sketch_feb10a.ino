#include <M5StickC.h>

 LED Blinking
 
const int ledPin = 26;
void setup() {
  // setup pin 5 as a digital output pin
  pinMode (ledPin, OUTPUT);
}
void loop() {
  digitalWrite (ledPin, HIGH);  // turn on the LED
  delay(500); // wait for half a second or 500 milliseconds
  digitalWrite (ledPin, LOW); // turn off the LED
  delay(500); // wait for half a second or 500 milliseconds
}
