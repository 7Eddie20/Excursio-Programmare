/*
problem statement :
Write a C++ program that does the following:
- Ask the user for their age
- Ask if they have a fitness routine (as 1 for yes, 0 for no)
Then:
- Store the response in a bool variable
- Check using an if condition:
- If age is 18 or older and has a fitness routine → print: "You're an adult and staying healthy!"
- If age is 18 or older but no fitness routine → print: "Consider starting a fitness routine—it helps!"
- If age is below 18 → print: "You're young—focus on learning and fun!"
*/


#include <iostream>
using namespace std;

int main(){

    //variables
    int age;
    int yesNo;
    bool fitnessRoutine;


    //input
    cout << "enter your age: ";
    cin >> age;

    //computation
    if (age < 18){
        cout << "\nYou're young ;) focus on learning and fun!" << endl;
    }
    else{
        cout << "\ndo you have a fitness routine? (1-yes; 0-no): ";
    cin >> yesNo;

    if (yesNo == 1 || yesNo == 0){
        fitnessRoutine = yesNo;

        if (fitnessRoutine){
            cout << "\nYou're an adult and staying healthy!" << endl;
        }
        else if (!fitnessRoutine){
            cout << "\nConsider starting a fitness routine :) it helps!" << endl;
        }
    }
        else {
            cout << "\nwrong input; terminated the program..." << endl;
        }
    }

    cin.ignore();
    cin.get();
    return 0;
}