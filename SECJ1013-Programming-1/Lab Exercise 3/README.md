<div align="center">

# 💻 Lab Exercise 3: C++ Programming
### Universiti Teknologi Malaysia

| 📅 Date | ⏰ Time | 📍 Venue |
| :---: | :---: | :---: |
| **19 December 2025** | **12:00 AM to 5:00 PM** | **MPK6, N28** |

</div>

---

## 📌 Overview
This entry records my work for **Lab Exercise 3**. In this task, I had to act as a developer for the **Ministry of Health (MOH)**. The goal was to write a program that tracks COVID-19 data, calculates the number of active cases in a state, and automatically decides if that state is a **Red, Orange, Yellow, or Green zone**.

---

## 📝 Task Description
The assignment required me to build a complete tracking system that performs several specific tasks:

1.  **Input:** The program asks the user for the State Name, Total Cases, New Cases, Total Deaths, and Total Recovered.
2.  **Calculation:** It calculates the **Active Cases** using the formula: *Active Cases = Total + New - Death - Recovered*.
3.  **Status Check:** Based on the active cases, the program assigns a color status. For example, any state with more than 40 active cases is flagged as Red.
4.  **Summary:** At the very end, the program identifies the state with the **highest number of active cases** and calculates the average for all the states entered.

### ⚙️ Technical Requirements
This exercise was a significant step up from the previous ones because I had to strictly use modular programming techniques:
* **Functions:** I had to separate the code into specific functions like `dispStatus`, `getInput`, `dispOutput`, and `calcAverage` instead of writing everything in `main`.
* **Reference Parameters:** This was the tricky part. I used reference parameters in the `getInput` function to pass multiple updated values back to the main part of the program.
* **Loops:** I used a loop structure so the user could keep entering data for different states until they decided to stop.

---

## 🚀 Work Process
Here is how I solved the problem:
1.  **Planning:** First, I studied the table provided in the question to strictly understand the logic rules for the Red, Orange, Yellow, and Green zones.
2.  **Coding the Functions:** I adopted a modular approach. I wrote the smaller functions first, like `dispStatus`, which simply checks the number and prints the color.
3.  **Main Loop:** I wrote the main function to act as the controller. It asks the user for input and then calls all the other functions I wrote to process the data.
4.  **Testing:** I tested the program with the example data provided (like "Negeri Sembilan" and "Johor") to ensure my math and logic were 100% correct.

---

## 💭 Reflection

### 💡 Key Highlights
* **Mastering References:** This lab finally clicked the concept of "Pass by Reference" for me. I learned how using the `&` symbol allows a function to modify the actual variables in the main program, which is essential when a function needs to return more than one value.
* **Modular Thinking:** Breaking the program into `dispStatus`, `getInput`, and `calcAverage` made the code much cleaner. It showed me that good code is about organizing logic into small, reusable chunks.

### 📈 Suggestions for Improvement
* **Data Storage:** Currently, the program calculates the highest state on the fly. In a real-world scenario, I think using **Arrays** or **Vectors** to store all the state data would be better. That way, we could print a full summary table at the end.
* **Input Validation:** The program assumes valid numbers are entered. Adding checks to prevent negative numbers for "Deaths" or "Recovered" would make the system much more reliable for the Ministry of Health to use.

---

<div align="center">

## 📂 Exercise File
You can view the final C++ code I wrote for this exercise below.

<table width="100%">
<tr>
<td align="center">
<br/>
<a href="./Lab_exercise3.cpp">
<img src="https://img.shields.io/badge/VIEW_CPP_CODE-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white" alt="View C++ Code" />
</a>
<br/>
<br/>
<b>Click the button above to view the code</b>
<br/>
<i>(Lab_exercise3.cpp)</i>
<br/>
<br/>
</td>
</tr>
</table>

</div>
