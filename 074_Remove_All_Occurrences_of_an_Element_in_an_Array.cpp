#include <iostream>
using namespace std;
int main() {
    int n, element;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements of array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter element to remove: ";
    cin >> element;
    int newSize = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] != element) {
            arr[newSize] = arr[i];
            newSize++;
        }
    }
    cout << "Array after removing " << element << ": ";
    for (int i = 0; i < newSize; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

