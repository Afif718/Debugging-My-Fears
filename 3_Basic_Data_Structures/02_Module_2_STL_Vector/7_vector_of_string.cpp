#include <bits/stdc++.h>
using namespace std;

int main() {
    int size;
    cin >> size;     // Input the number of strings to read
    cin.ignore();    // Clear the newline character left in the input buffer after cin

    // Declare a vector of strings with the specified size
    vector<string> str(size);

    // Input each string using getline to support spaces within strings
    for (int i = 0; i < size; i++) {
        // cin >> str[i];      // This would only read a word (stops at space)
        getline(cin, str[i]); // Reads an entire line including spaces
    }

    // Print all the strings stored in the vector
    for (string s : str) {
        cout << s << " "; // Print each string followed by a space
    }

    return 0;
}
