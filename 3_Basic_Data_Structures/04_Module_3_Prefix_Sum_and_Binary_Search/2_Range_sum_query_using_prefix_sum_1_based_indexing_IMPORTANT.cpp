#include<bits/stdc++.h> // O(1)
using namespace std;

int main(){
    int v_size, q;
    cin >> v_size >> q; // O(1)

    // 1-based indexing: we create a vector of size v_size + 1
    // v[0] will remain unused to simplify index handling
    vector<long long int> v(v_size + 1); // O(N) – initialization

    // Input the array values starting from index 1
    for(int i = 1; i <= v_size; i++){ // O(N)
        cin >> v[i]; // O(1) per input
    }

    // Create a prefix sum array
    // pre[i] will store the sum of elements from index 1 to i (inclusive)
    vector<long long int> pre(v_size + 1); // Again, 1-based indexing // O(N)

    pre[1] = v[1]; // O(1) – First element of prefix sum is same as the input array
    //prefix sum formula --> pre[i] = pre[i-1] + v[i] *******
    for(int i = 2; i <= v_size; i++){ // O(N)
        pre[i] = pre[i - 1] + v[i]; // O(1) per operation
        // This means pre[i] = v[1] + v[2] + ... + v[i]
    }

    /*
    // Optional: Print the prefix sum array to visualize how it's built
    for(int i = 1; i <= v_size; i++){
        cout << pre[i] << " ";
    }
    */

    // Process q queries
    while(q--){ // O(Q)
        int l, r;
        cin >> l >> r; // 1-based range [l, r] – O(1)

        long long int sum;

        if(l == 1){
            // If l == 1, sum is simply pre[r] (sum from 1 to r)
            //formula when l=1; --> pre[r] ************
            sum = pre[r]; // O(1)
        } else{
            // Otherwise, subtract prefix before l
            // pre[r] - pre[l-1] gives sum from l to r (formula********)
            sum = pre[r] - pre[l - 1]; // O(1)
        }

        cout << sum << endl; // O(1)
    }

    return 0; // O(1)
}

/*
----------------------------------------------------------
✅ Time Complexity Summary:
----------------------------------------------------------
- Input reading:         O(N)
- Prefix sum building:   O(N)
- Each query:            O(1)
- Total for Q queries:   O(Q)

👉 Final Total Time Complexity: **O(N + Q)**
*/
