#include <Arduino.h>
#line 1 "c:\\Users\\Spencer\\Desktop\\Keyboard\\Firmware\\BadgersRunFirmware\\Source\\keyboard.ino"
#define r0   2
#define r1   3
#define r2   4
#define r3   5
#define r4  28
#define r5  29

#define c0  25
#define c1  26
#define c2  27
#define c3  30
#define c4  11
#define c5   7
#define c6  15
#define c7  16
#define c8   6
#define c9   8
#define c10 14
#define c11 13
#define c12 12

char cols [13] = {c0, c1, c2, c3, c4, c5, c6, c7, c8, c9, c10, c11, c12};
char rows  [6] = {r0, r1, r2, r3, r4, r5};


#line 26 "c:\\Users\\Spencer\\Desktop\\Keyboard\\Firmware\\BadgersRunFirmware\\Source\\keyboard.ino"
void setup();
#line 43 "c:\\Users\\Spencer\\Desktop\\Keyboard\\Firmware\\BadgersRunFirmware\\Source\\keyboard.ino"
void loop();
#line 26 "c:\\Users\\Spencer\\Desktop\\Keyboard\\Firmware\\BadgersRunFirmware\\Source\\keyboard.ino"
void setup(){
    pinMode(LED_BUILTIN, OUTPUT);
    char t = 0;
    while (t < (sizeof(cols)/sizeof(cols[0]))){
        pinMode(cols[t], OUTPUT);
        digitalWrite(cols[t], HIGH);
        t++;
    }
    t = 0;
    while(t < (sizeof(rows)/sizeof(rows[0]))){
        pinMode(rows[t], INPUT);
        t++;
    }

    pinMode(r0, INPUT);
}

void loop() {
    digitalWrite(LED_BUILTIN, digitalRead(rows[5]));
}
