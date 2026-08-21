# Boardoza MLX90641 Thermal Camera Breakout Board

The **Boardoza MLX90641 Breakout Board** is a compact and high-performance thermal imaging solution built around the **Melexis MLX90641** far-infrared thermal sensor array. Featuring a **16x12 pixel thermal resolution**, the sensor delivers **192 independent temperature measurement points** for accurate non-contact thermal analysis and object detection applications.

Designed for compatibility with both **3.3V and 5V systems**, the board communicates over a high-speed **I<sup>2</sup>C interface** and supports configurable refresh rates up to **64Hz**. With a wide measurement range from **-40°C to +300°C** and a **55° X axis and 35° Y axis Field of View**, this breakout board is ideal for industrial monitoring, predictive maintenance, thermal mapping, robotics, occupancy sensing, smart appliances, and advanced embedded thermal imaging projects.

## [Click here to purchase!](https://www.ozdisan.com/ureticiler/boardoza)

|Front Side|Back Side|
|:---:|:---:|
| ![MLX90641 Front](./assets/MLX90641%20Front.png)| ![MLX90641 Back](./assets/MLX90641%20Back.png)|

---

## Key Features

- **16x12 Thermal Imaging Array:** Captures 192 individual infrared temperature points for detailed thermal analysis.
- **Wide Temperature Measurement Range:** Measures object temperatures from **-40°C to +300°C** without physical contact.
- **Integrated Thermal Camera Functionality:** Enables compact thermal vision applications without requiring external optics.
- **Fast Refresh Rates:** Adjustable frame rates from **0.5Hz to 64Hz** for dynamic thermal monitoring.
- **Wide Compatibility:** Supports both **3.3V and 5V logic systems** for easy integration with popular development boards.
- **I<sup>2</sup>C Communication:** Supports I<sup>2</sup>C speeds up to **1MHz** for responsive thermal data transfer.
- **Wide Field of View:** Provides a **55° horizontal (X-axis)** and **35° vertical (Y-axis)** viewing angle for broader thermal coverage.  

---

## Technical Specifications

**Model:** MLX90641      
**Manufacturer:** Boardoza   
**Manufacturer IC:** Melexis   
**Functions:** Far-Infrared Thermal Imaging Sensor  
**Thermal Resolution:** 16 x 12 Pixels (192 Pixels)  
**Field of View (FoV):** 55° (X-axis) × 35° (Y-axis)  
**Measurement Range:** -40°C to +300°C  
**Supply Voltage (VCC):** 3.3V to 5.5V DC  
**Logic Voltage Level:** 3.3V / 5V Compatible  
**Communication Interface:** I<sup>2</sup>C  
**I<sup>2</sup>C Clock Frequency:** Up to 1 MHz  
**Sensor Refresh Rate:** 0.5Hz to 64Hz  
**Typical Current Consumption:** ~15mA  
**Operating Temperature:** -40°C to +85°C  
**Board Dimensions:** 20mm x 20mm  

---

## Board Pinout

### ( J1 ) I<sup>2</sup>C Connector

| Pin Number | Pin Name | Description |
|:---:|:---:|---|
| 1 | VCC | Voltage Supply Input |
| 2 | SCL | I<sup>2</sup>C Serial Clock |
| 3 | SDA | I<sup>2</sup>C Serial Data |
| 4 | GND | Ground |

---

## Board Dimensions

<img src="./assets/MLX90641 Dimensions.png" alt="MLX90641 Board Dimensions" width="450"/>

---

## Step Files

[Boardoza MLX90641.step](./assets/MLX90641%20Step.step)

---

## Datasheet

[MLX90641 Thermal Sensor Datasheet.pdf](./assets/MLX90641ESF-BCB-000-TU%20Datasheet.pdf)  
[TXS0102 Voltage Level Translator Datasheet.pdf](./assets/TXS0102DCU%20Datasheet.pdf)   
[TLV73333 3.3V LDO Regulator Datasheet.pdf](./assets/TLV73333PDBVR%20Datasheet.pdf)   

---

## Version History

- V1.0.0 - Initial Release

---

## Support

- If you have any questions or need support, please contact support@boardoza.com

---

## **License**

This repository contains both hardware and software components:

### **Hardware Design**

[![CC BY-SA 4.0][cc-by-sa-shield]][cc-by-sa]

All hardware design files are licensed under [Creative Commons Attribution-ShareAlike 4.0 International License][cc-by-sa].

[cc-by-sa]: http://creativecommons.org/licenses/by-sa/4.0/
[cc-by-sa-shield]: https://img.shields.io/badge/License-CC%20BY--SA%204.0-lightgrey.svg

### **Software/Firmware**

[![BSD-3-Clause][bsd-shield]][bsd]

All software and firmware are licensed under [BSD 3-Clause License][bsd].

[bsd]: https://opensource.org/licenses/BSD-3-Clause
[bsd-shield]: https://img.shields.io/badge/License-BSD%203--Clause-blue.svg
