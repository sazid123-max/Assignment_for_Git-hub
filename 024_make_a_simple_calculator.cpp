#include <iostream>
using namespace std;

int main() {
    char op;
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    if(op == '+')
        cout << "Result: " << a + b;
    else if(op == '-')
        cout << "Result: " << a - b;
    else if(op == '*')
        cout << "Result: " << a * b;
    else if(op == '/')
        cout << "Result: " << a / b;
    else
        cout << "Invalid operator!";

    return 0;
}

