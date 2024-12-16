#include "GebraBit_SHT35.h"

GebraBit_SHT35 SHT35;

void setup() {
    Wire.begin();           // Initialize the I2C bus
    Serial.begin(9600);     // Initialize serial communication for debugging

    GB_SHT35_initialize(&SHT35); // Initialize the SHT35 sensor
    GB_SHT35_Configuration(&SHT35); // Configure the SHT35 sensor
}

void loop() {
    GB_SHT35_Get_Data(&SHT35); // Read data from the sensor

    Serial.print("Temperature: ");
    Serial.print(SHT35.TEMPERATURE);
    Serial.println(" °C");

    Serial.print("Humidity: ");
    Serial.print(SHT35.HUMIDITY);
    Serial.println(" %");

    delay(2000); // Delay between readings
}
