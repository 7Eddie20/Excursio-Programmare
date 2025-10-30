/*
algorithm ->
- start
- ask user to enter 2 numbers
- add the 2 numbers
- store the result in Sum
- print sum
- end
*/

#include <iostream>
using namespace std;

int main()
{
    //var
    int num1, num2, sum;

    //input and declaration
    cout << "enter the first number: ";
    cin >> num1;

    cout << "enter the second number: ";
    cin >> num2;

    //process
    sum = num1 + num2;

    //output
    cout << "the sum: " << sum << endl;

    return 0;
}