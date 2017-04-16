#include "ESP8266WiFi.h"
/*
  ESP8266 Blink by Simon Peter
  Blink the blue LED on the ESP-01 module
  This example code is in the public domain

  The blue LED on the ESP-01 module is connected to GPIO1
  (which is also the TXD pin; so we cannot use Serial.print() at the same time)

  Note that this sketch uses LED_BUILTIN to find the pin with the internal LED
*/

void setup() {
  Serial.begin(115200);
  Serial.println("Booting");
  pinMode(D5, OUTPUT);   // LED pin as output.
  
  
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(D5, HIGH);  // Turn the LED off by making the voltage HIGH
  Serial.println("High");
  delay(5000);                      // Wait for a second
  digitalWrite(D5, LOW);  // Turn the LED off by making the voltage HIGH
  Serial.println("Low");
  delay(5000);
}
