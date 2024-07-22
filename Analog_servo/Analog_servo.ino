#define BAUDRATE 115200
char serial_data;
void setup() {
  Serial.begin(BAUDRATE); 
}

void loop() {
  if(Serial.available()>0) {
  serial_data = Serial.read();
  Serial.print(serial_data); 
  }
}
