#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    int freq[256] = {0};

    for (char ch : s) {
        freq[(unsigned char)ch]++;
    }

    for (char ch : s) {
        if (freq[(unsigned char)ch] == 1) {
            cout << "First non-repeating character: " << ch;
            return 0;
        }
    }

    cout << "No non-repeating character found.";
    return 0;
}

