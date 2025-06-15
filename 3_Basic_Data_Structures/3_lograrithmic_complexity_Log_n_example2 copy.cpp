#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n; // O(1) - Input takes constant time

    /*
    This is a logarithmic loop (O(log n)):
    - The loop starts from 'n' and repeatedly divides 'i' by 3: i /= 3
    - Each iteration reduces 'i' to approximately one-third of its previous value
    - So the number of iterations is about log₃(n)
    - In Big O notation, we ignore the base → Time complexity becomes O(log n)

    Why is this efficient?
    - A linear loop would run 'n' times (O(n))
    - But this runs in logarithmic steps → e.g., if n = 729, the loop runs ~6 times
    - Division (i /= k) or multiplication (i *= k) inside or at the end of the loop
      leads to logarithmic time as the step size changes exponentially

    Summary:
    - Each iteration is O(1)
    - Total iterations ≈ log₃(n) → O(log n)
    */
    for (int i = n; i >= 1; i /= 3) {  // O(log n)
        cout << i << " "; // O(1) per iteration → total O(log n)
    }

    return 0; // O(1) - Program exits in constant time
}

/*
Final Time Complexity Breakdown:
- Input: O(1)
- Loop: O(log n) [due to i /= 3]
- Output per iteration: O(1) × log n = O(log n)
- Return: O(1)

Total Time Complexity: O(1 + log n + 1) = O(2 + log n)
Final Time Complexity (ignoring constants): O(log n)
*/
