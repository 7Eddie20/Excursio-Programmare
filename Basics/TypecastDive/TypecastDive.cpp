/*
problem statement :
Write a C++ program that:
- Takes two inputs:
– One int
– One float
Then:
- Prints the sum as a float
- Prints the sum as an int (via explicit typecasting)
- Casts the float to an int (truncation) and prints it
- Casts the int to a char and displays its corresponding ASCII character

ALGORITHM:
- start
- declare variables - integer, decimal, intsum, decsum, decval, code
- take 2 inputs, one int and one float and store it in var integer and decimal
- integer + decimal = (float)decsum
- intsum = int(decsum)
- decval = int(decimal)
- code = (char)integer
- print the results
- exit
*/

#include <iostream>
using namespace std;

int main()
{
    //variable declaration
    int integer, intsum, decval;
    char code;
    float decimal, decsum;

    //input
    cout << "enter an integer value: ";
    cin >> integer;

    cout << "enter a decimal value: ";
    cin >> decimal;

    // sum as a float
    decsum = integer + decimal;
    cout << "the sum as a float: " << decsum << endl;

    //sum as int
    intsum = (int)decsum;
    cout << "sum as integer: " << intsum << endl;

    // truncation
    decval = (int)decimal;
    cout << "truncation of decimal value: " << decval << endl;

    //ascii code
    code = (char)decval;
    cout << "ASCII value for the integer: " << code << endl;

    return 0;
}