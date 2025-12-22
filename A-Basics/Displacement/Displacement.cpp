/*
OBJECTIVE:
Write a C++ program that calculates the displacement of an object given its:
- Initial velocity u
- Final velocity v
- Acceleration a
Use the formula:
s={v^2-u^2}/{2a}

ALGORITHM
- start
- input, u,v,a from the user
- compute
- print the result
*/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    // variables
    float initialVelocity, finalVelocity, acceleration, displacement;

    // input
    cout << "enter initial velocity: ";
    cin >> initialVelocity;

    cout << "enter final velocity: ";
    cin >> finalVelocity;

    cout << "enter acceleration: ";
    cin >> acceleration;

    // computing
    displacement = (pow(finalVelocity, 2) - pow(initialVelocity, 2)) / (2 * acceleration);

    // output
    cout << "displacement: " << fixed << setprecision(2) << displacement << "units" << endl;

    // exit
    cin.ignore();
    cin.get();
    return 0;
}