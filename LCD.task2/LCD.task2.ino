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

char myname[] = "Mathew";
char surname[] = "Amada";

void setup() {
lcd.begin(16,2);
lcd.clear();
}

void loop() {
lcd.setCursor(5,0);
lcd.print(myname);
lcd.setCursor(5,1);
lcd.print(surname);
while(1);
}
