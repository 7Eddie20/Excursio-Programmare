/*
Write a C++ program that:
- Takes any integer input from the user
- Prints whether the value was considered true or false in Boolean logic
*/

#include <iostream>
using namespace std;

int main(){

    //variable
    int num;

    //input
    cout << "enter a number: ";
    cin >> num;

    

    //output
    if (num){
        cout << num << " represents true" << endl;
    }
    else cout << num << " represents false" << endl;

    cin.ignore();
    cin.get();
    return 0;
}