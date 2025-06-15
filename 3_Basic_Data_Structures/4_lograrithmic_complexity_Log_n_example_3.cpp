#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;  // O(1) - Variable declaration (constant time)
    cin >> n;  // O(1) - Input operation (constant time)
    
    int k = 2; // O(1) - Constant initialization

    /*
    This loop appears linear (for i = 1 to n), but it’s **not actually O(n)**

    Key observation:
    - The loop counter 'i' is modified **inside the loop body** using multiplication: i *= k (i.e., i *= 2)
    - So, even though the for loop looks linear, the actual increments behave like powers of 2: 1, 2, 4, 8, ...
    - Each iteration roughly doubles the value of 'i'

    Time Complexity:
    - This pattern results in a logarithmic number of iterations → O(log n)
    - The multiplication/division inside the loop body (not just in the loop header) still affects the total complexity
    - Base of log (e.g., log₂) is ignored in Big O, so it's just O(log n)

    Output:
    - Each iteration does O(1) work (printing)
    - Total work is O(log n)

    Important:
    - Loops with i *= k or i /= k (anywhere inside) lead to O(log n) complexity
    - Misinterpreting this loop as O(n) is a common beginner mistake
    */
    for (int i = 1; i < n; i++) {  // Appears O(n), but actually O(log n) due to i *= k
        cout << i << " "; // O(1) per iteration

        i *= k; // Multiplies i by 2 → changes loop from linear to logarithmic
    }

    return 0;  // O(1) - Program ends in constant time
}

/*
Final Time Complexity Analysis:
- int n;         → O(1)
- cin >> n;      → O(1)
- int k = 2;     → O(1)
- Loop with i *= k inside → O(log n)
- cout in loop   → O(1) per iteration × O(log n) = O(log n)
- return 0;      → O(1)

Total: O(1 + 1 + 1 + log n + 1) = O(4 + log n)
Final Time Complexity (ignoring constants): O(log n)
*/
