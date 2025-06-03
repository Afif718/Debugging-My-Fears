#include <bits/stdc++.h>
using namespace std;

int main(){
    // Example: Different types of string constructors in C++

    // 1. Basic constructor: Initializes string with a C-style string (const char*)
    // string s("hello"); // Output: hello

    // 2. Length-limited constructor: Takes a C-style string and length, copies up to 'length' characters
    // string s("hello world", 4); // Output: hell

    // 3. Substring constructor: Creates a string from another string starting at a given position
    // string t = "my love Etu";
    // string s(t, 2); // Starts from index 2, Output: " love Etu"

    // 4. Fill constructor: Creates a string of given length and fills it with a specific character
    string s(5, 'A'); // Creates string "AAAAA"

    // Output the constructed string
    cout << s << endl;

    return 0;
}
