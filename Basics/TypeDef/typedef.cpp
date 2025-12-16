/*
Write a C++ program that:
- Uses typedef to create a new name Marks for the int data type.
- Declares a variable of type Marks.
- Asks the user to enter their exam marks.
- Prints the marks back to the user.
*/

#include <iostream>
using namespace std;

typedef int marks;

int main(){

    //variabe declaration
    marks m;

    //input
    cout << "enter your marks: ";
    cin >> m;

    //output
    cout << "your marks are: " << m << endl;

    cin.ignore();
    cin.get();
    return 0;
}