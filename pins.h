// Digital & analog pins for various components

const int lightSense    = A0; // Light Sensor

const int doorTop       = D1; // Reed Switch
const int doorBottom    = D2; // Reed Switch
const int rtcSDA        = D3; // Real Time Clock SDA (i2c ESP8266 NodeMCU 0.9)
const int rtcSCL        = D4; // Real Time Clock SCL (i2c ESP8266 NodeMCU 0.9)
const int doorClose     = D5; // MotorA CW DOWN
const int doorOpen      = D6; // MotorA CCW UP
#define TRIGGER_PIN D0
