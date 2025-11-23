/*
AIM: to showcase the in-case usage of increment operator
*/

#include <iostream>
using namespace std;

int main(){

    // variables
    int x = 5, y = 5, z1, z2;

    //case 1: pre increment
    cout << "case1: pre increment" << endl;
    cout << "x = " << x << endl;
    cout << "performing z1 = ++x" << endl;
    z1 = ++x;
    cout << "z1 = " << z1 << endl;
    cout << "x = " << x << endl;
    cout << "x is incremented and then assigned to z: INCREMENT then ASSIGN" << endl;
    cout << "\n\n";

    //case 2: post increment
    cout << "case2: post increment" << endl;
    cout << "y = " << y << endl;
    cout << "performing z2 = y++" << endl;
    z2 = y++;
    cout << "z2 = " << z2 << endl;
    cout << "y = " << y << endl;
    cout << "y is assigned to z and then incremented: ASSIGN then INCREMENT" << endl;

    cin.ignore();
    cin.get();
    return 0;

}