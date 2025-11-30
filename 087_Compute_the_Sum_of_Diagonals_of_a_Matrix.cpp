#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of square matrix (n x n): ";
    cin >> n;

    int a[n][n];

    cout << "Enter matrix elements:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    int mainDiagonal = 0, secondaryDiagonal = 0;

    for (int i = 0; i < n; i++) {
        mainDiagonal += a[i][i];
        secondaryDiagonal += a[i][n - i - 1];
    }

    cout << "Sum of Main Diagonal = " << mainDiagonal << endl;
    cout << "Sum of Secondary Diagonal = " << secondaryDiagonal << endl;
    cout << "Total Sum of Both Diagonals = "
         << mainDiagonal + secondaryDiagonal << endl;

    return 0;
}

