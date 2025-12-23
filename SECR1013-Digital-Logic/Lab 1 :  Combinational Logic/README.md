<div align="center">

# 🔧 Lab 1: Combinational Logic
### Universiti Teknologi Malaysia

| 📅 Date | ⏰ Time | 📍 Location |
| :---: | :---: | :---: |
| **18 November 2025** | **11:00 AM – 1:00 PM** | **Digital Logic Lab (Room 328-02, N28)** |

</div>

---

## 📌 Overview
[cite_start]This lab session introduced the fundamental principles of **combinational logic circuits**[cite: 9, 10]. The primary focus was on the practical aspects of digital electronics, including wiring, breadboarding, and using real hardware to verify logic gate behaviors. 

[cite_start]**Main Objective:** To construct basic logic circuits and verify their behavior using switches and LEDs, confirming the theoretical truth tables against physical results[cite: 26, 27].

### 🧩 Logic Gates Used
* [cite_start]**7408** — Quad 2-input AND Gate [cite: 31]
* [cite_start]**7404** — Hex Inverter (NOT Gate) [cite: 32]
* [cite_start]**7432** — Quad 2-input OR Gate [cite: 34]

---

## 🎯 Learning Objectives
[cite_start]By the end of this session, the following competencies were practiced[cite: 24]:
1.  [cite_start]**Technique:** Mastering basic breadboarding and wiring techniques[cite: 25].
2.  [cite_start]**Implementation:** Using input switches and output LEDs to generate truth tables for combinational logic circuits[cite: 26, 27].
3.  [cite_start]**Verification:** Confirming the characteristics of basic logic gates through physical testing[cite: 28].

---

## 🧰 Equipment & Materials

| Item | Description |
| :--- | :--- |
| **Breadboard** | [cite_start]Platform for wiring the circuits without soldering[cite: 30]. |
| **IC Chips** | [cite_start]7408 (AND), 7404 (NOT), 7432 (OR)[cite: 31, 32, 34]. |
| **ETS-5000 Kit** | [cite_start]Digital Training Kit providing power, switches, and LEDs[cite: 35]. |

---

## ✨ Best Practices

### 🔌 Breadboarding & Wiring
| Topic | Key Practice |
| :--- | :--- |
| **Wire Gauge** | [cite_start]Used **22 gauge wire** to prevent damaging the breadboard contacts[cite: 41]. |
| **Color Coding** | [cite_start]**RED** (`VCC`), **BLACK** (GND), **BLUE** (Inputs), **YELLOW** (Signals)[cite: 43]. |
| **Neatness** | [cite_start]Wires were cut to appropriate lengths to lie flat[cite: 44]. |
| **IC Care** | [cite_start]**Orientation:** All ICs arranged in the same direction to facilitate `VCC` (5V) and `GND` connections[cite: 51]. [cite_start]Pins bent vertically before insertion[cite: 49]. |

### 📟 Circuit Monitoring
| Component | Function |
| :--- | :--- |
| **Mode Switch** | [cite_start]Set to **TTL** (Transistor-Transistor Logic)[cite: 61]. |
| **LED Monitor** | [cite_start]🟢 **GREEN** = Low (0) <br> 🔴 **RED** = High (1)[cite: 58]. |
| **Logic Probe** | [cite_start]Used to detect **H** (High), **L** (Low), or **P** (Pulse)[cite: 63]. |
| **Switches** | [cite_start]8 toggle switches used for Binary Inputs (1 or 0)[cite: 65, 66]. |

---

## 🧪 Laboratory Work & Results

### Part 1: AND Gate Circuit
Built using the **7408 IC**. [cite_start]We verified the circuit by testing all possible input combinations[cite: 111, 115].

| A | B | Output (F) |
| :-: | :-: | :-: |
| 0 | 0 | 0 |
| 0 | 1 | 0 |
| 1 | 0 | 0 |
| 1 | 1 | 1 |

### Part 2: NAND Gate Equivalent
Constructed using a **7408 IC (AND)** connected to a **7404 IC (NOT)** to simulate a NAND gate. [cite_start]The truth table confirmed the NAND logic function[cite: 77, 125].

| A | B | C (Intermediate) | Output (F) |
| :-: | :-: | :-: | :-: |
| 0 | 0 | 0 | 1 |
| 0 | 1 | 0 | 1 |
| 1 | 0 | 0 | 1 |
| 1 | 1 | 1 | 0 |

### Part 3: Combined Logic Circuit
A complex circuit using **7408, 7404, and 7432 ICs**. [cite_start]We demonstrated that this multi-gate circuit could be simplified using Boolean algebra to a single-gate equivalent (OR gate behavior demonstrated)[cite: 142, 143].

| A | B | C | D | Output (F) |
| :-: | :-: | :-: | :-: | :-: |
| 0 | 0 | 0 | 0 | 0 |
| 0 | 1 | 0 | 1 | 1 |
| 1 | 0 | 1 | 0 | 1 |
| 1 | 1 | 0 | 0 | 0 |

---

## 📝 Reflection

> "As a first-year student, the Digital Logic Lab session was a fun and eye-opening experience for me. It was my first hands-on exposure to digital logic using real hardware... Before this lab, logic gates felt very abstract because everything was learned on paper.
>
> During the lab session, I learned how to properly connect wires on the breadboard and ensure the circuit was neat and organized to avoid errors. I also realized the importance of checking the IC orientation carefully...
>
> Overall, I am grateful for this hands-on experience as it strengthened my understanding of digital logic and motivated me to keep improving my practical skills in the field of electronics."

---

## 💡 Suggestions for Improvement
* **Post-Lab Discussion:** It would be beneficial to have a short review session after the lab to discuss common mistakes and reinforce the concepts learned.

---

## 📸 Lab Gallery
Here are the final results from the hands-on session.

<div align="center">

| **Final Circuit Setup** | **Output Verification** |
| :---: | :---: |
| <img src="INSERT_YOUR_LINK_HERE" width="400" /> | <img src="INSERT_YOUR_LINK_HERE" width="400" /> |

</div>

---

## 📎 Resources
* [📄 **Download Lab 1 Handout (PDF)**](./Lab.1.-.Handout.pdf)
