/*
problem statement :
Write a C++ program that:
- Declares a double with the value 77.123456789
- Print the value using:
- Default formatting
- fixed (fixed-point notation)
- scientific (scientific notation)
- With different setprecision() levels (2, 5, 9)
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    double decimal = 77.123456789;

    cout << "default formatting: " << decimal << endl;
    cout << "setprecision(2) (not fixed): " << setprecision(2) << decimal << endl;
    cout << "fixed notation: " << fixed << decimal << endl;
    cout << "scientific notation: " << scientific << decimal << endl;
    cout << "setprecision(2) + fixed: " << fixed << setprecision(2) << decimal << endl;
    cout << "setprecision(5) + fixed: " << fixed << setprecision(5) << decimal << endl;
    cout << "setprecision(9) + fixed: " << fixed << setprecision(9) << decimal << endl;
    
    return 0;
}