int flexpin = A0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int flexVal;
  flexVal = analogRead(flexpin);
  Serial.prinln(flexVal);
  delay(1000);
}
