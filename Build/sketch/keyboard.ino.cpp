#include <Arduino.h>
#line 1 "c:\\Users\\Spencer\\Desktop\\Keyboard\\Firmware\\BadgersRunFirmware\\Source\\keyboard.ino"
#line 1 "c:\\Users\\Spencer\\Desktop\\Keyboard\\Firmware\\BadgersRunFirmware\\Source\\keyboard.ino"
void setup();
#line 5 "c:\\Users\\Spencer\\Desktop\\Keyboard\\Firmware\\BadgersRunFirmware\\Source\\keyboard.ino"
void loop();
#line 1 "c:\\Users\\Spencer\\Desktop\\Keyboard\\Firmware\\BadgersRunFirmware\\Source\\keyboard.ino"
void setup(){
    pinMode(LED_BUILTIN, OUTPUT);
}

void loop(){
    digitalToggle(LED_BUILTIN);
    delay(1000);
}
