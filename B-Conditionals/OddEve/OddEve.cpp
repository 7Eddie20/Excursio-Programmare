/*
OBJECTIVE: Write conditional statement for checking if a number is Odd or Even

ALGORITHM:
~start
- enter a number
- if num % 2 == 0, even
    else, odd
~end
*/

#include <iostream>
using namespace std;

int main(){

    //variable
    int num;
    bool isEven;

    //input
    cout << "enter the number: ";
    cin >> num;

    //condition
    isEven = (num % 2 == 0);

    if (isEven){
        cout << num << " is even" << endl;
    }
    else cout << num << " is odd" << endl;

    cin.ignore();
    cin.get();
    return 0;
}