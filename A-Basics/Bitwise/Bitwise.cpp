/*
OBJECTIVE:
Write a C++ program that:
- Reads two integers a and b from the user.
- Displays the result of applying all six bitwise operators (&, |, ^, ~, <<, >>) on them.
- Prints both the binary representation (using bitset<8>) and the decimal value for each operation.
*/

#include <iostream>
#include <bitset>
using namespace std;

int main(){
    
    //variables
    int a, b, g, h, i, j, k, l;
    cout << "enter 2 integers a and b: ";
    cin >> a >> b;

    cout << a << " in binary: " << bitset<8>(a) << endl;
    cout << b << " in binary: " << bitset<8>(b) << endl;

    g = a & b;
    h = a | b;
    i = a ^ b;
    j = ~a;
    k = a << 1;
    l = b >> 2;

    cout << "performing " << a << " & " << b << ": " << bitset<8>(g) << " _____ decimal: " << g << endl;
    cout << "performing " << a << " | " << b << ": " << bitset<8>(h) << " _____ decimal: " << h << endl;
    cout << "performing " << a << " ^ " << b << ": " << bitset<8>(i) << " _____ decimal: " << i << endl;
    cout << "performing ~" << a << ": " << bitset<8>(j) << " _____ decimal: " << j << endl;
    cout << "performing " << a << " << 1" << ": " << bitset<8>(k) << " _____ decimal: " << k << endl;
    cout << "performing " << b << " >> 2 " << ": " << bitset<8>(l) << " _____ decimal: " << l << endl;


    cin.ignore();
    cin.get();
    return 0;
}
