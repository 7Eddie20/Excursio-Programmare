/*
TASK:
Generate a program to display the perimeter and area of a rectangle.

ALGORITHM:
- start
- input length and width from the user
- calculate
    - area = length * width
    - perimeter = 2 * (length + width)
- display the result
- exit
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // variable
    float length, width, area, perimeter;

    // input
    cout << "enter the length: ";
    cin >> length;

    cout << "enter the width: ";
    cin >> width;

    // processing
    area = length * width;
    perimeter = 2 * (length + width);

    // output
    cout << "Area of the rectangle: " << fixed << setprecision(2) << area << " units sq." << endl;
    cout << "Perimeter of the rectangle: " << fixed << setprecision(2) << perimeter << " units" << endl;

    return 0;
}