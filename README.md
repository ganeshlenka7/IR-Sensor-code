# IR Sensor with Arduino Uno R3 – LED Demonstration

This repository contains the Arduino code and circuit details for **demonstrating the working of an Infrared (IR) Sensor** with an **Arduino Uno R3** and an **LED** indicator.

The main purpose of this project is to help beginners understand **how an IR sensor detects objects** and how the Arduino processes the sensor’s signal to control an LED. The IR sensor works by emitting infrared light and checking if that light is reflected back by an object. When an object comes close, the sensor sends a signal to the Arduino, and the Arduino turns the LED **ON**. When there is no object, the LED stays **OFF**.

This setup is a great starting point for learning about sensors, Arduino programming, and basic electronics. The code is fully commented, so you can easily follow along and understand how each part works. A simple wiring diagram is also provided so you can quickly connect the components without confusion.

---

## 🔹 Features
- Shows how an IR sensor works with Arduino Uno R3  
- Uses an LED as a simple visual indicator for detection  
- Beginner-friendly explanation of both hardware and code  
- Fully commented Arduino code for easy learning  
- Wiring diagram included for quick setup  

---

## 📦 Components Used
- **Arduino Uno R3** – microcontroller board used for processing  
- **IR Sensor Module** – detects objects using infrared light  
- **LED** – lights up when the sensor detects an object  
- **Breadboard & Jumper Wires** – for making the connections easily  

---

## 🔌 Circuit Wiring

![IR Sensor](IR%20Sensor.jpg)


**Wiring Overview:**
- **IR Sensor:**
  - VCC → Arduino 5V
  - GND → Arduino GND
  - OUT → Arduino Digital Pin 2
- **LED:**
  - Anode (+ longer leg) → Arduino Digital Pin 13
  - Cathode (– shorter leg) → Arduino GND (via resistor if needed)

---

## ▶ How to Use
1. Connect all components according to the wiring diagram above.  
2. Upload the provided Arduino code to your Arduino Uno R3.  
3. Open the Serial Monitor (optional) to view sensor readings.  
4. Place an object in front of the IR sensor — the LED should turn ON when detected.  

---

📺 **Video Demonstration:** [Watch on Ecempire YouTube][(YOUR_VIDEO_LINK_HERE)](https://youtube.com/shorts/6z6q5uFFS4A?si=P9dpw4uhRzD-iw8n)
