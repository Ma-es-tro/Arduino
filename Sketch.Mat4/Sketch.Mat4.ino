#define BAUDRATE 115200

void setup() {
  Serial.begin(BAUDRATE);

}

void loop() {
  Serial.write(0x48);
  Serial.write(0x65);
  Serial.write(0x6C);
  Serial.write(0x6C);
  Serial.write(0x6F);
  Serial.write(0x21);
  Serial.write(0x0A);
  delay(500);
}
