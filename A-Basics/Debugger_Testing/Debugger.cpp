// Ø Start
#include <iostream>
using namespace std;

int main() {
    int n = 5;
    int sum = 0;

    // Ø Loop
    for (int i = 1; i <= n; i++) {
        sum += i;  // Ø Breakpoint-worthy: Watch 'sum' evolve
        cout << "Adding " << i << ", sum = " << sum << endl;
    }

    // Ø Output
    cout << "Final sum = " << sum << endl;

    return 0;
}
// Ø Finish