#include <iostream>
using namespace std;

int main() {
    int num, i, count = 0;

    cout << "Enter a number: ";
    cin >> num;

    if (num <= 1) {
        cout << num << " is not a prime number." << endl;
        return 0;
    }

    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            count = 1;
            break;
        }
    }

    if (count == 0)
        cout << num << " is a prime number." << endl;
    else
        cout << num << " is not a prime number." << endl;

    return 0;
}

