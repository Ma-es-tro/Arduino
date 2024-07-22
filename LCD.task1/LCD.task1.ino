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


void setup() {
pinMode(LED_BUILTIN,OUTPUT);
lcd.begin(16,2);
lcd.clear();
lcd.print("Basic Eng.Course");
}


void loop() {
led_blink(LED_BUILTIN,250);
}
void led_blink(int pin,int time) {
digitalWrite(pin,HIGH);
delay(5000);
digitalWrite(pin,LOW);
delay(5000);
}
