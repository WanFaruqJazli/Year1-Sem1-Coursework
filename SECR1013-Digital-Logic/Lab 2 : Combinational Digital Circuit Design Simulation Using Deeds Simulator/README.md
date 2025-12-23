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

> "As a first-year student, the Digital Logic Lab session focusing on the Deeds Simulator was a fun and eye-opening experience for me. It was my first hands-on exposure to designing and simulating combinational circuits using specialized software. Before this lab, logic gates and Boolean expressions felt very abstract because everything was learned on paper. Being able to virtually build the circuits and see them function in real-time helped me clearly understand how theoretical logic designs behave in a digital environment.
>
> During the lab session, I learned how to use the d-DcS schematic editor to construct digital networks and generate timing diagrams to verify signal sequences. I realized the importance of the complete design cycle—starting from a problem description, like the LRT coach door system, to deriving truth tables and simplifying expressions using K-maps. These steps required patience and attention to detail, especially when converting the final design into NAND-only gates. Seeing the simulation confirm that my simplified NAND circuit worked exactly like the original design helped me better understand the power of universal gates.
>
> Besides gaining technical knowledge in software simulation, this lab helped me connect Boolean theory with practical implementation, making the learning process more interactive and meaningful. I now feel more confident in simplifying complex logic and interpreting timing waveforms based on simulated results rather than purely theoretical assumptions."

---

<div align="center">

## 📑 Full Lab Documentation
Since this lab relied heavily on software simulation, the complete findings, circuit files, and timing diagrams are compiled in the document below.

<table width="100%">
<tr>
<td align="center">
<br/>
<a href="https://liveutm-my.sharepoint.com/:w:/r/personal/ahmadfariz_live_utm_my/_layouts/15/Doc.aspx?sourcedoc=%7B4BEB74DB-583D-437A-80AA-17CAB87C2304%7D&file=Lab%202.docx&action=default&mobileredirect=true">
<img src="https://img.shields.io/badge/VIEW_FULL_LAB_REPORT-0056D2?style=for-the-badge&logo=microsoft-word&logoColor=white" alt="View Lab 2 Handout" />
</a>
<br/>
<br/>
<b>Click the button above to access the full Lab 2 Handout (DOCX)</b>
<br/>
<i>(Hosted on UTM SharePoint)</i>
<br/>
<br/>
</td>
</tr>
</table>

</div>
