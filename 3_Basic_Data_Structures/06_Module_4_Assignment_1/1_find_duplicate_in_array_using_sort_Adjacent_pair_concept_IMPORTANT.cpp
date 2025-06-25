#include <bits/stdc++.h>
using namespace std;

int main() {
    int size;
    cin >> size;  // 📥 Input: Number of elements → O(1)

    vector<int> v(size);  // 🧺 Create a vector of size `size` → O(1)

    // 📥 Input all elements into the vector → O(N)
    for (int i = 0; i < size; i++) {
        cin >> v[i];
    }

    /*
        --------------------------------------------
        🔁 Step 1: Sort the vector
        --------------------------------------------
        Why sort?
        - Sorting arranges duplicate elements next to each other.
        - Makes it easier to find duplicates with just one pass.

        Example:
            Input:        [3, 1, 2, 1, 4]
            After sort:   [1, 1, 2, 3, 4]
            Duplicates appear as adjacent elements: v[0] == v[1] → 1 == 1

        ⏱️ Time Complexity: O(N log N)
        - Much faster than nested loops (O(N²)) for large N.
    */
    sort(v.begin(), v.end());  // O(N log N)

    bool isDuplicateExist = false;

    /*
        --------------------------------------------
        🔁 Step 2: Check Adjacent Pairs
        --------------------------------------------
        - After sorting, we only need to check adjacent elements.
        - If any pair is equal, a duplicate exists.

        Why `i < size - 1`?
        - Because we compare `v[i]` with `v[i+1]`, and we don't want to go out of bounds.

        ⏱️ Time Complexity: O(N)
        - Single pass through the vector.
    */
    for (int i = 0; i < size - 1; i++) {
        if (v[i] == v[i + 1]) {
            isDuplicateExist = true;
            break;  // Stop early as soon as a duplicate is found → Best case: O(1)
        }
    }

    // 🧾 Output the result → O(1)
    cout << (isDuplicateExist ? "YES\n" : "NO\n");

    return 0;

    /*
        --------------------------------------------
        ✅ Why This is Better than Brute-Force
        --------------------------------------------

        Brute-force Approach (Nested Loops):
        for(i = 0 to N-1)
            for(j = i+1 to N)
                if(v[i] == v[j]) → O(N²)

        ❌ Bad for large input (up to 100000 elements) → 10^10 operations = TLE

        ✅ This Approach:
        - sort: O(N log N)
        - one pass: O(N)
        - total: O(N log N) ✔️
        - Easily handles N = 100000 within time limits
    */
}
