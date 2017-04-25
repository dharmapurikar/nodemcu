const int ledPin = D7;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  for (int i = 0; i < 1024; i++) {
    analogWrite(ledPin, i);
    delay(1);
  }
  for (int i = 1024; i > 0; i--) {
    analogWrite(ledPin, i);
    delay(1);
  }
  delay(10);
}
