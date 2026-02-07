# ⚡ RC PWM to Smart ALEX 15S Motor Controller (Arduino)

This project reads a **PWM signal from an RC receiver** and converts it into **direction + speed control** for a Smart ALEX 15S motor using an Arduino.

The system detects the pulse width from the receiver and:
- Moves motor forward
- Moves motor reverse
- Stops at neutral
- Adjusts speed using PWM

---

## 🚀 Features

- 📡 Reads PWM signal from RC receiver using `pulseIn()`
- 🔁 Bidirectional motor control
- ⚙️ Speed mapped to PWM output (0–255)
- 🧠 Neutral dead-zone to prevent unwanted movement
- 🪶 Lightweight and simple Arduino implementation

---

## 🧩 Hardware Used

- Arduino (Uno/Nano/ESP32 compatible logic)
- RC Receiver (PWM output)
- Smart ALEX 15S Motor
- Motor Driver
- External Power Supply
- Jumper wires

---

## 🔌 Pin Configuration

| Component        | Arduino Pin |
|------------------|-------------|
| Receiver Signal  | D10         |
| PWM Output       | D3          |
| Direction Pin    | D2          |

> Make sure all devices share a **common GND**

---

## 📐 PWM Signal Behavior

| Pulse Width | Action |
|------------|--------|
| 1188–1525 µs | Reverse |
| 1525–1530 µs | Neutral (Stop) |
| 1530–1800+ µs | Forward |

- Neutral zone prevents motor jitter
- Values above 1800 µs = max speed

---

## 🧠 Working Principle

1. Arduino reads PWM pulse from receiver
2. Pulse width determines direction:
   - Above neutral → Forward
   - Below neutral → Reverse
   - Near neutral → Stop
3. Pulse value mapped to motor speed (0–255)
4. PWM output controls motor speed
5. Direction pin sets rotation direction

---


  delay(10);
}
