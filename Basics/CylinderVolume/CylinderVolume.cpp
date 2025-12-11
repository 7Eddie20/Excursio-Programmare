/*
OBJECTIVE:
write a program that gives the volume of a cylinder when the required data is given by the user.

ALGORITHM:
- start
- declare and input variables radius, height, volume
- compute volume 
    volume = pi * r^2 * h
- print the result
- exit
*/

#include <iostream>
#include <numbers>
#include <cmath>
#include <iomanip>
using namespace std;
using namespace std::numbers;

int main()
{
    // variables
    float radius, height, volume;

    // input
    cout << "enter the radius: ";
    cin >> radius;

    cout << "enter the height: ";
    cin >> height;

    //calculation
    volume = pi * pow(radius, 2) * height;

    //output
    cout << "volume: " << fixed << setprecision(3) << volume << " cubic units" << endl;

    cin.ignore();
    cin.get();
    return 0;

}