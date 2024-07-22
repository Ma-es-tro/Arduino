#define BAUDRATE 115200
#define TriggerPin 3
#define EchoPin 2

long distance;

void setup() {
  Serial.begin(BAUDRATE);
  pinMode(TriggerPin,OUTPUT);
  pinMode(EchoPin,INPUT_PULLUP);

}

void loop() {
 
  digitalWrite(TriggerPin,LOW);
  delayMicroseconds(2);
  digitalWrite(TriggerPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(TriggerPin,LOW);
  distance = pulseIn(EchoPin,HIGH)/58.2;
  Serial.println(distance);
  delay(1000);
  
}
