#include<bits/stdc++.h>
using namespace std;

int main() {
    // Initialize vector v with values from 1 to 6
    vector<int> v = {1, 2, 3, 4, 5, 6};

    // Create an empty vector v2
    vector<int> v2;

    // Assign all elements of v to v2 (deep copy)
    v2 = v;

    /*
    // Print v2 using index-based loop
    for(int i = 0; i < v2.size(); i++) {
        cout << v2[i] << " ";
    }
    */

    /*
    // Remove the last element from v2
    v2.pop_back(); // v2 becomes: 1 2 3 4 5

    // Add a new element at the end of v2
    v2.push_back(1111); // v2 becomes: 1 2 3 4 5 1111
    */

    /*
    // Insert a single element at a specific position
    // Insert 100 at index 2 (third position)
    v2.insert(v2.begin() + 2, 100); // v2 becomes: 1 2 100 3 4 5 6
    */

    /*
    // Insert another vector into v2 at a specific index
    vector<int> v3 = {333, 444, 555};
    // Insert v3 at index 2 in v2
    v2.insert(v2.begin() + 2, v3.begin(), v3.end());
    // v2 becomes: 1 2 333 444 555 3 4 5 6
    */

    /*
    // Erase a single element from a specific index
    v2.erase(v2.begin() + 1); // Removes element at index 1
    // v2 becomes: 1 3 4 5 6
    */

    /*
    // Erase multiple elements (from index 1 to index 4, exclusive)
    v2.erase(v2.begin() + 1, v2.begin() + 5);
    // v2 becomes: 1 6
    */

    // Range-based for loop to print vector elements
    // Best when you don’t need index access
    for(int x : v2) {
        cout << x << " ";
    }

    return 0;
}
