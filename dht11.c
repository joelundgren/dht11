#include "DHT.h"
#define DHTPIN 2 // Digital pin connected to the DHT sensor

DHT dht(DHTPIN, DHT11);

void setup() 
{
  Serial.begin(9600);
  Serial.println(F("DHT11 Temperature Reading!"));
  dht.begin();
}

void loop() 
{
  delay(10000); // wait 10 seconds between measurements to give the sensor some time

  float f = dht.readTemperature(true); // true will return the value in fahrenheit 
  
  Serial.print(F("Temperature: "));
  Serial.println(f);
}
