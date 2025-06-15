#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; // O(1) - Declaring a variable takes constant time

    cin >> n; // O(1) - Reading input also takes constant time

    /*
    This is a logarithmic loop:
    - The loop variable 'i' is multiplied by 2 in each iteration (i *= 2)
    - This causes 'i' to grow exponentially (1, 2, 4, 8, 16, ...)
    - So, the number of iterations is roughly log₂(n)
    - In Big O, the base of the logarithm is ignored → O(log n)

    Why is this important?
    - A normal loop with i++ would run n times
    - But here, i *= 2 significantly reduces iterations (e.g., for n = 1024 → only 10 iterations)
    - Exponential changes in loop counters drastically reduce run time

    Summary:
    - Loop runs ⌊log₂(n)⌋ + 1 times → Time complexity: O(log n)
    - This pattern (i *= k or i /= k) always leads to logarithmic complexity
    */
    for (int i = 1; i <= n; i *= 2) {  // O(log n)
        cout << i << " "; // O(1) per iteration → total O(log n)
    }

    return 0; // O(1) - Program ends with constant time
}

/*
Final Time Complexity Breakdown:
- Variable declaration: O(1)
- Input: O(1)
- Logarithmic loop: O(log n)
- Return: O(1)

Total: O(1 + 1 + log n + 1) = O(3 + log n)
Final Time Complexity (after ignoring constants): O(log n)
*/
