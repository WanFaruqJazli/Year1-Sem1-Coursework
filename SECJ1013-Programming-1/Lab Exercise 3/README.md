<div align="center">

# 💻 Lab Exercise 3: C++ Programming
### Universiti Teknologi Malaysia

| 📅 Date | ⏰ Time | 📍 Venue |
| :---: | :---: | :---: |
| **19 December 2025** | **12:00 AM to 5:00 PM** | **MPK6, N28** |

</div>

---

## 📌 Overview
This repository contains my work for **Lab Exercise 3**. In this task, I had to write a program for the **Ministry of Health (MOH)**. The main goal was to track COVID-19 data. The program calculates the number of active cases in a state and decides if that state is a **Red, Orange, Yellow, or Green zone**.

---

## 📝 Task Description
The assignment required me to build a complete system that performs several tasks:

1.  **Input:** The program asks the user for the State Name, Total Cases, New Cases, Total Deaths, and Total Recovered.
2.  **Calculation:** It calculates the **Active Cases** using this formula:
    * Active Cases = Total + New - Death - Recovered.
3.  **Status Check:** Based on the active cases, the program assigns a color status (like Red for active cases above 40).
4.  **Summary:** At the end, the program finds the state with the **highest number of active cases** and calculates the average for all states.

### ⚙️ Technical Requirements
This exercise was harder than the previous ones because I had to use specific coding techniques:
* **Functions:** I had to separate the code into specific functions like `dispStatus`, `getInput`, `dispOutput`, and `calcAverage`.
* **Reference Parameters:** I used these in the `getInput` function to pass multiple values back to the main part of the program.
* **Loops:** I used a loop so the user can keep entering data for different states until they decide to stop.

---

## 🚀 Work Process
Here is how I solved the problem:
1.  **Planning:** First, I looked at the table given in the question to understand the rules for Red, Orange, Yellow, and Green zones.
2.  **Coding the Functions:** I wrote the small functions first. For example, the `dispStatus` function just checks the number and prints the color.
3.  **Main Loop:** I wrote the main function to ask the user for input and then call all the other functions I wrote.
4.  **Testing:** I tested the program with the examples like "Negeri Sembilan" and "Johor" to make sure the math was correct.

---

## 🎯 Purpose of This Repository
I am using this repository to:
* Store my solution for Lab Exercise 3.
* Practice using functions and reference parameters in C++.
* Keep a record of my progress in the Programming Technique 1 course.

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
