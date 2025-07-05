# 🔢 4-Bit Up Counter Using LEDs

This Arduino project demonstrates a simple **4-bit up counter** using **4 LEDs**. The LEDs light up in **binary** to represent numbers from **0 to 15**, incrementing automatically at fixed intervals.

---

## 🧰 Components Used

| Component           | Quantity |
|---------------------|----------|
| Arduino Uno R3      | 1        |
| Mini Breadboard     | 1        |
| LED                 | 4        |
| 220Ω Resistor       | 4        |
| Jumper Wires        | As needed|

---

## ⚙️ How It Works

- The project simulates a **4-bit binary counter**.
- Each LED represents a bit (from LSB to MSB).
- The Arduino counts from **0** to **15** and outputs the binary value to the LEDs.
- After reaching 15 (`1111`), the counter resets to 0 (`0000`).
- Timing can be controlled via `delay()` to adjust the counting speed.

---

## 🔌 Circuit Overview

Each LED is connected to a digital pin on the Arduino (e.g., D2 to D5), with a 220Ω resistor in series:

- **LED 0 (LSB)** → D2  
- **LED 1** → D3  
- **LED 2** → D4  
- **LED 3 (MSB)** → D5  
- All cathodes → GND via resistors

---

## 🧠 Concepts Demonstrated

- Binary representation
- Bitwise operations
- Digital output control
- Basic timing using `delay()`
