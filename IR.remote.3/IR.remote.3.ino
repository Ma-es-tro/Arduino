#include <Servo.h>
#include <IRremote.hpp>
#define IR_PIN 4
#define BAUDRATE 115200
#define SERVO_1 8

Servo myservo;

void setup() {
Serial.begin(BAUDRATE);
myservo.attach(SERVO_1);
IrReceiver.begin(IR_PIN, ENABLE_LED_FEEDBACK); }


void loop() {
  if (IrReceiver.decode()) {
    uint16_t command = IrReceiver.decodedIRData.command;
    switch (command) { 
      case 8: 
        Serial.println("Rotate Left"); 
        myservo.write(90);
        break;
      case 90:
        Serial.println("Rotate Right");
        myservo.write(270);
        break;
     
      default:  
        Serial.println("UNDEFINED");    
    }      
    
    delay(100);
    IrReceiver.resume();
  }
}
