# 🔄 Arduino Uno + Stepper Motor Control (28BYJ-48 + ULN2003)

This project uses an **Arduino Uno** to control a **28BYJ-48 stepper motor** through the **ULN2003 driver board**, rotating it in one direction (or optionally reversing it) at a configurable speed and step count.

---

## 🧰 Components Used

| Component               | Quantity |
|-------------------------|----------|
| Arduino Uno R3          | 1        |
| 28BYJ-48 Stepper Motor  | 1        |
| ULN2003 Driver Board    | 1        |
| Jumper Wires            | As needed|
| Power Supply (5V)       | Optional |

---

## ⚙️ How It Works

- The motor is driven using the **Stepper.h** library in **4-wire mode**.
- `stepsPerRevolution` is set to **2048** (standard for 28BYJ-48 gear reduction motors).
- The motor rotates by a specific number of revolutions in one direction and pauses.
- You can easily modify:
  - `rotations` → how many full turns to make
  - `direction` → set to `1` for forward or `-1` for reverse
  - `stepperSpeed` → rotation speed in RPM
  - `animationSpeed` → how long to pause between movements

---

## 🔌 Wiring Guide (Arduino ↔ ULN2003)

| ULN2003 IN Pin | Arduino Pin |
|----------------|-------------|
| IN1            | D11         |
| IN2            | D10         |
| IN3            | D9          |
| IN4            | D8          |

> Make sure the motor is powered with a stable 5V supply. Avoid powering it directly from the Arduino if possible.

---

## 📦 Library Used

- [`Stepper.h`](https://www.arduino.cc/reference/en/libraries/stepper/) — built-in Arduino library for controlling unipolar or bipolar stepper motors.

---

## 🧠 Concepts Demonstrated

- Stepper motor control using IN1–IN4 pin sequences
- Directional rotation via signed step values
- Adjustable speed using RPM settings
- Full-revolution logic with customizable delays

---

## 💡 Optional Enhancements

- [ ] Add buttons to change direction or trigger motion
- [ ] Use a potentiometer to adjust speed live
- [ ] Add an OLED/LCD to show rotation stats
- [ ] Use `millis()` for non-blocking timing instead of `delay()`
- [ ] Create a looped animation with forward and reverse

