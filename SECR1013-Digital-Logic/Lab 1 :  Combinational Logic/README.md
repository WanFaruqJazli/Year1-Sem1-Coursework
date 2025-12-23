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
* **7408** — AND Gate
* **7404** — NOT Gate (Inverter)
* **7432** — OR Gate

---

## 🎯 Learning Objectives
By the end of this session, the following competencies were practiced:
1.  **Technique:** Mastering basic breadboarding and wiring techniques.
2.  **Implementation:** Using input switches and output LEDs to generate truth tables.
3.  **Verification:** Confirming the characteristics of basic logic gates through physical testing.

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
| **IC Care** | **Orientation:** `VCC` to +5V, `GND` to Ground. **Insertion:** Pins bent vertically before insertion. |

### 📟 Circuit Monitoring
| Component | Function |
| :--- | :--- |
| **Mode Switch** | Set to **TTL** (Transistor-Transistor Logic). |
| **LED Monitor** | 🟢 **GREEN** = Low (0) <br> 🔴 **RED** = High (1) |
| **Logic Probe** | Used to detect **H** (High), **L** (Low), or **P** (Pulse). |
| **Switches** | 8 toggle switches used for Binary Inputs (1 or 0). |

---

## 🧪 Laboratory Work & Results

### Part 1: AND Gate Circuit
Built using the **7408 IC**. We verified the circuit by testing all possible input combinations.

| A | B | Output |
| :-: | :-: | :-: |
| 0 | 0 | 0 |
| 0 | 1 | 0 |
| 1 | 0 | 0 |
| 1 | 1 | 1 |

### Part 2: NAND Gate Circuit
Constructed using a **7408 IC (AND)** connected to a **7404 IC (NOT)**. The resulting truth table confirmed the NAND logic function.

| A | B | C (Intermediate) | Output |
| :-: | :-: | :-: | :-: |
| 0 | 0 | 0 | 1 |
| 0 | 1 | 0 | 1 |
| 1 | 0 | 0 | 1 |
| 1 | 1 | 1 | 0 |

### Part 3: Combined Logic Circuit
A complex circuit using **7408, 7404, and 7432 ICs**. We demonstrated that this multi-gate circuit could be simplified using Boolean algebra to a single-gate equivalent.

| A | B | C | D | Output |
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
* [📄 View Lab 1 Handout (PDF)](
