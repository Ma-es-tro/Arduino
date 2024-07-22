#include <LiquidCrystal.h>

#define LCD_RS_PIN 5
#define LCD_RW_PIN 6
#define LCD_E_PIN 7
#define D4_PIN 8
#define D5_PIN 9
#define D6_PIN 10
#define D7_PIN 11

LiquidCrystal lcd(LCD_RS_PIN,LCD_RW_PIN,LCD_E_PIN,
D4_PIN, D5_PIN, D6_PIN, D7_PIN);

byte smiley[8] = {
B00000,
B10001,
B00000,
B00000,
B10001,
B01110,
B00000,
};

void setup() {
lcd.createChar(0,smiley); 
lcd.begin(16,2);
lcd.write(byte(0));} 

void loop() {
}
