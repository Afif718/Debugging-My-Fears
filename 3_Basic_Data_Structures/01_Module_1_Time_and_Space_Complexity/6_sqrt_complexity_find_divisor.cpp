#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;  // Input the number for which we want to find divisors

    cout << "Divisors of " << n << " are: ";
    
    /*
    Efficient way to find all divisors:
    - A number n has divisors in pairs: (i, n/i)
    - Example: n = 36 → divisor pairs: (1,36), (2,18), (3,12), (4,9), (6,6)
    - Notice that after i = sqrt(n), the pairs start repeating in reverse
    - So, we only need to loop till sqrt(n) to avoid redundancy
    - Time complexity: O(√n)
    */
    
    // You can find sqrt this way for (int i = 1; i * i <= n; i++) {
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) { // if i divides n exactly
            cout << i << " ";  // i is a divisor

            // Check to avoid printing duplicate for perfect squares
            if (i != n / i) {
                cout << n / i << " ";  // n/i is also a divisor
            }

            /*
            Example for n = 36:
            i = 2 → 36 % 2 == 0 → 2 and 36/2 = 18 → print 2 and 18
            i = 6 → 36 % 6 == 0 → 6 and 36/6 = 6 → same, so only print once
            */
        }
    }

    return 0;  // End of program
}

/*
===============================
        Time Complexity
===============================

Loop: for (int i = 1; i * i <= n; i++) runs √n times → O(√n)

- In each iteration, at most two divisors are printed (i and n/i)
- For perfect squares (like 36), we avoid printing the same divisor twice

Total time complexity: O(√n)

Space complexity: O(1), since we are not storing anything
*/
