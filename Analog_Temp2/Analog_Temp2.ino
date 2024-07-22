#define BAUDRATE 115200
#define LM35_PIN A1

double analogvalue;


void setup() {
  Serial.begin(BAUDRATE);
}

void loop() {
  analogvalue = analogRead(LM35_PIN);
  Serial.println(analogvalue*5/1023.0*100);
  delay(250);
}
