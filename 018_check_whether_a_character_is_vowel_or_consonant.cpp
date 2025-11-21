#include <iostream>
using namespace std;

int main() {
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    // Check if character is a letter
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        // Convert to lowercase for simplicity
        ch = tolower(ch);

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            cout << "The character is a Vowel.";
        } else {
            cout << "The character is a Consonant.";
        }
    } else {
        cout << "Invalid input! Please enter an alphabet.";
    }

    return 0;
}

