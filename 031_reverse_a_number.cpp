#include <iostream>
using namespace std;

int main() {
    int num, rev = 0, rem;

    cout << "Enter a number: ";
    cin >> num;

    int temp = num;

    while (temp != 0) {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp = temp / 10;
    }

    cout << "Reversed number: " << rev << endl;

    return 0;
}

