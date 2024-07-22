#include <IRremote.hpp>
#define IR_PIN 4
#define BAUDRATE 115200

long p_millis = 0;
#define IR_DELAY 1000

void setup() {
Serial.begin(BAUDRATE);
IrReceiver.begin(IR_PIN, ENABLE_LED_FEEDBACK); }

void loop() {
if(millis() - p_millis > IR_DELAY) {
if(IrReceiver.decode()) {
IrReceiver.printIRResultShort(&Serial);
Serial.print(F("rawdata = 0x"));
Serial.println(IrReceiver.decodedIRData.decodedRawData,
HEX);

Serial.print(F("command = 0x"));
Serial.println(IrReceiver.decodedIRData.command, HEX);
Serial.println(F("OK"));

IrReceiver.resume(); 
p_millis = millis();
      }

   }

}
