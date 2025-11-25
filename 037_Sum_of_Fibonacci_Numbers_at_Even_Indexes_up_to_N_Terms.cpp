#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of terms: ";
    cin >> n;

    long long a = 0, b = 1, fib, sum = 0;

    for (int i = 1; i <= n; i++) {
        if (i == 1)
            fib = 0;
        else if (i == 2)
            fib = 1;
        else {
            fib = a + b;
            a = b;
            b = fib;
        }

        if (i % 2 == 0)  // even index
            sum += fib;
    }

    cout << "Sum of Fibonacci numbers at even indexes up to "
         << n << " terms is: " << sum << endl;

    return 0;
}

