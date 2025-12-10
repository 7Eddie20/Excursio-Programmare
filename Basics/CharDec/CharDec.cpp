/*
AIM: showcase the basic rules and implementations of char data type
*/

#include <iostream>
using namespace std;
int main()
{
    char a = 'A'; // every character should be declared inside the single quotation
    cout << a << endl;
    char b = 67;        // stores the ASCII value if not surrounded by single quotations
    char c = '7';       // prints numeric value as a character;
    char d = '76';      // 2 digits are treated as double characters; throws warning and prints last digit
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    return 0;
}