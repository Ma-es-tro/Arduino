#include <Servo.h>


const int servoPin = 9; 
const int clockwiseButtonPin = 2;  
const int ccwButtonPin = 3;  

Servo myServo;  
int angle = 90;  

void setup() {
  myServo.attach(servoPin);  
  pinMode(clockwiseButtonPin, INPUT_PULLUP);  
  pinMode(ccwButtonPin, INPUT_PULLUP);  
}

void loop() {
  
  if (digitalRead(clockwiseButtonPin) == LOW) {
    
    angle += 5;  
    if (angle > 180) {
      angle = 180;  
    }
    myServo.write(angle);
    delay(50);  
  }

  
  if (digitalRead(ccwButtonPin) == LOW) {
    
    angle -= 5;  
    if (angle < 0) {
      angle = 0; 
    }
    myServo.write(angle);
    delay(50);  
  }
}
