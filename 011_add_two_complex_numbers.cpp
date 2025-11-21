#include <iostream>
using namespace std;

struct Complex {
    float real;
    float imag;
};

int main() {
    Complex num1, num2, sum;

    cout << "Enter first complex number (real and imaginary part): ";
    cin >> num1.real >> num1.imag;

    cout << "Enter second complex number (real and imaginary part): ";
    cin >> num2.real >> num2.imag;

    // Adding real and imaginary parts
    sum.real = num1.real + num2.real;
    sum.imag = num1.imag + num2.imag;

    cout << "\nSum = " << sum.real << " + " << sum.imag << "i";

    return 0;
}

