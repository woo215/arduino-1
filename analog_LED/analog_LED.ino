void setup() {
  
}

void loop() {
  for(int i=0; i<256; i++){
    analogWrite(3, i);
    delay(10);
  }
  for(int i=255; i>0; i--){
    analogWrite(3, i);
    delay(10);
  }
}
