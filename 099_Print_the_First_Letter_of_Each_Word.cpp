#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    cout << "First letters of each word: ";

    bool newWord = true;
    for (char ch : str) {
        if (ch == ' ' || ch == '\t') {
            newWord = true;
        } else if (newWord) {
            cout << ch << " ";
            newWord = false;
        }
    }

    return 0;
}

