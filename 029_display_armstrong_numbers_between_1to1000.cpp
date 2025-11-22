#include <iostream>
using namespace std;

int main() {
    int num, temp, r, sum;

    cout << "Armstrong numbers between 1 and 1000:\n";

    for (num = 1; num <= 1000; num++) {
        temp = num;
        sum = 0;

        while (temp != 0) {
            r = temp % 10;
            sum += r * r * r;
            temp /= 10;
        }

        if (sum == num)
            cout << num << " ";
    }

    return 0;
}

