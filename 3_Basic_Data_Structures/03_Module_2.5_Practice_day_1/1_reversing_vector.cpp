#include<bits/stdc++.h>                  // O(1) – header inclusion (standard library)
using namespace std;

int main(){
    int vector_size;
    cin >> vector_size;                // O(1)

    vector<int> v(vector_size);        // O(n) – allocate space for n integers

    for(int i=0; i<vector_size; i++){
        cin >> v[i];                   // O(n) – read n elements
    }

    //reverse the vector
    reverse(v.begin(), v.end());       // O(n) – standard reverse swaps half the elements

    for(int x : v){
        cout << x << " ";             // O(n) – print n elements
    }
    return 0;
}

// Time Complexity: O(n)
// problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/F
