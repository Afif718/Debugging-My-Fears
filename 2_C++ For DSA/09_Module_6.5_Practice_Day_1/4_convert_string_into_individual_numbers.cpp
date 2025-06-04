#include <bits/stdc++.h>
using namespace std;

int main(){

    string s;
    getline(cin, s);  // Read a line of input (could include spaces)

    // Initialize sum to store the total of all digit values
    int sum = 0;

    // Loop through each character in the string until null character is reached
    for(int i = 0; s[i] != '\0'; i++) {
        cout << "char to int --> " << s[i] << endl;  // Print current character

        // Convert character digit to actual integer and add to sum
        // (s[i] - '0') converts from ASCII to integer value
        sum += (int)s[i] - '0';
    }

    // Print the final sum of digits
    cout << "Sum of integers --> " << sum << endl;

    return 0;
}
