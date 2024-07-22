#define BAUDRATE 115200
#define TriggerPin 3
#define EchoPin 2


long response;

void setup() {
  Serial.begin(BAUDRATE);
  pinMode(TriggerPin,OUTPUT);
  pinMode(EchoPin,INPUT_PULLUP);

}

void loop() {
  response = hcsr04_measurment.(TriggerPin,EchoPin);

  Serial.print("Distance: ");
  Serial.print(response);
  Serial.println("[cm]");
  delay(500);}
 
  long hcsr04_measurement(int T_Pin, int E_Pin){
    digitalWrite(T_Pin,LOW);
    delayMicroseconds(2);
    digitalWrite(T_Pin,HIGH);
    delayMicroseconds(10);
    digitalWrite(T_Pin,LOW);
    return pulseIn(E_Pin,HIGH)/58.2;
    
  
}
