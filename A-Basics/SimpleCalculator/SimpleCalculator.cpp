/*
TASK:
Write a C++ program that:
- Takes two integers as input from the user.
- Performs and displays the result of:
- Addition
- Subtraction
- Multiplication
- Division
- Modulus (remainder)

ALGORITHM
- start
- declare variables num1, num2, sum, difference, product, quotient, remainder
- ask user for 2 integers
- store the integer in num1 and num2
- perform the maths and store them in seperate variables
- print the results
- exit
*/

#include <iostream>
using namespace std;

int main()
{
    // variables
    int num1, num2, sum, difference, product, quotient, remainder;

    // input
    cout << "enter the greater number: ";
    cin >> num1;
    cout << "enter the smaller number: ";
    cin >> num2;

    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    quotient = num1 / num2;
    remainder = num1 % num2;

    cout << "sum = " << sum  << endl;
    cout << "difference = " << difference << endl;
    cout << "product = " << product << endl;
    cout << "quotient = " << quotient << endl;
    cout << "remainder = " << remainder << endl;

    return 0;

}