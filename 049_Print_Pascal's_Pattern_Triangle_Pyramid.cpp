#include <iostream>
using namespace std;

int combination(int n, int r) {
    int res = 1;
    if (r > n - r)
        r = n - r;
    for (int i = 0; i < r; i++) {
        res = res * (n - i);
        res = res / (i + 1);
    }
    return res;
}

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++)
            cout << "  ";

        for (int j = 0; j <= i; j++) {
            cout << combination(i, j) << "   ";
        }
        cout << endl;
    }

    return 0;
}

