/*
OBJECTIVE: Write a program to find out the distance between 2 points A (x1, y1) and B (x2, y2) when the coordinates are given.

ALGORITHM:
- start
- declare variables x1, y1, x2, y2, coordinatesA, CoordinatesB, distance
- input coordinatesA and coordinatesB
- extract x1, y1 and x2, y2 from coordinates
- compute the distance
- display the distance
- exit
*/

#include <iostream>
#include <sstream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){

    // variables
    float x1, y1, x2, y2, distance;
    string coordinatesA, coordinatesB;

    //input
    cout << "enter coordinates for the starting point: ";
    getline(cin, coordinatesA);

    cout << "enter coordinates for the ending point: ";
    getline(cin, coordinatesB);

    // extraction
    istringstream iss1 (coordinatesA);
    iss1 >> x1 >> y1;

    istringstream iss2 (coordinatesB);
    iss2 >> x2 >> y2;

    // computing
    distance = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

    // output
    cout << "distance covered: " << fixed << setprecision(2) << distance << " units" << endl;

    cin.ignore();
    cin.get();
    return 0;
}