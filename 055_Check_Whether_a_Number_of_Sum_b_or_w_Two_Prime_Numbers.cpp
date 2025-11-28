#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= n/2; i++)
        if (n % i == 0) return false;
    return true;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    bool found = false;

    for (int i = 2; i <= num/2; i++) {
        if (isPrime(i) && isPrime(num - i)) {
            cout << num << " = " << i << " + " << (num - i);
            found = true;
            break;
        }
    }

    if (!found)
        cout << num << " cannot be expressed as sum of two prime numbers.";

    return 0;
}

