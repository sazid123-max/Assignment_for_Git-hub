#include <iostream>
using namespace std;

int main() {
    int a, b, temp;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    // Swapping
    temp = a;
    a = b;
    b = temp;

    cout << "\nAfter swapping:\n";
    cout << "First number = " << a << endl;
    cout << "Second number = " << b << endl;

    return 0;
}

