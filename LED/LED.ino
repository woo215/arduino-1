void setup() {
  pinMode(7, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  digitalWrite(7, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(11, HIGH);
  delay(500);
  
  digitalWrite(7, LOW);
  digitalWrite(5, LOW);
  digitalWrite(11, LOW);
  delay(500);
}
