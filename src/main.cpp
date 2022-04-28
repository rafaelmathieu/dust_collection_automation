#include <Arduino.h>
#include <Adafruit_PWMServoDriver.h>

uint8_t servoCount = 6;
uint8_t servonum = 0;

const int DIN_PIN = 2;

void setup(){
    pinMode( DIN_PIN, INPUT_PULLUP );
    Serial.begin( 9600 );
}

void loop(){
    int value;
    
    value = digitalRead( DIN_PIN );
    Serial.println(value);

    delay( 1000 );
}