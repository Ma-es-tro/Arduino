#include <Wire.h>
#include <SFE_BMP180.h>
#include <LiquidCrystal_PCF8574.h>

#define BAUDRATE 115200
#define ALTITUDE 37.0

char buff;
double temp, pressure, p0, a;
char status;

SFE_BMP180 bmp180;
LiquidCrystal_PCF8574 lcd(0x27);

void setup() {
  Serial.begin(BAUDRATE);
  lcd.begin(16, 2);
  bmp180.begin(); 

void loop() {
  while (Serial.available() == 0);

  if (Serial.available() > 0) {
    buff = Serial.read();
    switch (buff) {
      case 'P':
        Serial.println("P was pressed");
        status = bmp180.startTemperature();
        if (status != 0) {
          delay(status);
          status = bmp180.getTemperature(temp);
          if (status != 0) {
            lcd.print("Pressure: ");
            lcd.print(pressure, 2);
            lcd.println(" mb");
          }
        }
        break;

      case 'T':
        Serial.println("T was pressed");
        status = bmp180.startTemperature();
        if (status != 0) {
          delay(status);
          status = bmp180.getTemperature(temp);
          if (status != 0) {
            lcd.print("Temperature: ");
            lcd.print(temp, 2);
            lcd.println(" deg C");
          }
        }
        break;

      case 'A':
        Serial.println("A was pressed");
        status = bmp180.startTemperature();
        if (status != 0) {
          delay(status);
          status = bmp180.getTemperature(temp);

          status = bmp180.startPressure(3);
          if (status != 0) {
            delay(status);

            status = bmp180.getPressure(pressure, temp);
            p0 = bmp180.sealevel(pressure, ALTITUDE);

            a = bmp180.altitude(pressure, p0);
            lcd.print("Altitude: ");
            lcd.print(a, 0);
            lcd.println(" meters");
          }
        }
        break;

      default:
        Serial.println("Unrecognized command");
        break;
    }
  }
}

