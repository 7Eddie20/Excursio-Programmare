/*
PROBLEM STATEMENT: Simple Interest & Total Repayment
You are tasked with writing a C++ program that calculates the Simple Interest and the Total Amount to be Paid on a loan.
📋 Scenario:
A person borrows a certain amount of money (called the principal) from a bank at a fixed annual interest rate. The loan is to be repaid after a certain number of years. Your program should calculate:
- The Simple Interest using the formula:
\text{SI} = \frac{P \times R \times T}{100}- The Total Amount to be Paid, which is:
\text{Total} = P + \text{SI}
🔍 Requirements:
- Prompt the user to enter:
- Principle amount (₹)
- Rate of interest (% per annum)
- Time (in years)
- Calculate and display:
- Simple Interest (₹)
- Total Amount to be Paid (₹)

ALGORITHM:
- start
- declare and input the variables pa, ri, t, si and a
- compute:
    - si = (p * r * t) / 100
    - a = p + si
- print the 2 results
- exit
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    // variables
    float principleAmount, rateOfInterest, time, simpleInterest, totalAmount;

    // input
    cout << "enter the principle amount (in rupees): ";
    cin >> principleAmount;

    cout << "enter the rate of interest (per annum): ";
    cin >> rateOfInterest;

    cout << "enter the time (in years): ";
    cin >> time;

    //calculation
    simpleInterest = (principleAmount * rateOfInterest * time) / 100;
    totalAmount = principleAmount + simpleInterest;

    //output
    cout << "simple interest: " << fixed << setprecision(2) << simpleInterest << endl;
    cout << "total amount to be paid: " << fixed << setprecision(2) << totalAmount << endl;

    cin.ignore();
    cin.get();
    return 0;
}