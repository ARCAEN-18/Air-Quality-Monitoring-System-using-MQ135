# Air Quality Monitoring System using MQ135

## 📌 Overview
This project implements an **Air Quality Monitoring System** using the **MQ135 gas sensor** and **Arduino Uno**. The system measures air quality levels, converts the sensor readings into a range of **0–500**, and displays the air quality value on an **LCD screen**. Based on predefined thresholds, different **LED indicators** are activated, and a **buzzer alarm** is triggered when the air quality becomes very unhealthy.

This project is useful for **environmental monitoring**, **pollution detection**, and **smart city applications**.

---

## 🎯 Objectives
- Measure real-time air quality using MQ135 sensor
- Convert sensor readings to a standardized range (0–500)
- Display air quality values on an LCD
- Provide visual and audible alerts for different air quality levels

---
## 🧪 Simulation (Tinkercad)
The complete circuit and working simulation of this project was implemented and tested using Tinkercad.

🔗 **Tinkercad Project Link:**  
https://www.tinkercad.com/things/gaSNJNxPtLX-powerfuljuttuli?sharecode=lsWYlzxAhRIatXvQK0ebFEvR3NMdjaT4VR3S_M_bXNs

## 🛠️ Components Used
- Arduino Uno  
- MQ135 Air Quality Gas Sensor  
- 16x2 LCD Display  
- Green LED (Good Air Quality)  
- Yellow LED (Moderate Air Quality)  
- Orange LED (Unhealthy Air Quality)  
- Red LED (Very Unhealthy Air Quality)  
- Buzzer  
- Resistors  
- Jumper Wires  
- Breadboard  

---

## ⚙️ Working Principle
1. The MQ135 sensor detects gases and air pollutants present in the environment.
2. The Arduino reads the analog sensor value and maps it to a range between **0 and 500**.
3. The processed air quality value is displayed on the LCD screen.
4. LEDs and buzzer respond according to predefined air quality thresholds.

---

## 🚦 Air Quality Levels & Output

| Air Quality Range | Condition | Output |
|------------------|-----------|--------|
| 0 – 50 | GOOD | Green LED ON |
| 51 – 100 | MODERATE | Yellow LED ON |
| 101 – 150 | UNHEALTHY | Orange LED ON |
| 151 – 500 | VERY UNHEALTHY | Red LED ON + Buzzer ON |

---

## 🧪 Experimental Results
- The system accurately classifies air quality into four levels.
- Real-time air quality values are clearly displayed on the LCD.
- Immediate alerts are generated during very unhealthy air conditions.

---

## 📊 Applications
- Air pollution monitoring
- Indoor air quality detection
- Smart city environmental systems
- Industrial safety monitoring

---

## 🔮 Future Enhancements
- Integrate IoT connectivity for remote air quality monitoring
- Add data logging for long-term air quality analysis
- Display air quality index (AQI) on a mobile or web application
- Include multiple gas sensors for higher accuracy

---

## 💻 Technologies Used
- Arduino Programming (C/C++)
- Embedded Systems
- Gas Sensors (MQ Series)

---

## 📄 License
This project is developed for academic and learning purposes.
