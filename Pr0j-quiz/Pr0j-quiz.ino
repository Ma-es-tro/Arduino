#include <LiquidCrystal_PCF8574.h>
#include <Wire.h>
#include <Servo.h>


#define MaxR 50
#define BAUDRATE 9600
#define Red 11
#define Green 9
#define TriggerPin 6
#define EchoPin 7
#define Button_L 13
#define Button_R 12
#define Servo_Pin 2

LiquidCrystal_PCF8574 lcd(0x27);

byte FU[8] = {
  B00000,
  B00000,
  B00000,
  B00000,
  B00100,
  B01110,
  B11111,
};

Servo myservo;
long distance;
int button_R;
int button_L;

void setup() {
  Serial.begin(BAUDRATE);
  
  pinMode(Button_L, INPUT_PULLUP);
  pinMode(Button_R, INPUT_PULLUP);
  
  randomSeed(analogRead(0));
  myservo.attach(Servo_Pin);
  pinMode(Red, OUTPUT);
  pinMode(Green, OUTPUT);
  lcd.begin(16, 2);
  lcd.clear();
  lcd.print("Basic Eng.Course");
}
void retryQuiz() {
 
  lcd.clear();
  lcd.print("Quiz Restarted");
  delay(2000);
}
void loop() {
  button_L = digitalRead(Button_L);
  button_R = digitalRead(Button_R);
  
  int cases = random(1, 6);

  digitalWrite(TriggerPin, LOW);
  delayMicroseconds(2);
  digitalWrite(TriggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(TriggerPin, LOW);
  distance = pulseIn(EchoPin, HIGH) / 58.2;

  if (distance <= 10) {
    Serial.println("Start Quiz");
    lcd.clear();
    lcd.print("Start Quiz");
    delay(3000);
    lcd.clear();
    lcd.print("Press Any Button");
    delay(10000);
if(digitalRead(button_L) == LOW && digitalRead(button_R) == LOW) 
{
  Serial.println("Button is Pressed");
switch(cases){
  case 1:
  lcd.print("What is the Powerhouse of the Cell?");
  
  delay(5000);
  lcd.clear();
  lcd.setCursor(5,0);
  lcd.print("Mitochindria(L)");
  lcd.setCursor(5,1);
  lcd.print("Chloroplast(R)");
  myservo.write(0);
  delay(1250);
  myservo.write(90);
  delay(1250);
  myservo.write(180);
  delay(1250);
  myservo.write(270);
  delay(1250);
  myservo.write(360);
  delay(1250);
  if(digitalRead(button_L) == LOW)
  {
    lcd.print("Correct!!!!!");
    digitalWrite(Green, HIGH);
    delay(3000);
    digitalWrite(Green, LOW);
  }
  if(digitalRead(button_R) == LOW)
  {
    lcd.print("Wrong!!");
    digitalWrite(Red, HIGH);
    delay(3000);
    digitalWrite(Red, LOW);
  }
  if(digitalRead(button_L && button_R) == HIGH)
  {
    lcd.print("Out of Time!!!");
break;
  }

  case 2:
  lcd.print("What do you need for eating?");
delay(5000);
  lcd.clear();
  lcd.setCursor(5,0);
  lcd.print("Esophagus(L)");
  lcd.setCursor(5,1);
  lcd.print("Skin(R)");
  myservo.write(0);
  delay(1250);
  myservo.write(90);
  delay(1250);
  myservo.write(180);
  delay(1250);
  myservo.write(270);
  delay(1250);
  myservo.write(360);
  delay(1250);
  if(digitalRead(button_R) == LOW)
  {
    lcd.print("Wrong!!!!!");
    digitalWrite(Green, HIGH);
    delay(3000);
    digitalWrite(Green, LOW);
  }
  if(digitalRead(button_L) == LOW)
  {
    lcd.print("Correct!!");
    digitalWrite(Red, HIGH);
    delay(3000);
    digitalWrite(Red, LOW);
  }
  if(digitalRead(button_L && button_R) == HIGH)
  {
    lcd.print("Out of Time!!!");
break;

case 3:
lcd.print("Largest Continent of the World?");
delay(5000);
  lcd.clear();
  lcd.setCursor(5,0);
  lcd.print("North America(L)");
  lcd.setCursor(5,1);
  lcd.print("Asia(R)");
  myservo.write(0);
  delay(1250);
  myservo.write(90);
  delay(1250);
  myservo.write(180);
  delay(1250);
  myservo.write(270);
  delay(1250);
  myservo.write(360);
  delay(1250);
  if(digitalRead(button_R) == LOW)
  {
    lcd.print("Correct!!!!!");
    digitalWrite(Green, HIGH);
    delay(3000);
    digitalWrite(Green, LOW);
  }
  if(digitalRead(button_L) == LOW)
  {
    lcd.print("Wrong!!");
    digitalWrite(Red, HIGH);
    delay(3000);
    digitalWrite(Red, LOW);
  }
  if(digitalRead(button_L && button_R) == HIGH)
  {
    lcd.print("Out of Time!!!");
break;

case 4:
lcd.print("LOL worlds 2023 champion?");
delay(5000);
  lcd.clear();
  lcd.setCursor(5,0);
  lcd.print("T1(L)");
  lcd.setCursor(5,1);
  lcd.print("JDG(R)");
  myservo.write(0);
  delay(1250);
  myservo.write(90);
  delay(1250);
  myservo.write(180);
  delay(1250);
  myservo.write(270);
  delay(1250);
  myservo.write(360);
  delay(1250);
  if(digitalRead(button_R) == LOW)
  {
    lcd.print("Wrong!!!!!");
    digitalWrite(Green, HIGH);
    delay(3000);
    digitalWrite(Green, LOW);
  }
  if(digitalRead(button_L) == LOW)
  {
    lcd.print("Correct!!!!!");
    digitalWrite(Red, HIGH);
    delay(3000);
    digitalWrite(Red, LOW);
  }
  if(digitalRead(button_L && button_R) == HIGH)
  {
    lcd.print("Out of Time!!!");
break;

case 5:
lcd.print("Who am I?");
delay(5000);
  lcd.clear();
  lcd.setCursor(5,0);
  lcd.print("Francy(L)");
  lcd.setCursor(5,1);
  lcd.print("Mathew(R)");
  myservo.write(0);
  delay(1250);
  myservo.write(90);
  delay(1250);
  myservo.write(180);
  delay(1250);
  myservo.write(270);
  delay(1250);
  myservo.write(360);
  delay(1250);
  if(digitalRead(button_R) == LOW)
  {
    lcd.print("Correct!!!!!");
    digitalWrite(Green, HIGH);
    delay(3000);
    digitalWrite(Green, LOW);
  }
  if(digitalRead(button_L) == LOW)
  {
    lcd.print("Wrong!!");
    digitalWrite(Red, HIGH);
    delay(3000);
    digitalWrite(Red, LOW);
  }
  if(digitalRead (button_L && button_R) == HIGH)
  {
    lcd.print("Out of Time!!!");
break;

default:
break;

lcd.setCursor(5,0);
lcd.print("Press (R) to Retry");
lcd.setCursor(5,1);
lcd.print("Press (L) to end program");

if(digitalRead(button_L) == LOW)
{
  exit(0);
}
if(digitalRead(button_R) == LOW)
{
retryQuiz();
}
}
}

}

  }
}
}

  }
  }

