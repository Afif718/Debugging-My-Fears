#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;              // O(1) → Just one integer, constant space
    cin >> n;           // O(1) → Reading one integer doesn't use extra space

    int arr[10000];     // O(n) → Array to store up to n integers
                        // Static allocation of 10,000 ints → 4 * 10,000 = 40,000 bytes
                        // But if you only use `n` elements, consider it O(n)

    // Input n integers
    for (int i = 0; i < n; i++) {  
        cin >> arr[i];  // O(1) per element (no new space used, just filling existing array)
    }

    // Output the n elements
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";  // O(1) → Output doesn't consume extra space
    }

    return 0;           // O(1)
}

/*
===============================
🧠 Space Complexity Calculation:
===============================
- Variable `n`         → O(1)
- Array `arr[n]`       → O(n)
- Loop counters        → O(1)
--------------------------------
Total Space Complexity → O(n)
================================
Example:
If n = 5 → array stores 5 integers
→ 5 * 4 bytes = 20 bytes (assuming int = 4 bytes)
→ In Big-O: O(n)
*/
