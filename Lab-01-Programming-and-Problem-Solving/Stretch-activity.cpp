/* Stretch Activity: Check for 'a'/'A' and show count + positions */

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string text;
    cout << "Enter a string: ";
    getline(cin, text);

    vector<int> positions; // stores indexes where 'a'/'A' occurs

    // Loop through each character with index
    for (int i = 0; i < text.length(); i++) {
        char ch = text[i];
        if (ch == 'a' || ch == 'A') {
            positions.push_back(i); // save position
        }
    }

    // Output results
    if (positions.empty()) {
        cout << "No, the string does not contain 'a'" << endl;
    } else {
        cout << "Yes, the string contains 'a'" << endl;
        cout << "Total occurrences: " << positions.size() << endl;
        cout << "Positions (0-based index): ";
        for (int pos : positions) {
            cout << pos << " ";
        }
        cout << endl;
    }

    return 0;
}
