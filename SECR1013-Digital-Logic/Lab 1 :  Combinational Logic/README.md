<div align="center">

# 🔧 Lab 1: Combinational Logic
### Universiti Teknologi Malaysia

| 📅 Date | ⏰ Time | 📍 Location |
| :---: | :---: | :---: |
| **18 November 2025** | **11:00 AM – 1:00 PM** | **Digital Logic Lab (Room 328-02, N28)** |

</div>

---

## 📌 Overview
This lab session introduced the fundamental principles of **combinational logic circuits**. The primary focus was on the practical aspects of digital electronics, including wiring, breadboarding, and using real hardware to verify logic gate behaviors. 

**Main Objective:** To construct basic logic circuits and verify their behavior using switches and LEDs, confirming the theoretical truth tables against physical results.

### 🧩 Logic Gates Used
* **7408** — Quad 2-input AND Gate
* **7404** — Hex Inverter (NOT Gate)
* **7432** — Quad 2-input OR Gate

---

## 🎯 Learning Objectives
By the end of this session, the following competencies were practiced:
1.  **Technique:** Mastering basic breadboarding and wiring techniques.
2.  **Implementation:** Using input switches and output LEDs to generate truth tables for combinational logic circuits.
3.  **Verification:** Confirming the characteristics of basic logic gates through physical testing.

---

## 🧰 Equipment & Materials

| Item | Description |
| :--- | :--- |
| **Breadboard** | Platform for wiring the circuits without soldering. |
| **IC Chips** | 7408 (AND), 7404 (NOT), 7432 (OR). |
| **ETS-5000 Kit** | Digital Training Kit providing power, switches, and LEDs. |

---

## ✨ Best Practices

### 🔌 Breadboarding & Wiring
| Topic | Key Practice |
| :--- | :--- |
| **Wire Gauge** | Used **22 gauge wire** to prevent damaging the breadboard contacts. |
| **Color Coding** | **RED** (`VCC`), **BLACK** (GND), **BLUE** (Inputs), **YELLOW** (Signals). |
| **Neatness** | Wires were cut to appropriate lengths to lie flat. |
| **IC Care** | **Orientation:** All ICs arranged in the same direction to facilitate `VCC` (5V) and `GND` connections. Pins bent vertically before insertion. |

### 📟 Circuit Monitoring
| Component | Function |
| :--- | :--- |
| **Mode Switch** | Set to **TTL** (Transistor-Transistor Logic). |
| **LED Monitor** | 🟢 **GREEN** = Low (0) <br> 🔴 **RED** = High (1). |
| **Logic Probe** | Used to detect **H** (High), **L** (Low), or **P** (Pulse). |
| **Switches** | 8 toggle switches used for Binary Inputs (1 or 0). |

---

## 🧪 Laboratory Work & Results

### Part 1: AND Gate Circuit
Built using the **7408 IC**. We verified the circuit by testing all possible input combinations.

| A | B | Output (F) |
| :-: | :-: | :-: |
| 0 | 0 | 0 |
| 0 | 1 | 0 |
| 1 | 0 | 0 |
| 1 | 1 | 1 |

### Part 2: NAND Gate Equivalent
Constructed using a **7408 IC (AND)** connected to a **7404 IC (NOT)** to simulate a NAND gate. The truth table confirmed the NAND logic function.

| A | B | C (Intermediate) | Output (F) |
| :-: | :-: | :-: | :-: |
| 0 | 0 | 0 | 1 |
| 0 | 1 | 0 | 1 |
| 1 | 0 | 0 | 1 |
| 1 | 1 | 1 | 0 |

### Part 3: Combined Logic Circuit
A complex circuit using **7408, 7404, and 7432 ICs**. We demonstrated that this multi-gate circuit could be simplified using Boolean algebra to a single-gate equivalent (OR gate behavior demonstrated).

| A | B | C | D | Output (F) |
| :-: | :-: | :-: | :-: | :-: |
| 0 | 0 | 0 | 0 | 0 |
| 0 | 1 | 0 | 1 | 1 |
| 1 | 0 | 1 | 0 | 1 |
| 1 | 1 | 0 | 0 | 0 |

---

## 📝 Reflection

> "As a first-year student, this lab session served as a crucial bridge between theoretical concepts and physical reality. While logic gates previously existed only as symbols in a textbook, handling the actual IC chips and breadboards brought those abstractions to life.
>
> The experience emphasized the discipline required in hardware implementation. I learned that circuit reliability depends heavily on neat wiring and correct IC orientation—lessons that became immediately apparent when troubleshooting connections to ensure clean signals.
>
> Overall, verifying the truth tables with real hardware was a rewarding milestone. It has solidified my grasp of digital logic fundamentals and sparked a genuine interest in the practical intricacies of electronic design."

---

## 💡 Suggestions for Improvement
* **Post-Lab Discussion:** It would be beneficial to have a short review session after the lab to discuss common mistakes and reinforce the concepts learned.

---

## 📸 Lab Gallery
Here are the final results and our team photo.

<div align="center">

| **AND Gate Circuit** | **NAND Gate Circuit** |
| :---: | :---: |
| <img src="images/And%20gate.jpeg" width="400" /> | <img src="images/Nand%20Gate.jpeg" width="400" /> |
| **Combined Logic Circuit** | **Group Photo** |
| <img src="images/Combined%20Circuit.jpeg" width="400" /> | <img src="images/Groupmate%20Lab%201.jpeg" width="400" /> |

</div>

---

## 📎 Resources
* [📄 **Download Lab 1 Handout (PDF)**](./Lab.1.-.Handout.pdf)
