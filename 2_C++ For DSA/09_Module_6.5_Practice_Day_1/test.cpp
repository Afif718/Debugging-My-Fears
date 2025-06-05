#include <iostream>
#include <string>
using namespace std;

int main() {
    int t; 
    cin >> t;  // Read the number of test cases

    while (t--) {  // Loop through each test case
        int n; 
        cin >> n;  // Read the length of the string s

        string s; 
        cin >> s;  // Read the string representing order of solved problems

        // Array to keep track of which problems have been solved before
        // Index 0 corresponds to 'A', 1 to 'B', ..., 25 to 'Z'
        bool solved[26] = {false};

        int balloons = 0;  // To keep track of total balloons distributed

        // Loop through each character/problem in the string s
        for (int i = 0; i < n; i++) {
            // Convert character to index (e.g., 'A' -> 0, 'B' -> 1, etc.)
            int index = s[i] - 'A';

            // If this is the first time this problem is solved
            if (!solved[index]) {
                balloons += 2;      // 2 balloons: one for solving, one for first solve bonus
                solved[index] = true;  // Mark this problem as solved
            } else {
                balloons += 1;      // Already solved before, only 1 balloon awarded now
            }
        }

        cout << balloons << endl;  // Output total balloons for this test case
    }

    return 0;
}
