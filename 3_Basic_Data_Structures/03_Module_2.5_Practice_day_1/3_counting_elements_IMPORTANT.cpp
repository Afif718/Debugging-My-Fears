#include<bits/stdc++.h> // Includes all standard libraries (O(1))
using namespace std;

int main(){
    int v_size;
    cin >> v_size; // Input the number of elements (O(1))

    vector<int> v(v_size); // Create a vector of size v_size (O(n))

    // Input elements into the vector
    for(int i=0; i<v_size; i++){ // Runs n times (O(n))
        cin >> v[i];             // Each input is O(1), total O(n)
    }

    int count = 0; // Counter to store the result (O(1))

    // Loop through each element in the vector
    for(int i = 0; i < v_size; i++){              // Outer loop runs n times (O(n))
        // For each element v[i], check if v[i] + 1 exists in the vector
        // std::find performs a linear search → O(n) for each call
        if((find(v.begin(), v.end(), v[i] + 1)) != v.end()){ // O(n) per iteration
            count++; // Increment count if next consecutive element found (O(1))
        }
    }

    // Output the final count
    cout << count << endl; // O(1)
    return 0;
}

//problem link: https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/D

/*
--------------------------------------------------------
🧠 Explanation:
For every element in the vector, this code checks whether the next consecutive number exists in the same vector using std::find.

🕒 Time Complexity Breakdown:
- Input: O(n)
- Loop with std::find: O(n) * O(n) = O(n²)
- Total Time Complexity: O(n²)

🎯 Final Verdict:
Time Complexity = O(n²)
--------------------------------------------------------
*/
