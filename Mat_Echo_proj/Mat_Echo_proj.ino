#define BAUDRATE 115200
#define TriggerPin 3
#define EchoPin 2
#define Red 11
#define Yellow 10
#define Green 9
#define MaxR 250

long distance;

void setup() {
  Serial.begin(BAUDRATE);
  pinMode(TriggerPin,OUTPUT);
  pinMode(EchoPin,INPUT_PULLUP);
  pinMode(Red,OUTPUT);
  pinMode(Yellow,OUTPUT);
  pinMode(Green,OUTPUT);
  
  }

void loop() {
 
  digitalWrite(TriggerPin,LOW);
  delayMicroseconds(2);
  digitalWrite(TriggerPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(TriggerPin,LOW);
  distance = pulseIn(EchoPin,HIGH)/58.2;
  if(distance < MaxR){
  Serial.println(distance);
  
    if(distance >= 25){
      digitalWrite(Green,HIGH);
      delay(1000);
      digitalWrite(Green,LOW);
    }
    if(distance == 20){
      digitalWrite(Yellow,HIGH);
      delay(1000);
      digitalWrite(Yellow,LOW);
    }
    if(distance <= 19){
      digitalWrite(Red,HIGH);
      delay(1000);
      digitalWrite(Red,LOW);
    }
  }
    delay(50);
  }
