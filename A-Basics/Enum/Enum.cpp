/*
Write a C++ program that:
- Defines an enumeration Days containing the seven days of the week:
SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY.
- Asks the user to enter a number from 0 to 6 (or 1 to 7 — your choice, but the enum must map correctly).
- Converts the user’s number into the corresponding Days enum value.
- Uses the enum (not raw integers) to determine which day the user selected.
- Prints the name of the selected weekday.
- If the user enters a number outside the valid range, print "Invalid day"
*/


#include <iostream>
using namespace std;

    //enum
    enum days {SUNDAY = 1, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY};


int main(){


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