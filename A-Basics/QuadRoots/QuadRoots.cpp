/*
Objective:
Write a C++ program that calculates the real roots of a quadratic equation of the form:
ax^2+bx+c=0

Input:
- Three floating-point numbers: a, b, and c (coefficients of the equation)

Output:
- If the discriminant D=b^2-4ac is:
- Positive: Print two distinct real roots
- Zero: Print one repeated real root
- Negative: Print "No real roots" (imaginary roots not required)


ALGORITHM: Find Real Roots of ax² + bx + c = 0

1. Start
2. Declare variables: a, b, c, d, r1, r2
3. Input values for a, b, c
4. Compute discriminant: d = b² - 4ac
5. If d > 0:
     - Compute r1 = (-b + sqrt(d)) / (2a)
     - Compute r2 = (-b - sqrt(d)) / (2a)
     - Print "Roots are real and distinct"
     - Print r1 and r2
6. Else if d == 0:
     - Compute r = -b / (2a)
     - Print "Roots are real and equal"
     - Print r
7. Else:
     - Print "No real roots"
8. End
*/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    // variables
    float a, b, c, d, r1, r2, r;

    // input
    cout << "enter coefficient a: ";
    cin >> a;

    cout << "enter coefficient b: ";
    cin >> b;

    cout << "enter coefficient c: ";
    cin >> c;

    // computing discriminant
    d = pow(b, 2) - (4 * a * c);

    // computing roots and output
    if (d > 0)
    {
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
        cout << "r1: " << fixed << setprecision(2) << r1 << endl;
        cout << "r2: " << fixed << setprecision(2) << r2 << endl;
    }
    else if (d == 0)
    {
        r = -b / (2 * a);
        cout << "the roots are equal" << endl;
        cout << "r: " << fixed << setprecision(2) << r << endl;
    }
    else
    {
        cout << "no real roots" << endl;
    }

    cin.ignore();
    cin.get();
    return 0;
}