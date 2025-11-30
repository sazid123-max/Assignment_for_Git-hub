#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int r, c;
    cout << "Enter number of rows and columns: ";
    cin >> r >> c;

    int a[r][c];
    cout << "Enter elements of the matrix:\n";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> a[i][j];
        }
    }
    int trace = 0;
    double sumSquares = 0;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            sumSquares += a[i][j] * a[i][j];
            if (i == j) {
                trace += a[i][j];
            }
        }
    }
    double normal = sqrt(sumSquares);
    cout << "Trace = " << trace << endl;
    cout << "Normal = " << normal << endl;
    return 0;
}

