/*
OBJECTIVE:
Build a program to find the distance an object has travelled when time and speed is given.

ALGORITHM:
- start
- declare variables speed and time
- take the values from the user: speed and time
- calculate distance; distance = speed * time
- print the distance
- exit
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // variables
    float speed, time, distance;

    //input
    cout << "enter speed: ";
    cin >> speed;

    cout << "enter time: ";
    cin >> time;

    // computation
    distance = speed * time;

    //output
    cout << "distance travelled: " << fixed << setprecision(2) << distance << " units" << endl;

    cin.ignore();
    cin.get();

    return 0;
}