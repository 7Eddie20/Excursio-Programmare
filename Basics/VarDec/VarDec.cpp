/*
Aim:
- Declare a variable of type int
- Store a value in it
- Print both the value and its memory address
*/

#include <iostream>
using namespace std;

int main()
{
    int num;
    num = 7;

    cout << "value: " << num << endl;
    cout << "address: " << &num << endl;

    return 0;
}