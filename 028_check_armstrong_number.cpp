#include <iostream>
using namespace std;

int main() {
    int num, r, sum = 0, temp;

    cout << "Enter a number: ";
    cin >> num;

    temp = num;

    while (temp != 0) {
        r = temp % 10;
        sum += r * r * r;   // cube of each digit
        temp /= 10;
    }

    if (sum == num)
        cout << num << " is an Armstrong Number";
    else
        cout << num << " is not an Armstrong Number";

    return 0;
}
