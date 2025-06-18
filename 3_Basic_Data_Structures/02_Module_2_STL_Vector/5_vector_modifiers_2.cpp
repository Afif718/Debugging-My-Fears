#include <bits/stdc++.h>
using namespace std;

int main() {
    // Initialize a vector with some duplicate values (multiple 2s)
    vector<int> v = {1, 2, 3, 4, 2, 5, 6, 2};

    /*
    // Replace all occurrences of a specific value in the vector
    // Syntax: replace(start_iterator, end_iterator, old_value, new_value)
    replace(v.begin(), v.end(), 2, 100); 
    // This replaces every '2' in the vector with '100'

    //Replace only within a subrange (exclude last element)
    // replace(v.begin(), v.end() - 1, 2, 100);

    // Print the updated vector after replacement
    for(int x : v) {
        cout << x << " "; // Example output: 1 100 3 4 100 5 6 100
    }
    */

    /*
    // Find the first occurrence of a value in the vector
    // Syntax: find(start_iterator, end_iterator, target_value)
    // Returns an iterator pointing to the element if found, otherwise returns v.end()


    */

    auto it = find(v.begin(), v.end(), 5);

    // Check if the element was found
    if (it == v.end()) {
        cout << "Not found\n";
    } else {
        cout << "Found\n";

        //To get the index of the found element, subtract iterator positions
        int index = it - v.begin();
        cout << "Found at index: " << index << "\n";
    }

    //print the last element of the vector
    //cout << "Last element " << v[v.size() - 1] << endl;
    cout << "Last element " << v.back() << endl;
    //print the first element of the vector
    cout << "First element " << v[0] <<endl;
    //cout << "First element " << v.front() <<endl;

    //print the vector using iterator
    for(auto it=v.begin(); it<v.end(); it++){
        //dereferencing vector gives actual value
        cout << *it << " ";
    }

    return 0;
}
