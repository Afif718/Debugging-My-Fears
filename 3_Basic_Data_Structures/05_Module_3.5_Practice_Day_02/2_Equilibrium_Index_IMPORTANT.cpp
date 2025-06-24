#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Step 1: Take input for the array
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];  // Read each element into the vector
    }

    // Step 2: Create a prefix sum array
    // prefix_sum[i] will hold the sum of elements from index 0 to i
    vector<int> prefix_sum(n);
    prefix_sum[0] = v[0];  // First element's prefix sum is itself

    for (int i = 1; i < n; i++) {
        // Current prefix sum = previous prefix sum + current value
        prefix_sum[i] = prefix_sum[i - 1] + v[i];
    }

    // (Optional) Print the prefix sum array to check correctness
    /*
    for (int i = 0; i < n; i++) {
        cout << "Prefix sum at index " << i << " = " << prefix_sum[i] << endl;
    }
    */

    // Step 3: Total sum of the array is the last value of prefix_sum
    int total_sum = prefix_sum[n - 1];

    // Step 4: Iterate through each index to check if it's an equilibrium index
    for (int i = 0; i < n; i++) {
        int left_sum;

        // If we're at index 0, there are no elements before it
        if (i == 0) {
            left_sum = 0;
        } else {
            // Otherwise, left_sum is the prefix sum up to index i-1
            left_sum = prefix_sum[i - 1];
        }

        // Right sum = total sum of array - sum up to current index
        // This gives the sum of elements after index i
        int right_sum = total_sum - prefix_sum[i];

        /*
        Example (Index 3):
        Array:   [-7, 1, 5, 2, -4, 3, 0]
        Prefix:  [-7, -6, -1, 1, -3, 0, 0]
        total_sum = 0

        At index 3:
        left_sum = prefix_sum[2] = -1
        right_sum = total_sum - prefix_sum[3] = 0 - 1 = -1
        Since left_sum == right_sum → 3 is equilibrium index
        */

        if (left_sum == right_sum) {
            cout << i << endl;  // Print the index if it's equilibrium
            return 0;           // Exit after finding the first one
        }
    }

    // If no equilibrium index is found, print -1
    cout << -1 << endl;
    return 0;
}


