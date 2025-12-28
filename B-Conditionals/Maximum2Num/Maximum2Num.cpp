/*
AIM: Create a program to find the maximum of 2 numbers input by the user.

ALGORITHM:
-start
- ask user for 2 numbers A and B
- if a > b, print a
- else if b > a, print b
- else print both are equal
-end
*/

#include <iostream>
using namespace std;

int main(){

    //variables
    int num1, num2;


    //input
    cout << "enter 1st number: ";
    cin >> num1;

    cout << "enter 2nd number: ";
    cin >> num2;


    //computing and output
    if ( num1 > num2){
        cout << num1 << " is greater" << endl;
    }
    else if (num2 > num1){
        cout << num2 << " is greater" << endl;
    }
    else cout << "both are equal" << endl;


    cin.ignore();
    cin.get();
    return 0;


}