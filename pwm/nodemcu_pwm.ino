void setup() {
  Serial.begin(9600);
  analogWrite(D5, 512);
}

void loop() {
 int val = analogRead(A0);
//  val = map(val, 0, 1023, 0, 3300);
  Serial.print(val);
  Serial.println(" mV");
  delay(500);
}
