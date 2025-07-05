# 🔢 7-Segment Display Counter (1 ↔ 1000)

This Arduino project uses four **7-segment displays** and a **74HC595 shift register** to count from **1 to 1000** and then back to **1** in a loop. The display updates in real-time to show the current count.

---

## 🧰 Components Used

| Component                  | Quantity |
|----------------------------|----------|
| Arduino Uno R3             | 1        |
| Mini Breadboard            | 1        |
| 7-Segment Display (Common Cathode) | 4        |
| 220Ω Resistors             | 4        |
| 74HC595 Shift Register     | 1        |
| Jumper Wires               | As needed |

---

## ⚙️ How It Works

- The **74HC595 shift register** reduces the number of Arduino pins needed to control multiple 7-segment displays.
- The counter:
  - Increments from **1 to 1000**
  - Then decrements back from **1000 to 1**
  - Repeats continuously
- The **7-segment digits** are refreshed quickly to simulate a steady display (shift-based updating).

---

## 🔌 Circuit Overview

- Each **7-segment display** is connected via the shift register to display a digit.
- The **74HC595** controls which segments are lit via serial data from the Arduino.
- Resistors are used in series with each digit to limit current.
- The Arduino sends updated data for each digit during the loop.


---

## 🧠 Concepts Demonstrated

- 7-segment digit control
- Use of **shift registers** for expanding output
- Binary to 7-segment conversion logic
- Counting and looping logic
- Timing and display refresh management
