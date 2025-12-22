/*
AIM: Create a program where the user inputs the book title, rating (1-5 stars) and author's name. 

Algorithm:
- start
- declare variables and take input - title, rating, author's name
- for i = 0 until i < rating
    print (*)
- print the rating given by user in form of star (loop play)
- end;
*/

#include <iostream>
using namespace std;

int main()
{
    // variable declaration
    string title, authName;
    int rating;

    // input
    cout << "enter book title: ";
    getline (cin, title);

    cout << "what would you rate the book (1-5)?" << endl;
    cin >> rating;

    cin.ignore();

    cout << "enter the author's name followed by prefix" << endl;
    getline(cin, authName, ',');

    // output
    cout << "the profile created is: \n\n\n";
    cout << "title: " << title << endl;
    cout << "rating: ";
    for (int i = 0; i < rating; i++){
        cout << "*";
    }
    cout << endl;
    cout << "Author's Name: " << authName << endl;
    cout << endl;

    return 0;

}