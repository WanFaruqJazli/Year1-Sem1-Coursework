/*
Name: WAN FARUQ JAZLI BIN WAN AHMAD JAFFRY
Matric number : A25CS0372
Date : 19/12/2025
*/
#include <iostream>
#include <cstring>   

using namespace std;

void dispStatus(int);
void getInput(int&, int&, int&, int&);
void dispOutput(int);
int calcAverage(int, int);

int main() {
    int activeCase, newCases, totalDeath, totalRecovered, totalCases;
    string stateName; 
    
    int numState = 0;
    int grandTotalActive = 0;
    int highestActive = -1; 
    string highestStateName;
    
    char continueLoop = '\n'; 

    do {
        cout << "\n<<<<<<<<<<<<<< DATA >>>>>>>>>>>>>>" << endl;
        cout << "State name      : ";
        
        cin >> stateName;
        
        numState++; 

        getInput(totalCases, newCases, totalDeath, totalRecovered);

        activeCase = totalCases + newCases - totalDeath - totalRecovered;

        cout << "\n<<<<<<<<<<<<<< SUMMARY >>>>>>>>>>>>>>" << endl;
        dispOutput(activeCase);

        grandTotalActive += activeCase;

        if (activeCase > highestActive) {
            highestActive = activeCase;
            highestStateName = stateName; 
        }

        cout << "\nPress <ENTER> to continue...";
        cin.get(continueLoop); 
        
    } while (continueLoop == '\n'); 

    cout << "\n\n<<<<<<<<<< ACTIVE CASES >>>>>>>>>>" << endl;
    cout << "Total   : " << grandTotalActive << endl;
    cout << "Highest : " << highestActive << " (" << highestStateName << ")" << endl;
    
    int averagePerState = calcAverage(grandTotalActive, numState);
    cout << "Average for " << numState << " states: " << averagePerState << endl;

    return 0;
}

void getInput(int& totalCases1, int& newCase1, int& totalDeath1, int& totalRecovered1) {
    cout << "Total cases     : ";
    cin >> totalCases1;
    cout << "New cases       : ";
    cin >> newCase1;
    cout << "Total death     : ";
    cin >> totalDeath1;
    cout << "Total recovered : ";
    cin >> totalRecovered1;
    
    cin.ignore(); 
}

void dispStatus(int activeCase1) {
    cout << "Status          : ";
    if (activeCase1 > 40) {
        cout << "Red zone" << endl;
    } else if (activeCase1 >= 21 && activeCase1 <= 40) {
        cout << "Orange zone" << endl;
    } else if (activeCase1 >= 1 && activeCase1 <= 20) {
        cout << "Yellow zone" << endl;
    } else {
        cout << "Green zone" << endl;
    }
}

void dispOutput(int activeCase1) {
    cout << "Active cases    : " << activeCase1 << endl;
    dispStatus(activeCase1); 
}

int calcAverage(int totalActiveCases, int numState1) {
    if (numState1 == 0) return 0; 
    return totalActiveCases / numState1;
}