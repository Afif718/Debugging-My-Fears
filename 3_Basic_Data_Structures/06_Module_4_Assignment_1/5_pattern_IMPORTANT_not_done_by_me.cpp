#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n; // ✅ Input odd number (1, 3, 5, 7, etc.)

    for (int i = 0; i < n; i++) {

        // ✅ Top half (before center): rows 0 to n/2 - 1
        if (i < n / 2) {
            // Print leading spaces
            for (int s = 0; s < i; s++) cout << " ";

            cout << "\\"; // Print left slash

            // Middle gap (spaces between \ and /)
            int inner = n - 2 * i - 2; // Key formula
            for (int s = 0; s < inner; s++) cout << " ";

            cout << "/"; // Print right slash
        }

        // ✅ Middle line (center row): row n/2
        else if (i == n / 2) {
            // Print n/2 spaces before X
            for (int s = 0; s < i; s++) cout << " ";
            cout << "X";
        }

        // ✅ Bottom half (after center): rows n/2 + 1 to n-1
        else {
            int j = n - 1 - i; // Mirror row index

            for (int s = 0; s < j; s++) cout << " ";

            cout << "/"; // Print forward slash

            int inner = n - 2 * j - 2; // Same formula
            for (int s = 0; s < inner; s++) cout << " ";

            cout << "\\"; // Print backslash
        }

        cout << "\n"; // ✅ Move to next line
    }

    return 0;
}


/*

Problem Statement

You will be given an positive odd integer N, you need to print the pattern for it. See sample input and output for understanding the pattern.

Input Format

Input will contain only N.
Constraints

1 <= N <= 20 and N is odd.
Output Format

Output the pattern.
Sample Input 0

5
Sample Output 0

\   /
 \ / 
  X  
 / \ 
/   \
Sample Input 1

7
Sample Output 1

\     /
 \   / 
  \ /  
   X   
  / \  
 /   \ 
/     \
Sample Input 2

3
Sample Output 2

\ /
 X 
/ \
Sample Input 3

1
Sample Output 3

X

*/