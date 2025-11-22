
#include <iostream>
using namespace std;

int main() {
    cout << "Armstrong numbers between 1 and 1000:\n";

    for (int n = 1; n <= 1000; n++) {
        int temp = n, sum = 0;

        while (temp != 0) {
            int r = temp % 10;
            sum += r*r*r;
            temp /= 10;
        }

        if (sum == n)
            cout << n << " ";
    }

    return 0;
}
