#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= sqrt(n); i++) {
        // Loop runs from 1 to √n (inclusive)
        // For n = 36, sqrt(36) = 6 → i ranges from 1 to 6

        if (n % i == 0) {
            // Check if 'i' divides 'n' perfectly (i is a divisor)

            cout << i << " ";  // Print the divisor i

            /*
            Example for n = 36:
            ----------------------
            i = 1 → 36 % 1 == 0 → print 1
                → 36 / 1 = 36 → print 36
            i = 2 → 36 % 2 == 0 → print 2
                → 36 / 2 = 18 → print 18
            i = 3 → 36 % 3 == 0 → print 3
                → 36 / 3 = 12 → print 12
            i = 4 → 36 % 4 == 0 → print 4
                → 36 / 4 = 9 → print 9
            i = 5 → 36 % 5 != 0 → skip
            i = 6 → 36 % 6 == 0 → print 6
                → 36 / 6 = 6 → this is a duplicate → only print once
            */

            if (i != n / i) {
                // Avoid printing duplicate when i == n/i (for perfect square)
                cout << n / i << " ";
            }
        }
    }

    return 0;
}
