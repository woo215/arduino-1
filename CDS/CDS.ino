void setup() {
  Serial.begin(9600);
  pinMode(7, OUTPUT);
}

void loop() {
  int lightValue = analogRead(A0);
  Serial.println(lightValue);

  if(lightValue < 200) {
    digitalWrite(7, HIGH);
  }
  else {
    digitalWrite(7, LOW);
  }

  delay(1000);
}
