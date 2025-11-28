#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    int number = rows * (rows + 1) / 2;

    for (int i = rows; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << number << " ";
            number--;
        }
        cout << endl;
    }

    return 0;
}

