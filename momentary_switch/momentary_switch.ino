int ledPin = D7;
int switchPin = D5;
int buttonPressed = 0;
int ledOn = 0;

void setup() {
  Serial.begin(9600);

  pinMode(ledPin, OUTPUT);
  pinMode(switchPin, INPUT);
  digitalWrite(ledPin, LOW);
}

void loop() {
  int buttonState = digitalRead(switchPin);
  Serial.println(buttonState);
  if (buttonPressed == 0 and buttonState == HIGH) {
    buttonPressed = 1;
    ledOn = !ledOn;
    digitalWrite(ledPin, ledOn);
  } else {
    if (buttonState == LOW) {
      buttonState = 0;
      buttonPressed = 0;
    }
  }
}
