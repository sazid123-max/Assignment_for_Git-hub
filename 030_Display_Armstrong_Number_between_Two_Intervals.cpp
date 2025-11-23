#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int low, high;

    cout << "Enter lower interval: ";
    cin >> low;

    cout << "Enter upper interval: ";
    cin >> high;

    cout << "Armstrong numbers between " << low << " and " << high << " are: ";

    for (int num = low; num <= high; num++) {
        int sum = 0, temp = num;

        while (temp != 0) {
            int digit = temp % 10;
            sum += digit * digit * digit;
            temp /= 10;
        }

        if (sum == num) {
            cout << num << " ";
        }
    }

    return 0;
}

