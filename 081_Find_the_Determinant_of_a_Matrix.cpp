#include <iostream>
using namespace std;

int main() {
    int a[2][2];

    cout << "Enter 4 elements of the 2x2 matrix:\n";
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            cin >> a[i][j];

    int det = (a[0][0] * a[1][1]) - (a[0][1] * a[1][0]);

    cout << "Determinant = " << det;

    return 0;
}

