#include <Arduino.h>
#include <pins_arduino.h>


void setup() {
    Serial.begin(115200);
}

void loop() {
    Serial.println("SERIAL TEST NOW!");
    delay(1000);
}