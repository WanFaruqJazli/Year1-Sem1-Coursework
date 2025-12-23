<div align="center">

# 💻 Lab 2: Combinational Digital Circuit Design
## Simulation using Deeds Simulator (d-DcS)
### Universiti Teknologi Malaysia

| 📅 Start Date | 📅 End Date |
| :---: | :---: |
| **8 December 2025** | **22 December 2025** |

</div>

---

## 📖 Overview
This lab session shifted focus from physical hardware to the **software simulation** of digital logic. We explored the fundamental principles of combinational logic circuit design, simplification, and optimization using **Boolean algebra** and **K-maps**.

The core activity involved using the **Deeds Simulator (d-DcS)** to:
1.  Construct digital networks.
2.  Generate timing diagrams.
3.  Verify logic behaviors through interactive animation.

---

## 🎯 Objectives
The primary goals of this session were to:
- [x] **Master the Tool:** Learn to produce digital logic circuits and generate Truth Tables/Timing Diagrams using Deeds.
- [x] **End-to-End Design:** Experience the complete cycle of a combinatorial circuit design (from problem statement to simulation).

---

## 🛠️ Tools & Environment

| Software | Description |
| :--- | :--- |
| **Deeds Simulator (d-DcS)** | A graphical schematic editor used for building, animating, and analyzing digital networks. It allows for both interactive "animation" of inputs and timing-mode simulations to observe signal sequences over time. |

---

## 🧪 Laboratory Work

### Part 1: Circuit Analysis & Simplification
**Task:** Given a specific logic circuit, we had to derive its initial Boolean expressions.
* **Simplification:** Expressions were reduced to **Sum of Product (SOP)** and **Product of Sum (POS)** forms using De Morgan’s Theorem.
* **Verification:** Manual calculations were cross-referenced by simulating the circuit in Deeds to generate truth tables and timing waveforms.

### Part 2: The "LRT Coach Door" Design Challenge
**Task:** Design a logic circuit to control an LRT coach door (Output: `OPEN` and `ALARM`) based on the coach's movement status and arrival at specific stations (`S1`, `S2`, `S3`).

**The Design Process:**
1.  **Logic Definition:** Defined input/output relations and constructed the Truth Table.
2.  **Optimization:** Used **Karnaugh Maps (K-Maps)** to derive the most efficient SOP equations.
3.  **Implementation:** Built the optimized circuit in Deeds Simulator.
4.  **Universal Gates:** Converted the final design to use **only NAND gates**, demonstrating their property as Universal Gates.

---

## 📝 Reflection

> "Transitioning from physical hardware to the Deeds Simulator marked a significant step in my understanding of digital logic. While previous lessons dealt with abstract theories on paper, this session allowed me to visualize how signals propagate through a complex network in real-time.
>
> Mastering the d-DcS environment was a key takeaway. I particularly appreciated the rigorous process of the 'LRT Coach Door' project—starting from a raw problem statement, deriving the Truth Table, and optimizing the logic via K-Maps. The challenge of converting the final design entirely into NAND gates was particularly rewarding; seeing the simulation verify that my universal gate implementation performed identically to the original design was a definitive 'aha' moment.
>
> Ultimately, this lab bridged the gap between mathematical boolean algebra and functional circuit design. I walk away with much greater confidence in my ability to analyze timing diagrams and debug logic errors—skills that are essential for my growth in computer science."

---

<div align="center">

## 📑 Full Lab Documentation
Since this lab relied heavily on software simulation, the complete findings, circuit files, and timing diagrams are compiled in the document below.

<table width="100%">
<tr>
<td align="center">
<br/>
<a href="./Lab%202%20Answer%20Faruq%20Akmal.pdf">
<img src="https://img.shields.io/badge/VIEW_FULL_LAB_REPORT-0056D2?style=for-the-badge&logo=adobe-acrobat-reader&logoColor=white" alt="View Lab 2 PDF" />
</a>
<br/>
<br/>
<b>Click the button above to view the PDF file</b>
<br/>
<i>(Lab 2 Answer Faruq Akmal.pdf)</i>
<br/>
<br/>
</td>
</tr>
</table>

</div>
