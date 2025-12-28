/*
AIM: find if a given number is positive or negative

ALGORITHM:
~start
- ask user to enter a number
- enter num
- if (num > 0), print positive
    else if (num < 0), print negative
- else print num = 0; neutral
~exit
*/

#include <iostream>
using namespace std;

int main(){

    //variables
    int num;

    //input
    cout << "enter a number: ";
    cin >> num;

    //computation + output
    if (num > 0){
        cout << "POSITIVE" << endl;
    }
    else if (num < 0){
        cout << "NEGATIVE" << endl;
    }
    else{
        cout << "NEUTRAL(0-zero)" << endl;
    }

    cin.ignore();
    cin.get();
    return 0;

}