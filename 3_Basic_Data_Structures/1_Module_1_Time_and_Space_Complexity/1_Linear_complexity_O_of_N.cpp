#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; // O(1) - Constant time to declare a variable
    cin >> n; // O(1) - Constant time input operation

    // First loop: runs from i = 1 to n, incremented by 2
    // This loop executes approximately n/2 times
    // Time complexity: O(n/2) → O(n) (We ignore constants in Big O notation)
    for(int i = 1; i <= n; i += 2) {
        cout << i << " "; // O(1) per iteration → total O(n)
    }

    cout << endl; // O(1) - Constant time

    // Second loop: runs from i = 1 to n, incremented by 1
    // Executes n times → O(n)
    for(int i = 1; i <= n; i++) {
        cout << i << " "; // O(1) per iteration → total O(n)
    }

    return 0; // O(1) - Constant time
}

/*
Final Time Complexity Analysis:
- int n;                  → O(1)
- cin >> n;               → O(1)
- first for loop          → O(n)
- cout << endl;           → O(1)
- second for loop         → O(n)
- return 0;               → O(1)

Total: O(1 + 1 + n + 1 + n + 1) = O(4 + 2n)
Ignoring constants → Final Time Complexity: O(n)
*/
