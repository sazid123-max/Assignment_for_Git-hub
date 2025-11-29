#include <iostream>
using namespace std;

int main() {
    int n, k;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements of array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter number of rotations: ";
    cin >> k;
    k = k % n;
    int rotated[n];
    for (int i = 0; i < n; i++) {
        rotated[(i + k) % n] = arr[i];
    }
    cout << "Array after rotation: ";
    for (int i = 0; i < n; i++) {
        cout << rotated[i] << " ";
    }
    cout << endl;
    return 0;
}

