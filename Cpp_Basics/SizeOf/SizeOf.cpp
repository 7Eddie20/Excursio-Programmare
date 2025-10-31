/*
Problem statement:
Write a C++ program that:
- Declares the following variables:
- An int
- A float
- A char
- A bool
- Uses sizeof() to print the size (in bytes) of each variable
*/

#include <iostream>
using namespace std;

int main()
{
    int integer;
    short int shortInteger;
    long int longInteger;
    long long longLong;
    unsigned int unsignedInteger;
    signed int signedInteger;

    char character;
    signed char signedCharacter;
    unsigned char unsignedCharacter;

    bool boolean;

    float decimal;
    double doubleDecimal;
    long double longDouble;

    cout << "integer: " << sizeof(integer) << " bytes" << endl;
    cout << "short integer: " << sizeof(shortInteger) << " bytes" << endl;
    cout << "long integer: " << sizeof(longInteger) << " bytes" << endl;
    cout << "long long: " << sizeof(longLong) << " bytes" << endl;
    cout << "unsigned integer: " << sizeof(unsignedInteger) << " bytes" << endl;
    cout << "signed integer: " << sizeof (signedInteger) << " bytes" << endl;
    cout << "unsigned character: " << sizeof(unsignedCharacter) << " bytes" << endl;
    cout << "signed character: " << sizeof (signedCharacter) << " bytes" << endl;
    cout << "character: " << sizeof (character) << " bytes" << endl;
    cout << "boolean: " << sizeof (boolean) << " bytes" << endl;
    cout << "float: " << sizeof (decimal) << " bytes" << endl;
    cout << "double: " << sizeof (doubleDecimal) << " bytes" << endl;
    cout << "long double: " << sizeof(longDouble) << " bytes" << endl;

    return 0;
}
