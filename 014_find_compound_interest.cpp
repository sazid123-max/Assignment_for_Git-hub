#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double principal, rate, time, amount, compoundInterest;

    cout << "Enter Principal amount: ";
    cin >> principal;

    cout << "Enter Rate of Interest: ";
    cin >> rate;

    cout << "Enter Time (in years): ";
    cin >> time;

    // Formula: A = P * (1 + R/100)^T
    amount = principal * pow((1 + rate / 100), time);

    // Compound Interest = Amount - Principal
    compoundInterest = amount - principal;

    cout << "Compound Interest = " << compoundInterest << endl;

    return 0;
}
