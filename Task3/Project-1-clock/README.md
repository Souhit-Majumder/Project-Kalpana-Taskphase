# 🕒 Arduino Uno + HT16K33 7-Segment Clock Display

This Arduino project displays the **current time** on a **7-segment, 4-digit clock-style display** using the **HT16K33 I2C driver chip**. Ideal for digital clocks, timers, or counters with minimal wiring.

---

## 🧰 Components Used

| Component                                  | Quantity |
|--------------------------------------------|----------|
| Arduino Uno R3                             | 1        |
| 4-Digit 7-Segment Display with HT16K33     | 1        |
| Breadboard (optional for stability)        | 1        |
| Jumper Wires                               | As needed |

---

## ⚙️ How It Works

- The **HT16K33** is an I2C LED driver that handles multiplexing and current-limiting internally.
- Arduino communicates with the HT16K33 using the **Wire (I2C)** library.
- The display shows **HH:MM** in a digital clock format.
- Can be extended to show a timer, counter, or temperature if needed.
- Time can be tracked either using:
  - `millis()` (software clock) - used here
  - A **real-time clock module (e.g., DS3231)** for accuracy

---

## 🔌 Wiring Overview

The HT16K33-based display uses only two wires:

| HT16K33 Pin | Connects To Arduino |
|-------------|---------------------|
| VCC         | 5V                  |
| GND         | GND                 |
| SDA         | A4                  |
| SCL         | A5                  |

> **Note**: This follows the standard I2C pinout for the Arduino Uno.

---

## 📦 Libraries Used

- [Adafruit LED Backpack](https://github.com/adafruit/Adafruit_LED_Backpack)
- [Adafruit GFX Library](https://github.com/adafruit/Adafruit-GFX-Library)
- (Optional) [RTClib](https://github.com/adafruit/RTClib) — for DS3231/RTC support

---