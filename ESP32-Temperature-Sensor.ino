
#include "DHT.h"

#define DHTPIN 33     // Digital pin connected to the DHT sensor

#define DHTTYPE DHT11   // DHT Sensor Type

DHT dht(DHTPIN, DHTTYPE);

void setup() {

  Serial.begin(9600);   // Starting the serial communication

  dht.begin();          // Starting to listen to the sensor

}

void loop() {

  // Wait a few seconds between measurements.
  delay(5000);

  // Reading temperature & storing it in a variable
  float temp = dht.readTemperature();

  // Printing the temperature variable to the serial monitor
  Serial.println(temp, 2);

}
