/*
TASK:
Write a C++ program that:
- Prompts the user to enter:
- The base of a triangle
- The height of the triangle
- Calculates the area using the formula
Displays the result with 2 decimal places of precision

ALGORITHM:
- start
- ask the user for the base and height
- operate : 0.5 * (height * base)
- display result
- exit
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // variables
    float base, height, area;

    cout << "enter the base: ";
    cin >> base;

    cout << "enter the height: ";
    cin >> height;

    //process
    area = 0.5 * (base * height);

    cout << "the area of the triangle is: " << fixed << setprecision(2) << area << " units" << endl;

    return 0;
}