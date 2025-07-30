#include<bits/stdc++.h> // Includes all standard C++ libraries
using namespace std;

int main(){
    int v_size; // Declare an integer to store the size of the vector
    cin >> v_size; // Input the size of the vector (number of pairs)

    // Declare a vector of pairs (int, int) with size 'v_size'
    // Each element of the vector will store a pair of integers
    vector<pair<int, int>> v(v_size);

    // Loop to input values into each pair of the vector
    for(int i = 0; i < v_size; i++){
        cin >> v[i].first >> v[i].second;
        // Each pair has two values:
        // - first: stores the first integer
        // - second: stores the second integer
    }

    cout << endl; // Print a blank line for better readability

    // Loop to print all the pairs stored in the vector
    for(int i = 0; i < v_size; i++){
        cout << v[i].first << " " << v[i].second << endl;
    }

    return 0;
}
