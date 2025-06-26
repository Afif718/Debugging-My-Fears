#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n; // Input must be odd and >= 1

    for (int i = 0; i < n; i++) {
        // Top part
        if (i < n / 2) {
            // Step 1: leading spaces
            for (int s = 0; s < i; s++) cout << " ";

            // Step 2: '\'
            cout << "\\";

            // Step 3: inner spaces
            int inner = n - 2 * i - 2;
            for (int s = 0; s < inner; s++) cout << " ";

            // Step 4: '/'
            cout << "/";
        }

        // Middle row
        else if (i == n / 2) {
            for (int s = 0; s < i; s++) cout << " ";
            cout << "X";
        }

        // Bottom part (mirror of top)
        else {
            int j = n - 1 - i; // Mirror row of top part

            for (int s = 0; s < j; s++) cout << " ";
            cout << "/";

            int inner = n - 2 * j - 2;
            for (int s = 0; s < inner; s++) cout << " ";

            cout << "\\";
        }

        cout << "\n"; // Move to next row
    }

    return 0;
}
