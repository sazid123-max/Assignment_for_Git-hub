#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    int left = 0;
    int right = s.length() - 1;

    bool isPalindrome = true;

    while (left < right) {
        if (s[left] != s[right]) {
            isPalindrome = false;
            break;
        }
        left++;
        right--;
    }

    if (isPalindrome)
        cout << "The string is a palindrome.";
    else
        cout << "The string is not a palindrome.";

    return 0;
}

