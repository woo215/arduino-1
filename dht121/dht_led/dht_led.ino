#include "DHT.h"

#define DHTPIN 2
#define DHTTYPE DHT11

DHT dnt(DHTPIN, DHTTYPE)

void setup() {
  dht.begin();
  Serial.begin(9600);
  pinMode(4, OUTPUT);
}

void loop() {
  float h = dht.readHumidity();
  float t = dht.readTemperature();

  if(t>=26){
    digitalWrite(4, HIGH);
  }
  else {
    digitalWrite(4, LOW);
  }
}
