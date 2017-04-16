bool buttonState = LOW;
int pins[] = {16, 5, D2};
int inPin = D6;
int val = LOW;
int secs = 0;

void setup() {
  Serial.begin(9600);
  pinMode(D0, OUTPUT);
  pinMode(D1, OUTPUT);
  pinMode(D2, OUTPUT);
  pinMode(inPin, INPUT);
}

void loop() {
  buttonState = digitalRead(inPin);
  if (buttonState == HIGH) {
    // Ignore
  } else {
    Serial.println("Toggled");
    val = !val;
    Serial.println(val);
    delay(500);
  }

  if (secs != millis() / 1000) {
    secs = millis() / 1000;
    for (int i = 0; i < 3; i++) {
      digitalWrite(pins[i], val);
    }
    digitalWrite(pins[secs % 3], !val);
  }
}
