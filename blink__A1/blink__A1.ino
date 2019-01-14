// Maike Wells, A1: Blink!
// blinks three leds.

// the setup function runs once when you press reset or power the board

int time = 1000

void setup() {
  // initialize each pin as an output
  for (int pin = 1, pin < 4, pin++) {
    pinMode(pin, OUTPUT)
  }
}

// the loop function runs over and over again forever
void loop() {
  for (int pin = 1, pin < 4, pin++) {
    digitalWrite(pin, HIGH);
    delay(time);
    digitalWrite(pin, LOW);
    delay(1000);
  }
