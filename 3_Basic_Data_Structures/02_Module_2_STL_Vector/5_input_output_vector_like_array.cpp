#include <bits/stdc++.h>
using namespace std;

int main() {
    int size;
    cin >> size; // Input the number of elements for the vector

    // Initialize a vector of integers with 'size' number of elements (default-initialized to 0)
    vector<int> v(size);

    // Take input for each element in the vector using index-based assignment
    for (int i = 0; i < size; i++) {
        cin >> v[i]; // Assign input directly to each index
    }

    // Output the elements of the vector
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " "; // Print each element with a space
    }

    return 0;
}
