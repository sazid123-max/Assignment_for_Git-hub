
#include <iostream>
using namespace std;
int main() {
    int r, c;
    cout << "Enter number of rows and columns: ";
    cin >> r >> c;
    int a[r][c], b[r][c];
    cout << "Enter elements of first matrix:\n";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> a[i][j];
        }
    }
    cout << "Enter elements of second matrix:\n";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> b[i][j];
        }
    }
    bool equal = true;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (a[i][j] != b[i][j]) {
                equal = false;
                break;
            }
        }
        if (!equal) break;
    }
    if (equal)
        cout << "Matrices are Equal.";
    else
        cout << "Matrices are NOT Equal.";
    return 0;
}

