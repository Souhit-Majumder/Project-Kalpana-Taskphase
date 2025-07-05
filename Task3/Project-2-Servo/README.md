# 🔁 Arduino Uno: Servo Motor Sweep (0° ↔ X°)

This project uses an **Arduino Uno** to sweep a servo motor smoothly back and forth between **0° and a user-defined angle** (default: 180°). It's perfect for basic motion control tasks such as robotics arms, sensors, or automated mechanisms.

---

## 🧰 Components Used

| Component            | Quantity |
|----------------------|----------|
| Arduino Uno R3       | 1        |
| Servo Motor (SG90/MG90s/etc.) | 1        |
| Jumper Wires         | As needed |
| Breadboard           | Optional |
| External 5V Power    | Optional |

---

## ⚙️ How It Works

- The servo gradually moves **from 0° to a specified max angle** and then **back to 0°**, continuously looping.
- Movement speed is controlled using a delay between each angle step.
- Parameters are configurable:
  - `maxAngle`: how far the servo rotates (e.g., 180°, 90°, 45°)
  - `delayTime`: delay in milliseconds between angle steps (controls speed)
  - `errorInAngle`: optional correction to account for overshoot or servo error

---

## 🔌 Wiring Guide

| Servo Wire Color | Arduino Connection |
|------------------|--------------------|
| Red (VCC)        | 5V                 |
| Black(GND)       | GND                |
| Blue    	   | D9 (Signal)        |


---

## 📦 Library Used

- [`Servo.h`](https://www.arduino.cc/reference/en/libraries/servo/) — standard Arduino library for controlling servo motors using PWM.

> This library comes pre-installed with the Arduino IDE.

---

## 🧠 Concepts Demonstrated

- PWM-based servo control using Arduino
- Smooth sweeping motion with adjustable speed and range
- Use of `for` loops and `delay()` for gradual rotation
- Basic mechanical motion and position holding

---