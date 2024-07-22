#define BAUDRATE 115200

char serial_data;

void setup() {
  Serial.begin(BAUDRATE);
}

void loop() {
 if(Serial.available()>0){
  switch(Serial.read()) {
    Case 'A':
    Serial.println("A is inputted");
    break;

     Case '4':
    Serial.println("4 is inputted");
    break;

     Case '2':
    Serial.println("2 is inputted");
    break;

     Case '!':
    Serial.println("! is inputted");
    break;

    default:
    Serial.println("?????");
    break;
  }
  
 }

}
