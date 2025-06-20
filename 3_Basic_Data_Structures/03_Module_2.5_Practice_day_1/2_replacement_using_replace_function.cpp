#include<bits/stdc++.h>                  // O(1) – header inclusion
using namespace std;

int main(){
    int vector_size;                   
    cin >> vector_size;                // O(1)

    vector<int> v(vector_size);        // O(n) – vector initialization

    for(int i=0; i<vector_size; i++){  
        cin >> v[i];                   // O(n) – input n elements
    }

    for(int i=0; i<vector_size; i++){  // O(n) – loop runs n times
        if(v[i]>0){
            replace(v.begin(), v.end(), v[i], 1); // O(n) – scans entire vector
        } else if(v[i]<0){
            replace(v.begin(), v.end(), v[i], 2); // O(n) – scans entire vector
        }
    } // Total complexity of this loop = O(n) * O(n) = O(n²)

    for(int x:v){                      
        cout << x << " ";             // O(n) – output n elements
    }
    return 0;
}

// Time Complexity: O(n²) – due to nested effect of loop + replace
// problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/C
