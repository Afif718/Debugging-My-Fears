#include <bits/stdc++.h>
using namespace std;

int main() {
    int size;
    cin >> size; // Input the number of elements to be added to the vector

    vector<int> v; // Declare an empty vector of integers

    // Read 'size' number of integers from the user and store them in the vector
    for (int i = 0; i < size; i++) {
        int x;
        cin >> x;        // Take input for each element
        v.push_back(x);  // Append the element to the vector
    }

    // Print the elements of the vector
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " "; // Output each element followed by a space
    }

    return 0;
}
