#include <iostream>
using namespace std;

int main() {
    int num, temp, rem, rev = 0;

    cout << "Enter a number: ";
    cin >> num;

    temp = num;

    while (temp != 0) {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp = temp / 10;
    }

    if (num == rev)
        cout << num << " is a palindrome number." << endl;
    else
        cout << num << " is not a palindrome number." << endl;

    return 0;
}

