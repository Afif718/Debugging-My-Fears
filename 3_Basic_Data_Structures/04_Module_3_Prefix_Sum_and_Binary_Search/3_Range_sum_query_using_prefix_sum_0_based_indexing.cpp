#include<bits/stdc++.h> // Includes all standard C++ libraries
using namespace std;

int main(){
    int n, q;
    cin >> n >> q; // Input number of elements and number of queries

    // Declare the original array 'v' of size n (0-based indexing)
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i]; // Input each element of the array
    }

    // Create a prefix sum array of size n
    // pre[i] will store the sum of elements from index 0 to i (inclusive)
    vector<int> pre(n);
    pre[0] = v[0]; // First prefix sum is just the first element

    // Build the prefix sum array in O(n) time
    for(int i = 1; i < n; i++){
        pre[i] = pre[i - 1] + v[i];
        // For example: pre[2] = v[0] + v[1] + v[2]
    }

    // Answer each query in O(1) time using prefix sums
    while(q--){
        int l, r;
        cin >> l >> r; // Input query range [l, r], expected to be 0-based

        int sum;

        // If the query starts from index 0, just return pre[r]
        if(l == 0){
            sum = pre[r];
        } else {
            // Else, subtract the sum before l: pre[r] - pre[l-1]
            sum = pre[r] - pre[l - 1];
        }

        // Output the result for this query
        cout << sum << endl;
    }

    return 0;
}

/*
-----------------------------------------------------
📝 Notes:
- Indexing: This code uses 0-based indexing.
  That means array indices go from 0 to n-1.

- Prefix Sum Explanation:
  - pre[i] = v[0] + v[1] + ... + v[i]
  - So, sum of v[l] to v[r] is:
    → pre[r] if l == 0
    → pre[r] - pre[l-1] otherwise

- Input Example (0-based):
  Input:
    6 3
    6 4 2 7 2 7
    0 2
    2 5
    0 5
  Output:
    12
    18
    28

-----------------------------------------------------
⏱️ Time Complexity:
- Input of n elements:       O(n)
- Building prefix sum:       O(n)
- Answering q queries:       O(1) per query → O(q)
- ✅ Total Time Complexity:  O(n + q)
*/
