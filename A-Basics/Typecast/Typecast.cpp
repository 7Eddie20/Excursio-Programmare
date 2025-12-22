/*
Objective:
Write a C++ program that demonstrates explicit typecasting by converting a float value into an int. The program should display both the original float value and the converted integer value to highlight the truncation effect of typecasting.
Requirements:
- Declare a float variable with a decimal value.
- Use explicit typecasting to convert it into an int.
- Print both values with clear labels.

ALGORITHM:
- start
- input a float value from the user
- typecast float value into int
- print the prior value and present value
- exit
*/

#include <iostream>
using namespace std;

int main()
{
    // variable declaration and input
    float initialValue;
    int convertedValue;

    cout << "enter a decimal value: ";
    cin >> initialValue;

    convertedValue = (int) initialValue;

    cout << "the initial value was: " << initialValue << endl;
    cout << "the converted value after typecasting is: " << convertedValue << endl;

    return 0;

}