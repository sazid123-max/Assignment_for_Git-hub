
#include <iostream>
using namespace std;
int main() {
    int r, c;
    cout << "Enter number of rows and columns: ";
    cin >> r >> c;
    int a[r][c];
    cout << "Enter matrix elements:\n";
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> a[i][j];
    int top = 0, bottom = r - 1, left = 0, right = c - 1;
    while (top < bottom && left < right) {
        int temp = a[top][left];
        for (int i = top; i < bottom; i++)
            a[i][left] = a[i + 1][left];
        for (int j = left; j < right; j++)
            a[bottom][j] = a[bottom][j + 1];
        for (int i = bottom; i > top; i--)
            a[i][right] = a[i - 1][right];
        for (int j = right; j > left + 1; j--)
            a[top][j] = a[top][j - 1];
        a[top][left + 1] = temp;
        top++;
        bottom--;
        left++;
        right--;
    }
    cout << "\nMatrix After Rotation:\n";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
