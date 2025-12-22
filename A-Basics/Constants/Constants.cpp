/*
STATEMENT: 
Write a C++ program that:
- Defines seven named constants using const int to represent the days of the week:
- MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY.
- Asks the user to enter a number from 1 to 7.
- Uses the named constants (not raw numbers) to determine which day the user selected.
- Prints the corresponding weekday name.
- If the user enters anything outside 1–7, print "Invalid day".

ALGORITHM:
- start
- define 7 constants with weekdays
- prompt the user to enter any number from 1 to 7
- if input <= 7 && >= 1; proceed, else print invalid
- if day = mon, print monday
- if day = tue, print tue, and so on..
return
exit
*/

#include <iostream>
using namespace std;

int main(){

    //const declaration
    const int SUNDAY = 1;
    const int MONDAY = 2;
    const int TUESDAY = 3;
    const int WEDNESDAY = 4;
    const int THURSDAY = 5;
    const int FRIDAY = 6;
    const int SATURDAY = 7;

    //variable declaration
    int num;

    cout << "enter a number (1-7): ";
    cin >> num;

    if (num >= 1 && num <= 7){
        if (num == SUNDAY){
            cout << "you selected SUNDAY\n";
        }else if (num == MONDAY){
            cout << "you selected MONDAY\n";
        }else if (num == TUESDAY){
            cout << "you selected TUESDAY\n";
        }else if (num == WEDNESDAY){
            cout << "you selected WEDNESDAY\n";
        }else if (num == THURSDAY){
            cout << "you selected THURSDAY\n";
        }else if (num == FRIDAY){
            cout << "you selected FRIDAY\n";
        }else if (num == SATURDAY){
            cout << "you selected SATURDAY\n";
        }
    }else cout << "wrong input\n";

    cin.ignore();
    cin.get();
    return 0;
}