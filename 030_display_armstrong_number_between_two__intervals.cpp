#include <iostream>
using namespace std;

int main() {
    int start, end;

    cout << "Enter start number: ";
    cin >> start;

    cout << "Enter end number: ";
    cin >> end;

    cout << "Armstrong numbers between " << start << " and " << end << " are: ";

    for (int n = start; n <= end; n++) {
        int temp = n;
        int sum = 0;

        while (temp > 0) {
            int digit = temp % 10;
            sum += digit * digit * digit;
            temp /= 10;
        }

        if (sum == n) {
            cout << n << " ";
        }
    }

    return 0;
}

