const int analogInPin = A0;  // Analog input pin that the photoresistor is attached to
const int redPin = 10; // Analog output pin that the LED is attached to (red LED)
const int greenPin = 9; // 

int sensorValue = 0;        // value read from the photoresistor 
int outputValue = 0;        // value output to the PWM (analog out) 

void setup() {
  // initialize serial communications at 9600 bps:
  Serial.begin(9600);
  pinMode(redPin, OUTPUT); // set red led pin 8 as output.
  pinMode(greenPin, OUTPUT);
  pinMode(analogInPin, INPUT); // set analog in pin as input 
}

void loop() {
  // read the analog in value:
  sensorValue = analogRead(analogInPin);
  // map it to the range of the analog out:
  outputValue = map(sensorValue, 0, 1023, 0, 255); //not sure exactly what the numbers mean?????
  if (sensorValue < 900) {
    analogWrite(redPin, outputValue); //map redpin to the output value
    analogWrite(greenPin, 0);
    Serial.println("Red Pin");
    Serial.println(sensorValue);
  }
  if (sensorValue >= 900){
    analogWrite(greenPin, outputValue); //map yellow pin to the output value
    analogWrite(redPin, 0);
    Serial.println("Green Pin");
    Serial.println(sensorValue);
  }
  // wait 2 milliseconds before the next loop for the analog-to-digital
  // converter to settle after the last reading:
  delay(2);
}
