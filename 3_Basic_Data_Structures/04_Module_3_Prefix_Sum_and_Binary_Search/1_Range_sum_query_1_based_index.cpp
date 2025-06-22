#include<bits/stdc++.h> // O(1) – Including standard headers
using namespace std;

int main(){
    int v_size, q;
    cin >> v_size >> q; // O(1) – Input size and number of queries

    vector<int> v(v_size + 1); // O(N) – Initialize vector with size N+1

    // Input the array values
    for(int i = 1; i <= v_size; i++){ // O(N)
        cin >> v[i]; // O(1) each, total O(N)
    }

    // Process q queries
    while(q--){ // O(Q) – runs Q times
        int l, r;
        cin >> l >> r; // O(1)

        int sum = 0;

        // Sum from index l to r
        for(int i = l; i <= r; i++){ // O(N) in worst case per query
            sum += v[i]; // O(1)
        }

        cout << sum << endl; // O(1)
    }

    return 0;
}

/*
-----------------------------------------------
🔍 Line-by-Line Time Complexity:
-----------------------------------------------
Line  1:  O(1)         – Preprocessor include
Line  2:  O(1)         – Namespace declaration
Line  4:  O(1)         – Variable declaration
Line  5:  O(1)         – Input v_size and q
Line  7:  O(N)         – Vector initialization
Line  9-11: O(N)       – Input N elements
Line 13:  O(Q)         – Loop runs Q times
Line 14:  O(1)         – Input l and r
Line 16-18: O(N) max   – Inner loop (up to N per query)

-----------------------------------------------
✅ Total Time Complexity:
-----------------------------------------------
- Input processing: O(N)
- Query processing: O(Q * N) in worst case (when r - l ≈ N)

👉 Final: **O(Q * N)**
*/
