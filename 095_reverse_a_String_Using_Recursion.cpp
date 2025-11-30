#include <iostream>
#include <string>
using namespace std;

void reverseString(string &s, int i, int j) {
    if (i >= j)
        return;

    char temp = s[i];
    s[i] = s[j];
    s[j] = temp;

    reverseString(s, i + 1, j - 1);
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    reverseString(str, 0, str.length() - 1);

    cout << "Reversed string: " << str;
    return 0;
}

