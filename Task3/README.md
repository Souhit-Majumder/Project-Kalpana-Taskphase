## 🧩 Projects Overview

### 3️⃣ 7-Segment Clock Display with HT16K33 (Tinkercad)

- Displays a live clock-style counter using a 4-digit 7-segment display
- Uses the **HT16K33 I2C display driver** (Adafruit-compatible)
- Powered by the `Adafruit_LEDBackpack` library
- Demonstrates I2C communication for multiplexed segment control
- Can be extended for real-time clock (RTC) integration

---

### 4️⃣ Servo Motor Sweep (0° → X° → 0°)

- Smoothly sweeps a servo motor from **0° to a specified max angle (X)** and back
- Configurable:
  - `maxAngle`: rotation limit (e.g., 180°)
  - `delayTime`: speed of sweeping motion
  - `errorInAngle`: correction factor to handle drift
- Ideal for demonstrating motor control basics in **Tinkercad Circuits**
- Uses the built-in `Servo.h` library for PWM-based positioning

---

### 5️⃣ Stepper Motor Control (Wokwi Simulation)

- Rotates a stepper motor by a defined number of **full revolutions**
- Direction and speed are fully configurable:
  - `rotations`: number of full 360° turns
  - `direction`: set to `1` (clockwise) or `-1` (counterclockwise)
  - `stepperSpeed`: RPM speed of the motor
- Simulated in **Wokwi** using the `Stepper.h` library and 28BYJ-48 + ULN2003 driver
- Demonstrates basic motion automation and timing with `delay()`
