# 🔆 LED Brightness Control with Button (3 Levels)

This Arduino project demonstrates how to control an LED's brightness using a push button. Each button press cycles the LED through **three brightness levels**: **Low**, **Medium**, and **High**.

---

## 🧰 Components Used

| Component            | Quantity |
|----------------------|----------|
| Arduino Uno R3       | 1        |
| Mini Breadboard      | 1        |
| LED                  | 1        |
| 220Ω Resistor        | 2        |
| Push Button Switch   | 1        |
| Jumper Wires         | As needed|

---

## ⚙️ How It Works

- The LED is connected to a **PWM-enabled pin**.
- A push button is used to cycle through brightness states.
- Each press increases brightness:
  - 🔅 Low
  - 🔆 Medium
  - 💡 High
- After the third press, the brightness resets to low.

---

## 🔌 Circuit Overview

Basic wiring:
- **LED**:
  - Anode → PWM Pin (e.g., D9) through a 220Ω resistor
  - Cathode → GND
- **Push Button**:
  - One leg → Digital Pin (e.g., D2)
  - Other leg → GND
- Use internal pull-up resistor (`pinMode(buttonPin, INPUT_PULLUP);`) or add an external pull-up.

---

## 🧠 Concepts Covered

- Digital input (button press detection)
- PWM output (`analogWrite`)
- State management
- Basic debouncing (optional enhancement)
