#include <bits/stdc++.h>
using namespace std;

int main() {
    int size1;
    cin >> size1;  // Input the size of the first vector

    vector<int> v1(size1);
    for (int i = 0; i < size1; i++) {
        cin >> v1[i];  // Input elements of the first vector
    }

    int size2;
    cin >> size2;  // Input the size of the second vector

    vector<int> v2(size2);
    for (int i = 0; i < size2; i++) {
        cin >> v2[i];  // Input elements of the second vector
    }

    int index;
    cin >> index;  // Index at which to insert the second vector into the first

    /*
        ----------------------------------------
        📌 Vector Insertion in C++
        ----------------------------------------
        Syntax:
            v1.insert(position, range_start, range_end);

        This inserts the elements from [v2.begin(), v2.end()) 
        **before** the position specified in v1.

        So:
            v1.insert(v1.begin() + index, v2.begin(), v2.end());

        👇 Example:
            v1 = [1, 2, 3, 4]
            v2 = [100, 200]
            index = 2

            Result after insert:
            v1 = [1, 2, 100, 200, 3, 4]

        ✅ Important Notes:
        - `v1.begin() + index` must be a valid position
          (0 ≤ index ≤ v1.size())
        - If `index == v1.size()`, the new elements are inserted at the end
        - If `index == 0`, the new elements are inserted at the beginning
        - If index is out of bounds, it leads to **undefined behavior**
    */
    v1.insert(v1.begin() + index, v2.begin(), v2.end());

    // Output the updated vector
    for (int x : v1) {
        cout << x << " ";
    }

    return 0;
}

//problem link: https://www.hackerrank.com/contests/assignment-01-a-basic-data-structure-a-batch-07/challenges/insert-the-vector/problem