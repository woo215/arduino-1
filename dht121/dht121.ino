#include<DHT.h>

#define DHTPIN A1
#define DHTTYPE DHT11
DHT dnt(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
}

void loop() {
  int h = DHT.readHumidity();
  int t = DHT.readTemperature();

  Serial.print("Humidity : ");
  Serial.println(h);
  Serial.print("Temperature : ");
  Serial.println(t);

  delay(1000);
}
