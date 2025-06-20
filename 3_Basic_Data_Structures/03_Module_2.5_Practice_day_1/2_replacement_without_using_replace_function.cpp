#include<bits/stdc++.h>                  // O(1) – header inclusion; includes all standard libraries
using namespace std;

int main(){
    int vector_size;                   
    cin >> vector_size;                // O(1)

    vector<int> v(vector_size);        // O(n) – space allocated for n integers

    for(int i=0; i<vector_size; i++){  
        cin >> v[i];                   // O(n)
    }

    for(int i=0; i<vector_size; i++){  
        if(v[i]>0){                    // O(1)
            v[i] = 1;                  // O(1)
        } else if(v[i]<0){            // O(1)
            v[i] = 2;                  // O(1)
        }
    }

    for(int x:v){                      
        cout << x << " ";             // O(n)
    }
    return 0;
}

// Space Complexity: O(n) – for the vector of size 'n'
// problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/C
