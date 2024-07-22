 #define BAUDRATE 115200
 #define VRX A1
 #define VRY A3

 int Vrx,Vry;


void setup() {
  Serial.begin(BAUDRATE);
}

void loop() {
 Vrx = analogRead(VRX);
 Vry = analogRead(VRY);
 Serial.print("Vrx = "); Serial.print(Vrx);
 Serial.print("Vry = "); Serial.println(Vry);
 delay(250);
}
