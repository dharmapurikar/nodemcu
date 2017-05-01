const int potPin = A0;
const int ledPin = D3;
int val = 0;
void setup() {
  Serial.begin(9600);
  pinMode(potPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  val = analogRead(potPin);
  if (val < 10) {
    analogWrite(ledPin, 0);
  } else if (val > 950) {
    analogWrite(ledPin, 1023);
  } else {
    analogWrite(ledPin, val);
  }
}
