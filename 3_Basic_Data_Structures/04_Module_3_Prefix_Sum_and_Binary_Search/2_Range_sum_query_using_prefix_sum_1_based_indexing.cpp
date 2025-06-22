#include<bits/stdc++.h>
using namespace std;

int main(){
    int v_size, q;
    cin >> v_size >> q;

    // 1-based indexing: we create a vector of size v_size + 1
    // v[0] will remain unused to simplify index handling
    vector<long long int> v(v_size + 1);

    // Input the array values starting from index 1
    for(int i = 1; i <= v_size; i++){
        cin >> v[i];
    }

    // Create a prefix sum array
    // pre[i] will store the sum of elements from index 1 to i (inclusive)
    vector<long long int> pre(v_size + 1); // Again, 1-based indexing

    pre[1] = v[1]; // First element of prefix sum is same as the input array
    for(int i = 2; i <= v_size; i++){
        pre[i] = pre[i - 1] + v[i];
        // This means pre[i] = v[1] + v[2] + ... + v[i]
    }

    /*
    // Optional: Print the prefix sum array to visualize how it's built
    for(int i = 1; i <= v_size; i++){
        cout << pre[i] << " ";
    }
    */

    // Process q queries
    while(q--){
        int l, r;
        cin >> l >> r; // 1-based range [l, r]

        long long int sum;

        if(l == 1){
            // If l == 1, sum is simply pre[r] (sum from 1 to r)
            sum = pre[r];
        } else{
            // Otherwise, subtract prefix before l
            // pre[r] - pre[l-1] gives sum from l to r
            sum = pre[r] - pre[l - 1];
        }

        cout << sum << endl; // Output the result for the current query
    }

    return 0;
}
