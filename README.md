# PUSR USR-EG118 Example Platformio Code

This repository contains example code for the **PUSR USR-EG118** IoT Device (*previously known as USR-100M*) for use with Platformio. The goal of this repository is to expand the development potential of the USR-EG118, building a community-driven resource to enhance compatibility with Arduino and Platformio environments.

The code in this repository doesn't seem to serve any specific function, outside of showcasing ways of achieving software compatibility of EG118 device.

---
# Getting started 
The **PUSR USR-EG118** is an open-source IoT gateway with a dual-core ESP32 processor, providing multiple interfaces including RS485/232, digital and analog IO, Wi-Fi, Ethernet, and BLE. 

This repository is being worked on with 1.3 revision of the board, which in my scenario contains ESP32-WROVER-IE .For exact information on your board, you can open the device and see the information on the PCB. It's also recommend to double check the exact ESP32 version of your device, since there seems to be some variations when it comes to SPRAM and Flash sizes.

### Community Development
This repository is open for community contributions to broaden the use and capabilities of the EG-118 board, specifically to enhance integration with Arduino and Platformio. Contributions that improve library compatibility, introduce new features, and optimize functionality are welcome.

### Future Roadmap
- [ ] Ethernet support: Development of a Network Manager module compatible with the onboard Ethernet chip. Currently, it's not supported and won't work with libraries supporting Ethernet.h 


---

### Resources
- [EG-118 Downloads Page](https://www.pusr.com/products/arduino-open-source-iot-gateway.html) - Contains links to several drivers required to flash this device
- [EG-118 User Guide](https://www.pusr.com/uploads/20240809/51d0b52adbb11668a8c8e1880092960a.pdf)
- [ESP32-WROVER-IE Datasheet](https://www.espressif.com/sites/default/files/documentation/esp32-wrover-e_esp32-wrover-ie_datasheet_en.pdf)

### USR_IO Library Information
The USR_IO library file in this repository is owned by PUSR Corporation and included here solely for demonstration and compatibility purposes, as the library does not have its own repository. For the latest version and official updates, the library can be downloaded directly from the PUSR USR-EG118 product page.
