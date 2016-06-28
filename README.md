Chicken Coop automation based on an a ESP8266 NODEMCU 0.9 board

Goals:

- Day/Night detection using a photocell and the ADC on the ESP8266
- Control of 2ch relay module
   - Door Motor Up
   - Door Motor Down
- DS3231 RTC (i2c) (includes temperature sensor)
- LCD display (i2c) (4x20)
- MQTT for data capture and remote control
   - set time
   - reboot
   - status (MQTT status, door status, top sensor, bottom sensor)
   - debug on/off
   - open/close door
   - lockout light sensor
- Detection of Door Open or Closed using normally open reed switches
- OTA software update capability (not reliable)
- WiFi configuration via AP - store credentials in flash memory

http://pablo-sanchez.com/automatic-chicken-coop-door-v1-0/
