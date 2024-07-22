#define BAUDRATE 115200
#define LM35_PIN A1
int analogvalue;

void setup() {
  Serial.begin(BAUDRATE);
}

void loop(){
  analogvalue = analogRead (LM35_PIN);
  Serial.println(analogvalue);
  delay(250);
}
