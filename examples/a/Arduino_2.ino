/*
	An example showing how to display a "Hello World" in the Serial Monitor of Arduino.
*/

void setup() {
  // setting up the serial 
  Serial.begin(9600);
  Serial.println("Hello World");
}

void loop() {
}