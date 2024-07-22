

#include <SFE_BMP180.h>


#define BAUDRATE 115200

#include <LiquidCrystal_PCF8574.h>

#include <Wire.h>
#define DELAY 2000
#define seaLevelPressure_hPa 992.0

SFE_BMP180 bmp;




void setup() {
Serial.begin(BAUDRATE);
if (!bmp.begin()) {
Serial.println("Could not find a valid sensor.");
while(1); }
}

void loop() {
Serial.print("Temperature = ");
Serial.print(bmp.getTemperature());
Serial.println(" *C");

Serial.print("Pressure = ");
Serial.print(bmp.getPressure());
Serial.println(" Pa");
 /* 
Serial.print("Altitude = ");
Serial.print(bmp.readAltitude());
Serial.println(" meters");

Serial.print("Pressure at sealevel (calculated) = ");
Serial.print(bmp.readSealevelPressure());
Serial.println(" Pa");

Serial.print("Real altitude = ");
Serial.print(bmp.readAltitude(seaLevelPressure_hPa * 100));
Serial.println(" meters");
*/
Serial.println();
delay(DELAY);
}
