/*
problem statement : 
Write a C++ program that does the following:
- Takes one char input from the user
- Then prints:
- The ASCII code of that character (cast char → int)
- The same letter flipped in case:
- If lowercase → show uppercase
- If uppercase → show lowercase
- The previous and next characters in the ASCII table (cast + math)
*/

#include <iostream>
#include <cctype>
using namespace std;

int main(){

    //variables
    char character;
    char previous;
    char next;
    int ascii;


    //input
    cout << "enter a character: ";
    cin >> character;


    //ASCII code
    ascii = (int)character;
    cout << "the ASCII code of the character: " << ascii << endl;

    //Case flipping
    if (isupper(character)){
        cout << "the flipped character: " << (char)tolower(character) << endl;
    }
    else cout << "the flipped character: " << (char)toupper(character) << endl;


    //previous and next character
    previous = (int)character - 1;
    next = (int)character + 1;

    cout << "previous character: " << previous << endl;
    cout << "next character: " << next << endl;


    cin.ignore();
    cin.get();
    return 0;
}

