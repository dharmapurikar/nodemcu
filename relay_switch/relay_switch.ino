
void setup() {
  Serial.begin(9600);
  pinMode(D6, OUTPUT);
  Serial.println("Connected.");
}

void loop() {
  digitalWrite(D6, LOW);
  delay(1000);
  digitalWrite(D6, HIGH);
}
