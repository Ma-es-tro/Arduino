#include <IRremote.hpp>
#define BAUDRATE 115200


#define IR_RECEIVE_PIN 4

void setup() {
  Serial.begin(BAUDRATE);
  IrReceiver.begin(IR_RECEIVE_PIN, ENABLE_LED_FEEDBACK);
}

void loop() {
  if (IrReceiver.decode()) {
    uint16_t command = IrReceiver.decodedIRData.command;
    Serial.println(command);
    delay(100);  
    IrReceiver.resume();
  }
}
