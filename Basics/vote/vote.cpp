/*
Problem Statement: Voting Eligibility Checker
Write a program that determines whether a person is eligible to vote based on their age. The legal voting age is 18 years or older.
✅ Requirements:
- Declare an integer variable age and assign it a value.
- Use a Boolean variable isEligible to store the result of the condition age >= 18.
- check if the person can vote
*/

#include <iostream>
using namespace std;

int main(){

    //variables
    int age;

    //input
    cout << "enter your age: ";
    cin >> age;

    //check
    bool isEligible = (age >= 18);

    //output
    if (isEligible){
        cout << "you are eligible to vote..." << endl;
    }
    else {
        cout << "you haven't reached legal age, you are not eligible to vote" << endl;
    }

    cin.ignore();
    cin.get();
    return 0;
}