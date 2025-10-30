/*
Problem statement: construct a program to take user's name and give a welcome message

Algorithm ->
- start
- ask for name and store it in name
- print the name with welcome message
- end

*/

#include <iostream>
using namespace std;

int main()
{
    //variables
    string name;

    //input
    cout << "what is your name?" << endl;
    getline (cin, name);

    //output
    cout << "welcome " << name << endl;

    return 0;
}