<div align="center">

# 🔧 Lab 1: Combinational Logic
### Universiti Teknologi Malaysia

| 📅 Date | ⏰ Time | 📍 Location |
| :---: | :---: | :---: |
| **18 November 2025** | **11:00 AM to 1:00 PM** | **Digital Logic Lab (Room 328-02, N28)** |

</div>

---

## 📌 Overview
In this lab session, we learned about the basics of **combinational logic circuits**. We focused mostly on the practical side of things like how to do the wiring, how to use the breadboard, and using the real hardware to check how logic gates work.

**Main Objective:** We wanted to build basic circuits and check if they work using switches and LEDs. We compared our results with the truth tables we learned in class.

### 🧩 Logic Gates Used
* **7408** is the Quad 2-input AND Gate
* **7404** is the Hex Inverter or NOT Gate
* **7432** is the Quad 2-input OR Gate

---

## 🎯 What We Learned
By the end of the class, we practiced these skills:
1.  **Technique:** We learned how to use the breadboard and connect wires properly.
2.  **Implementation:** We used switches for inputs and LEDs for outputs to see the results.
3.  **Verification:** We tested the chips to make sure they followed the logic rules.

---

## 🧰 Equipment & Materials

| Item | Description |
| :--- | :--- |
| **Breadboard** | This is the board we use to connect everything without soldering. |
| **IC Chips** | We used the 7408, 7404, and 7432 chips. |
| **ETS-5000 Kit** | The main kit that has the power supply, switches, and LEDs. |

---

## ✨ Best Practices

### 🔌 Breadboarding & Wiring
| Topic | Key Practice |
| :--- | :--- |
| **Wire Gauge** | We used **22 gauge wire** so we do not damage the board. |
| **Color Coding** | **RED** is for VCC, **BLACK** is for GND, **BLUE** is for Inputs, and **YELLOW** is for Signals. |
| **Neatness** | We cut the wires to the right length so the board looks tidy. |
| **IC Care** | **Orientation:** We put all chips facing the same way to make it easier to connect power and ground. We also bent the pins a little bit so they fit in. |

### 📟 Circuit Monitoring
| Component | Function |
| :--- | :--- |
| **Mode Switch** | We set this to **TTL** mode. |
| **LED Monitor** | 🟢 **GREEN** means Low or 0 <br> 🔴 **RED** means High or 1. |
| **Logic Probe** | We used this to check if a point was High, Low, or pulsing. |
| **Switches** | We used the toggle switches to send 1 or 0 to the chips. |

---

## 🧪 Laboratory Work & Results

### Part 1: AND Gate Circuit
We built this using the **7408 IC**. We checked the circuit by trying every combination of inputs.

| A | B | Output (F) |
| :-: | :-: | :-: |
| 0 | 0 | 0 |
| 0 | 1 | 0 |
| 1 | 0 | 0 |
| 1 | 1 | 1 |

### Part 2: NAND Gate Equivalent
We made a NAND gate by connecting a **7408 IC (AND)** to a **7404 IC (NOT)**. The truth table showed that it works just like a NAND gate.

| A | B | C (Intermediate) | Output (F) |
| :-: | :-: | :-: | :-: |
| 0 | 0 | 0 | 1 |
| 0 | 1 | 0 | 1 |
| 1 | 0 | 0 | 1 |
| 1 | 1 | 1 | 0 |

### Part 3: Combined Logic Circuit
This was a harder circuit using **7408, 7404, and 7432 ICs** all together. We showed that we could simplify this big circuit into a smaller one using Boolean algebra.

| A | B | C | D | Output (F) |
| :-: | :-: | :-: | :-: | :-: |
| 0 | 0 | 0 | 0 | 0 |
| 0 | 1 | 0 | 1 | 1 |
| 1 | 0 | 1 | 0 | 1 |
| 1 | 1 | 0 | 0 | 0 |

---

## 💭 Reflection

### 💡 Key Highlights
* **Hands-on Experience:** As a first-year student, this lab was really new to me. Before this, I only saw logic gates in drawings, but now I got to touch the real chips. It was a cool experience to see the LEDs light up when I finally got the logic right.
* **The Importance of Precision:** I learned that I have to be very careful with the wires. If the wiring is messy, finding mistakes becomes almost impossible. It taught me that keeping the board tidy is not just for looks; it makes debugging much easier.

### 📈 Suggestions for Improvement
* **Post-Lab Discussion:** It would be good to have a short chat after the lab to talk about common mistakes. Hearing what went wrong for other groups would help us learn faster.
* **Component Testing:** I think we should learn how to test if a chip is broken before we start building. Sometimes we wasted time fixing the wiring when the problem was actually just a faulty IC chip.

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
<div align="center">

## 📂 Lab Handout
You can download the lab handout for this session below.

<table width="100%">
<tr>
<td align="center">
<br/>
<a href="./Lab.1.-.Handout.pdf">
<img src="https://img.shields.io/badge/VIEW_LAB_HANDOUT-EC1C24?style=for-the-badge&logo=adobe-acrobat-reader&logoColor=white" alt="View PDF" />
</a>
<br/>
<br/>
<b>Click the button above to view the PDF file</b>
<br/>
<i>(Lab.1.-.Handout.pdf)</i>
<br/>
<br/>
</td>
</tr>
</table>

</div>
</td>
</tr>
</table>

</div>
