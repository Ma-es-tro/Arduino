#define BAUDRATE 115200
#define Red 13
#define Green 12
#define Yellow 11
#define Del 2000 
#define BUTTON1 5
#define Del 100
#define del 5000
int buttonstate;

 
void setup() {
  pinMode(Red, OUTPUT);
  
  
  pinMode(BUTTON1, INPUT_PULLUP);
  Serial.begin (BAUDRATE);
   
}

void loop() {
  buttonstate = digitalRead(BUTTON1);
  if (buttonstate == LOW)
  for (int i= 0; i < 5;i++){
  Serial.println(i);
  digitalWrite(Red, HIGH);
  delay(Del);
  digitalWrite(Red, LOW);
  delay(Del); 
  delay(500); }
 
 else {
  Serial.println("Press Button");
  delay(del);
 }
 
  
}
