#include <Arduino.h>

void setup() 
{
    pinMode(LED_BUILTIN, OUTPUT);
    digitalWrite(LED_BUILTIN,LOW);
    Serial.begin(9600);
    Serial.println("Comenzando prueba!");
}

void loop() 
{
    Serial.println("Corriendo sobre platformio con ESP32 y arduino IDE !");
    digitalWrite(LED_BUILTIN,!digitalRead(LED_BUILTIN));
    delay(2000);
}
