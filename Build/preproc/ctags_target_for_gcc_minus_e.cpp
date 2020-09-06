# 1 "c:\\Users\\Spencer\\Desktop\\Keyboard\\Firmware\\BadgersRunFirmware\\Source\\keyboard.ino"
void setup(){
    pinMode((17), (0x1));
}

void loop(){
    digitalToggle((17));
    delay(1000);
}
