# ⚡ PWM Receiver → Smart ALEX 15S Motor Controller

A compact embedded project that reads **PWM signals from an RC receiver** and converts them into control commands for **Smart ALEX 15S motors**. Built for real-time response, smooth control, and easy integration with common microcontrollers.

---

## 🚀 Overview

This system captures PWM input (1000–2000 µs) from an RC receiver channel, processes the pulse width, and maps it to motor speed/direction for Smart ALEX 15S motors.

**Signal Flow**


---

## ✨ Features

- 📡 Reads PWM input from RC receiver channels  
- ⚙️ Real-time motor control (speed & direction mapping)  
- 🧠 Simple, modular firmware design  
- 🕒 Low-latency signal processing  
- 🔌 Works with Arduino / ESP32 / STM32 (adaptable)

---

## 📐 PWM Reference

| State            | Pulse Width |
|------------------|-------------|
| Minimum Speed    | ~1000 µs    |
| Neutral / Stop   | ~1500 µs    |
| Maximum Speed    | ~2000 µs    |

> Values may vary slightly by receiver—calibrate as needed.

---

## 🛠️ Hardware Requirements

- RC Receiver (PWM output)
- Smart **ALEX 15S Motor**
- Microcontroller (Arduino / ESP32 / STM32)
- Compatible Motor Driver / ESC
- External power supply (per motor specs)
- Jumper wires & common ground between receiver and MCU

---

## 💻 Software Requirements

- Arduino IDE / PlatformIO (or vendor toolchain)
- C/C++ support
- Basic understanding of PWM & timers

---


