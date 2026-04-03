# Wiring Instructions

This document provides detailed wiring instructions for connecting an ESP32 to an OLED SSD1306 display, as well as an alternative PC-only setup without using the ESP32.

## Connecting ESP32 to OLED SSD1306 Display

### Components Needed:
- ESP32 Development Board
- OLED SSD1306 Display
- Breadboard and jumper wires

### Wiring Instructions:
1. **Connect VCC:**
   - Connect the VCC pin of the SSD1306 display to the 3.3V output pin on the ESP32.

2. **Connect GND:**
   - Connect the GND pin of the SSD1306 display to a GND pin on the ESP32.

3. **Connect SDA:**
   - Connect the SDA pin of the SSD1306 display to GPIO 21 on the ESP32 (or the designated SDA pin).

4. **Connect SCL:**
   - Connect the SCL pin of the SSD1306 display to GPIO 22 on the ESP32 (or the designated SCL pin).


## PC-Only Setup without ESP32

### Components Needed:
- SSD1306 OLED Display
- USB to I2C adapter (if not using a compatible microcontroller)
- USB Cable

### Wiring Instructions:
1. **Connect VCC:**
   - Connect the VCC pin of the SSD1306 display to the positive output of the USB to I2C adapter.

2. **Connect GND:**
   - Connect the GND pin of the SSD1306 display to the ground output of the USB to I2C adapter.

3. **Connect SDA:**
   - Connect the SDA pin of the SSD1306 display to the SDA output of the USB to I2C adapter.

4. **Connect SCL:**
   - Connect the SCL pin of the SSD1306 display to the SCL output of the USB to I2C adapter.

### Note:
Ensure all connections are secure before powering on the devices. Always check the wiring before uploading any code to avoid short circuits.