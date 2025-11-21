#include <iostream>
using namespace std;

int main() {
    int N, i, j;
    bool isPrime;

    cout << "Enter the value of N: ";
    cin >> N;

    cout << "Prime numbers from 1 to " << N << " are: ";

    for (i = 2; i <= N; i++) {
        isPrime = true;

        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
            cout << i << " ";
    }

    return 0;
}

