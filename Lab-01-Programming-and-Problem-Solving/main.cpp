#include <iostream>
#include <string>
using namespace std;

int main() {
    string text;
    cout << "Enter a string: ";
    getline(cin, text);

    bool found = false;

    // Loop through each character
    for (char ch : text) {
        if (ch == 'a' || ch == 'A') {
            found = true;
            break; // stop once we find 'a'
        }
    }

    if (found) {
        cout << "Yes, the string contains 'a'" << endl;
    } else {
        cout << "No, the string does not contain 'a'" << endl;
    }

    return 0;
}
