/* 
AIM:- to showcase the usage of cinignore; contstruct a program to display the roll no. and name of a student.

Algorithm -
- start
- input roll no. and name
- display roll no and name
- end
*/

#include <iostream>
using namespace std;

int main()
{
    // variable declaration
    int rollNo;
    string name;

    // input
    cout << "enter your roll number: ";
    cin >> rollNo;

    cin.ignore();

    cout << "enter your name: ";
    getline(cin, name);

    // output
    cout << "welcome " << name << ". Your count is A" << rollNo << endl;
}