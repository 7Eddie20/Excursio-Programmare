/*
AIM:
write a program to calculate net salary
the program should take the following as input
1. basic salary
2. percentage of allowances
3. percentage of deduction
*/

#include <iostream>
using namespace std;

typedef float percentage;

int main(){

    //variables
    int basicSalary, netSalary;
    percentage allowances;
    percentage deduction;

    //inputs
    cout << "enter your basic salary: ";
    cin >> basicSalary;

    cout << "enter the percentage of allowances: ";
    cin >> allowances;

    cout << "enter the percentage of deduction: ";
    cin >> deduction;

    //computation
    netSalary = basicSalary + (basicSalary * (allowances / 100)) - (basicSalary * (deduction / 100));

    //output
    cout << "net salary (rupees): " << netSalary << endl;

    cin.ignore();
    cin.get();
    return 0;
}