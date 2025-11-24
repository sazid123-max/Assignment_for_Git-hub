#include <iostream>
using namespace std;

int main() {
    int num, originalNum, remainder, result;

    cout << "Armstrong numbers between 1 to 1000 are: " << endl;

    for (num = 1; num <= 1000; num++) {
        originalNum = num;
        result = 0;

        while (originalNum != 0) {
            remainder = originalNum % 10;
            result += remainder * remainder * remainder;
            originalNum /= 10;
        }

        if (result == num) {
            cout << num << " ";
        }
    }

    return 0;
}

