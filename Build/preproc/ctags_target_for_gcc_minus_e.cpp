# 1 "c:\\Users\\Spencer\\Desktop\\Keyboard\\Firmware\\BadgersRunFirmware\\Source\\keyboard.ino"
# 22 "c:\\Users\\Spencer\\Desktop\\Keyboard\\Firmware\\BadgersRunFirmware\\Source\\keyboard.ino"
char cols [13] = {25, 26, 27, 30, 11, 7, 15, 16, 6, 8, 14, 13, 12};
char rows [6] = {2, 3, 4, 5, 28, 29};


void setup(){
    pinMode((17), (0x1));
    char t = 0;
    while (t < (sizeof(cols)/sizeof(cols[0]))){
        pinMode(cols[t], (0x1));
        digitalWrite(cols[t], (0x1));
        t++;
    }
    t = 0;
    while(t < (sizeof(rows)/sizeof(rows[0]))){
        pinMode(rows[t], (0x0));
        t++;
    }

    pinMode(2, (0x0));
}

void loop() {
    digitalWrite((17), digitalRead(rows[5]));
}
