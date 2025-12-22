/*
problem statement: 
Write a program that:
- Starts with a score of 0
- Adds, subtracts, multiplies, divides, and mods the score using assignment operators (values given by user)
- Displays the updated score after each operation

ALGORITHM:
- start
- declare variables score = 0 and val
- give prompts regarding different assignments, compute and print.
- exit
*/

#include <iostream>
using namespace std;

int main(){

    // variables
    float score = 0, val;

    cout << "SCORE: " << score << endl;

    // i/o

    // addition
    cout << "enter the value you would like to add to score: ";
    cin >> val;
    score += val;
    cout << "updated score: " << score  << endl;

    // subtraction
    cout << "enter the value you would like to subtract from score: ";
    cin >> val;
    score -= val;
    cout << "updated score: " << score  << endl;

    // multiplication
    cout << "enter the value you would like to multiply the score to: ";
    cin >> val;
    score *= val;
    cout << "updated score: " << score  << endl;

    // quotient
    cout << "enter the value you would like to divide the score from: ";
    cin >> val;
    score /= val;
    cout << "updated score: " << score  << endl;

    cout << "enter the value you would like to divide the score from to find the remainder: ";
    cin >> val;
    score = int (score) % (int) val;
    cout << "updated score: " << score  << endl;

    cin.ignore();
    cin.get();
    return 0;

}
