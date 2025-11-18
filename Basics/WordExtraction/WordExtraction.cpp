/* 
TASK: Task:
Write a program that takes an ID from the user and prints each word on a new line.

Algorithm:
- start
- input a string (name, age, city, job)
- divide it using isstream
- print the data on a new line
- end
*/

#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main()
{
    // declaration and input
    string id;
    cout << "enter your name, age, city and job" << endl;
    getline(cin, id);

    istringstream str(id);

    string name, city, job;
    int age;

    str >> name >> age >> city >> job;

    cout << "name: " << name << endl;
    cout << "age: " << age << endl;
    cout << "city: " << city << endl;
    cout << "job: " << job << endl;

    return 0;
}