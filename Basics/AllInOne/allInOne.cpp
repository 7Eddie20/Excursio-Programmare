/*
problem statement
Write a C++ program that includes:
- Declares an int, float, and char with initial values
- Performs and prints:
- A type cast from float to int
- A char → int conversion
- An overflow example using unsigned int
- A formatted float using fixed and setprecision(4)
- Displays:
- The size in bytes of float variable
- The memory address of int variable using &
*/

#include <iostream>
#include <climits>
#include <iomanip>
using namespace std;


int main(){

    //variables
    int integer = 7;
    float decimal = 9.10112017;
    char character = 'x';
    unsigned max;
    int dec;

    //typecast
    dec = (int)decimal;
    cout << "the decimal after typecasting: " << dec << endl;

    //ASCII
    cout << "the ASCII value of the character " << character << " is " << (int)character << endl;

    //overflow
    max = UINT_MAX;
    cout << "unsigned integer in its maximum value: " << max << endl;
    cout << "maximum value after incrementing it by 1: " << ++max << endl;

    cout << "\npolished float: " << fixed << setprecision(4) << decimal << endl;
    cout << "size of decimal in memory: " << sizeof(decimal) << endl;
    cout << "memory address of integer " << integer << ": " << &integer << endl;


    cin.ignore();
    cin.get();
    return 0;
}