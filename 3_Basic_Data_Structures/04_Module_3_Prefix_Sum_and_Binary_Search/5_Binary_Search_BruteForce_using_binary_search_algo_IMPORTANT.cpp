#include<bits/stdc++.h> // Includes all standard libraries
using namespace std;

int main(){
    int n, q;
    cin >> n >> q; // ⏱️ O(1) — Reading size of array and number of queries

    vector<int> v(n); // ⏱️ O(1) — Declaring vector of size n

    // Input the array elements
    for(int i = 0; i < n; i++){
        cin >> v[i]; // ⏱️ O(n) — Reading n elements
    }

    // ⚠️ Binary Search requires a sorted array!
    // So, we sort it before searching.
    sort(v.begin(), v.end()); // ⏱️ O(n log n) — Sorting the array

    // Process q queries
    while(q--){ // ⏱️ Runs q times → O(q)
        int search_num;
        cin >> search_num; // ⏱️ O(1) — Input for each query

        bool isFound = false; // To track if number was found

        int l = 0;       // Left boundary
        int r = n - 1;   // Right boundary

        // Binary Search Loop
        while(l <= r){ // ⏱️ O(log n) — Halving the range each time
            int mid = (l + r) / 2; // ⏱️ O(1) — Calculating mid

            if(v[mid] == search_num){
                // ✅ Match found
                isFound = true;
                break; // ⏱️ Best Case: O(1)
            } 
            else if(v[mid] > search_num){
                // 🔁 Search left half
                r = mid - 1;
            } 
            else{
                // 🔁 Search right half
                l = mid + 1;
            }
        }

        // Output result
        if(isFound){
            cout << "found" << endl; // ⏱️ O(1)
        } else {
            cout << "not found" << endl; // ⏱️ O(1)
        }
    }

    return 0;
}

// problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Z

/*
------------------------------------------------------------
📌 Time Complexity Breakdown:
------------------------------------------------------------
➡️ Input Reading:       O(n)
➡️ Sorting (once):      O(n log n)
➡️ q Queries × O(log n) = O(q log n)
➡️ Output per query:    O(1)

✅ Total Time Complexity:
➡️ O(n log n + q log n)

------------------------------------------------------------
📌 When to Use What:
------------------------------------------------------------

🔸 If your array is:
   - ✅ Already Sorted:
     → Use **Binary Search** → Efficient: O(log n) per query

   - ❌ Unsorted:
     → Use **Linear Search** → Slower: O(n) per query
     → OR sort once and then use Binary Search if there are many queries

📌 Tip:
For many queries (`q` is large), sorting once and using binary search
is far more efficient than linear search every time.

------------------------------------------------------------
📌 Example:
Input:
6 3
10 4 2 8 6 1
6
5
1

→ After sorting: [1, 2, 4, 6, 8, 10]

Output:
found
not found
found
*/
