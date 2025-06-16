#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    /*
    ====================================================
    Time Complexity Analysis: Linearithmic → O(n log n)
    ====================================================

    Outer loop:
    - Runs from i = 1 to n → executes n times → O(n)

    Inner loop:
    - Runs from j = 1; j <= n; j *= 2
    - j increases by multiplying by 2 each time → 1, 2, 4, 8, ...
    - So it runs approximately log₂(n) times → O(log n)

    Total time complexity = O(n) * O(log n) = O(n log n)

    ----------------------------------------------------
    Example:
    If n = 8:
    Outer loop runs 8 times
    Inner loop runs log₂(8) = 3 times → j = 1, 2, 4, 8

    So "Hello" will be printed: 8 * 4 = 32 times
    */

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j *= 2) {
            cout << "Hello ";
        }
        cout << endl;  // Newline after each outer iteration
    }

    return 0;
}
