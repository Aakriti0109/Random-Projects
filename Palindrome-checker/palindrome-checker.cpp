#include <iostream>
using namespace std;

int main() {
    string str, reversed = "";

    cout << "Enter a word: ";
    cin >> str;

    // Reverse the string
    for (int i = str.length() - 1; i >= 0; i--) {
        reversed += str[i];
    }

    // Check palindrome
    if (str == reversed) {
        cout << "✅ It's a palindrome!" << endl;
    } else {
        cout << "❌ Not a palindrome." << endl;
    }

    return 0;
}