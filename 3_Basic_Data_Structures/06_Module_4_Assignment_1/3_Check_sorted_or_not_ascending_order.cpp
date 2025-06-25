#include <bits/stdc++.h>
using namespace std;

int main() {
    int query;
    cin >> query;  // Input number of test cases

    while (query--) {
        int size;
        cin >> size;  // Input size of the array

        vector<int> v(size);  // Declare a vector of given size

        // Taking array input
        for (int i = 0; i < size; i++) {
            cin >> v[i];
        }

        bool isSorted = true;  // Assume the array is sorted initially

        /*
            -----------------------------------------
            ✨ Adjacent Pair Concept to Check Sorting
            -----------------------------------------
            To check if an array is sorted in ascending order,
            we must verify that every element is less than or
            equal to the next one.

            That is:
                v[0] <= v[1]
                v[1] <= v[2]
                v[2] <= v[3]
                ...
                v[N-2] <= v[N-1]

            ❗ We DO NOT go up to i = size, because:
                - At i = size - 1, v[i + 1] becomes v[size] → OUT OF BOUNDS
                - Accessing out-of-bounds memory causes a SEGMENTATION FAULT

            ✅ Therefore, the loop runs till: i < size - 1

            📌 Example:
                Input: v = [2, 4, 6, 7, 10]
                Index:     0  1  2  3   4

                Comparisons:
                    v[0] vs v[1] → 2 <= 4 ✔
                    v[1] vs v[2] → 4 <= 6 ✔
                    v[2] vs v[3] → 6 <= 7 ✔
                    v[3] vs v[4] → 7 <= 10 ✔
                
                Stop here — no need to access v[5]
        */
        for (int i = 0; i < size - 1; i++) {
            if (v[i] > v[i + 1]) {
                // If any adjacent pair is in wrong order, it's not sorted
                isSorted = false;
                break;  // No need to check further
            }
        }

        // Output result for each test case
        cout << (isSorted ? "YES\n" : "NO\n");
    }

    return 0;
}
