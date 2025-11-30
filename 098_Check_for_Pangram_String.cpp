#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool isPangram(string str) {
    bool letters[26] = {false};

    for (char ch : str) {
        if (isalpha(ch)) {
            ch = tolower(ch);
            letters[ch - 'a'] = true;
        }
    }
    for (int i = 0; i < 26; i++) {
        if (!letters[i])
            return false;
    }
    return true;
}
int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);
    if (isPangram(s))
        cout << "The string is a pangram.";
    else
        cout << "The string is not a pangram.";
    return 0;
}

