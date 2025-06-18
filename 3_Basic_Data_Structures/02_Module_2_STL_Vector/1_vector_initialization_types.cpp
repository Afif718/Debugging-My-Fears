#include<bits/stdc++.h>
using namespace std;

int main(){

    // Type 1: Default vector initialization
    // Creates an empty vector of integers
    // vector<int> v;
    // cout << v.size() << endl; // Output: 0

    // Type 2: Vector with fixed size
    // Initializes a vector of size 5 with default values (0 for int)
    // vector<int> v(5);
    // cout << v.size() << endl; // Output: 5

    // Type 3: Vector with size and specific initial value
    // Creates a vector of size 10, with all elements initialized to -1
    // vector<int> v(10, -1);
    // for(int i = 0; i < v.size(); i++) {
    //     cout << v[i] << " "; // Output: -1 -1 -1 -1 -1 -1 -1 -1 -1 -1
    // }

    // Type 4: Copy constructor (copy one vector to another)
    // Copies all elements from vector v to v2
    // vector<char> v(5, '#'); // v = ['#', '#', '#', '#', '#']
    // vector<char> v2(v);     // v2 is a copy of v
    // for(int i = 0; i < v2.size(); i++) {
    //     cout << v2[i] << " "; // Output: # # # # #
    // }

    // Type 5: Initialize vector from an array
    // Copies elements from array arr to vector v
    // int arr[5] = {1, 2, 3, 4, 5};
    // vector<int> v(arr, arr + 5); // arr+5 points to one past the last element
    // for(int i = 0; i < v.size(); i++) {
    //     cout << v[i] << " "; // Output: 1 2 3 4 5
    // }

    // Type 6: Initialize vector using initializer list (like an array)
    // Declares and initializes vector with elements directly
    vector<int> v = {1, 2, 3, 4};
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " "; // Output: 1 2 3 4
    }

    return 0;
}
