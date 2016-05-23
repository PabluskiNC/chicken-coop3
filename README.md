Chicken Coop automation based on an a ESP8266 board

Goals:

- Day/Night detection using a photocell and the ADC on the ESP8266
- OneWire temperature reader
- Control of 4ch relay module
   - Motor Up
   - Motor Down
   - Heat on/off
   - Fan on/off
- RTC (i2c)
- LCD display (i2c) (4x20)
- MQTT for data capture and remote control
- Detection of Door Open or Closed using NO reed switches
- OTA software update capability
- WiFi configuration via AP - store credentials in flash memory
