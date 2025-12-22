/* 
AIM: to showcase overflow of a data type limit
*/

#include <iostream>
#include <limits.h>
using namespace std;

int main(){

    int x = INT_MAX;
    
    cout << x << endl;
    cout << "prints the highest value possible of integer data type" << endl;

    ++x;
    cout << x << endl;
    cout << "after incrementing x by 1, the overflow happens and the value turns into the minimum value possible" << endl;

    cin.ignore();
    cin.get();

    return 0;
}