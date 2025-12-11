/*
TASK: construct a program which calculates the area of a circle.

ALGORITHM:
- start
- input radius from the user
- compute area = pie * r^2
- display result
- exit
*/

#include <iostream>
#include <cmath>
#include <iomanip>
#include <numbers>
using namespace std;
using namespace std::numbers;

int main()
{
    // variables
    double radius, area;
    string ex;

    //input
    cout << "enter the radius: ";
    cin >> radius;

    // computation
    area = pi * pow(radius, 2);

    //output
    cout << "area: " << setprecision(2) << fixed << area << " unit sq." << endl;

    cin.ignore();
    cin.get();
    return 0;
}


