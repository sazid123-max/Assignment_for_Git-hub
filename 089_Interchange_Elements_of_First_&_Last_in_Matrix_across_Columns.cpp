#include <iostream>
using namespace std;

int main() {
    int r, c;
    cout << "Enter number of rows and columns: ";
    cin >> r >> c;

    int a[r][c];
    cout << "Enter matrix elements:\n";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> a[i][j];
        }
    }
    for (int j = 0; j < c; j++) {
        int temp = a[0][j];
        a[0][j] = a[r - 1][j];
        a[r - 1][j] = temp;
    }
    cout << "\nMatrix After Interchanging First & Last Elements in Each Column:\n";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

