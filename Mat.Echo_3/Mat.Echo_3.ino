#define BAUDRATE 115200
#define TriggerPin 3
#define EchoPin 2
#define MaxR 250

long response;

void setup() {
  Serial.begin(BAUDRATE);
  pinMode(TriggerPin,OUTPUT);
  pinMode(EchoPin,INPUT_PULLUP);

}

void loop() {
  long avg = 0;
  for(int i=0;i<4; ){
    distance - hcsr04_measurment.(TriggerPin,EchoPin);
    if(distance < MaxR){
      i++;
      avg+=distance; }
      delay(50);
    }
    Serial.print('Distance TTT: ");
    Serial.println(avg/4);
}
   long hcsr04_measurement(int T_Pin, int E_Pin){
    digitalWrite(T_Pin,LOW);
    delayMicroseconds(2);
    digitalWrite(T_Pin,HIGH);
    delayMicroseconds(10);
    digitalWrite(T_Pin,LOW);
    return pulseIn(E_Pin,HIGH)/58.2;
    
  
}
