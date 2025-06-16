#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;  // Input a number, e.g., n = 3

    /*
    =========================================
    Time Complexity Analysis: Quadratic O(n²)
    =========================================

    Outer loop runs from i = 0 to n-1 → runs n times
    Inner loop runs from j = 0 to n-1 → runs n times for each i

    → So total iterations = n (outer) * n (inner) = n²

    Example: If n = 3
    -----------------
    i = 0 → j = 0 1 2 → prints "Hello Hello Hello"
    i = 1 → j = 0 1 2 → prints "Hello Hello Hello"
    i = 2 → j = 0 1 2 → prints "Hello Hello Hello"

    Total "Hello" prints = 3 * 3 = 9 → O(n²)
    */

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Hello ";
        }
        cout << endl;  // Print newline after each row
    }

    return 0;
}
