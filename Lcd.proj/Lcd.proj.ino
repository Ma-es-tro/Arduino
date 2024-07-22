#include <LiquidCrystal.h>

const int analogPin = A0; 
const int numReadings = 10; 
int readings[numReadings];   
int index = 0;               
float highestTemp = -999;    
float lowestTemp = 999;      

LiquidCrystal lcd(12, 11, 5, 4, 3, 2); 

void setup() {
  lcd.begin(16, 2);
  lcd.print("Recording...");

  
  for (int i = 0; i < numReadings; i++) {
    readings[i] = 0;
  }

  delay(10000); 
}

void loop() {
  
  delay(1000);

 
  readings[index] = analogRead(analogPin);

  
  float currentTemp = readings[index] * 5.0 / 1024 * 100; 

  
  if (currentTemp > highestTemp) {
    highestTemp = currentTemp;
  }

  if (currentTemp < lowestTemp) {
    lowestTemp = currentTemp;
  }

  index++;

  
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Recording...");

  
  if (index == numReadings) {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Recording done!");

    lcd.setCursor(0, 1);
    lcd.print("High: ");
    lcd.print(highestTemp);
    lcd.print(" C   Low: ");
    lcd.print(lowestTemp);
    lcd.print(" C    ");

    
    while (1);
  }
}
