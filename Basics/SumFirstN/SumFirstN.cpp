/*
OBJECTIVE: 
construct a program to find out the sum of first n natural numbers

ALGORITHM:
- start
- declare and input variable n and sum
- calculate sum;
    sum = (n(n+1)) / 2
- print sum
- exit
*/

#include <iostream>
using namespace std;

int main(){

    // variable
    int sum, n;

    //input
    cout << "enter the number till which you wish to add(starting from 1): ";
    cin >> n;

    //calculating
    sum = (n * (n+1)) / 2;

    //output
    cout << "sum: " << sum << endl;

    cin.ignore();
    cin.get();
    return 0;

}
