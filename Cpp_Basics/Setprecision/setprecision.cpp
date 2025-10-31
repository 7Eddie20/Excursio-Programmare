/*
problem statement:
Write a program that asks the user to enter:
- any float number, and
Then print the value in a clean, readable format.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float decimal;

    cout << "enter a decimal value: ";
    cin >> decimal;

    cout << "the value entered is " << fixed << setprecision(2) << decimal << endl;
    return 0;
}