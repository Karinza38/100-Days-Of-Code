#include <TFT.h>

void setup() {
  // initialize digital pin LED_BUILTIN as an output.

  pinMode(8, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(7, OUTPUT);
  Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop() {
  // turn the LED on (HIGH is the voltage level)
  digitalWrite(12, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(5000);                      // wait for a second
  // turn the LED off by making the voltage LOW
  digitalWrite(12, LOW);
  delay(5000);                      // wait for a second
    digitalWrite(8, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(5000);                      // wait for a second
  // turn the LED off by making the voltage LOW
  digitalWrite(8, LOW);
  delay(10000);                      // wait for a second
  digitalWrite(7, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(5000);                      // wait for a second
  // turn the LED off by making the voltage LOW
  digitalWrite(7, LOW);
  delay(15000);                     // wai for a second

  // turns on all the LED in the circuit
  digitalWrite(12, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(7, HIGH);
  delay(5000);
  digitalWrite(12, LOW);
  digitalWrite(8, LOW);
  digitalWrite(7, LOW);
  delay(20000);tt
  
}
