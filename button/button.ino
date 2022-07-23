void setup() {
  Serial.begin(9600);
  pinMode(4, INPUT_PULLUP);
  pinMode(13, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop() {
  int buttonValue = digitalRead(4);
  
  if(buttonValue==HIGH){
  digitalWrite(13, HIGH);
  digitalWrite(7, HIGH);
  }
  
  else {
  digitalWrite(13, LOW);
  digitalWrite(7, LOW);
  }
}
