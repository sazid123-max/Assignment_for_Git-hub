#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int index;

    cout << "Enter a string: ";
    getline(cin, str);

    cout << "Enter index (starting from 0): ";
    cin >> index;

    if (index < 0 || index >= str.length()) {
        cout << "Invalid index!";
    } else {
        char ch = str[index];
        int codePoint = (int)ch;
        cout << "Character at index " << index << " is '" << ch
             << "' with code point: " << codePoint;
    }

    return 0;
}

