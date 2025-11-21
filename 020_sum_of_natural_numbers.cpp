#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    // Ask user for input
    cout << "Enter a positive integer: ";
    cin >> n;

    // Calculate sum of natural numbers
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    // Display the result
    cout << "The sum of first " << n << " natural numbers is: " << sum << endl;

    return 0;
}

