// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(8, OUTPUT); // initalize the red pin to 8
  pinMode(9, OUTPUT); // initalize the green pin to 9
  pinMode(10, OUTPUT);  // initalize the yellow pin to 10
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(8, HIGH);   // turn the red LED on (HIGH is the voltage level)
  delay(100);                       // wait for a millisecond
  digitalWrite(8, LOW);    // turn the red LED off by making the voltage LOW
  delay(100);             // wait for a second
  digitalWrite(9, HIGH);  // turn the green LED on
  delay(100);              // wait for a millisecond
  digitalWrite(9, LOW);    // turn the green LED off
  delay(100);               // wait for a millisecond      
  digitalWrite(10, HIGH);  // turn the yellow LED on
  delay(100);               // wait for a millisecond     
  digitalWrite(10, LOW);  // turn the yellow LED off
  delay(100);               // wait for a millisecond
}
