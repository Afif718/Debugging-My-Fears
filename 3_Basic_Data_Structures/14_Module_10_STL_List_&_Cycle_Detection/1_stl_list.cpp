#include<bits/stdc++.h>
using namespace std;

/*
==============================================
🔰 STL list - Overview
==============================================
- `list` is a **doubly linked list** implementation in the C++ Standard Template Library (STL).
- Allows efficient insertion and deletion from **both ends and middle** (unlike vector).
- Supports bidirectional iteration (not random access like vector/array).
- Can store **duplicate values** and supports all fundamental operations.

📌 Syntax: list<datatype> name;

✅ Common operations:
    - push_back(val)       → Insert at end
    - push_front(val)      → Insert at front
    - pop_back()           → Remove from end
    - pop_front()          → Remove from front
    - insert(it, val)      → Insert before iterator
    - erase(it)            → Erase element at iterator
    - size(), empty(), clear(), reverse(), sort(), etc.
*/

int main() {
    //============================================//
    // 🟢 Various Ways to Declare and Initialize STL list
    //============================================//

    // 1. Declare an empty list
    // list<int> l;

    // 2. Declare a list with 10 elements, all initialized to 5
    // list<int> l(10, 5);  // [5, 5, 5, 5, ..., 5] 10 times

    // 3. Initialize list with predefined values
    // list<int> l = {10, 20, 30, 40, 50};

    // 4. Copying a list
    // list<int> l2(l);  // l2 is a copy of l

    // 5. Copy from array
    // int arr[5] = {1, 2, 3, 4, 5};
    // list<int> l2(arr, arr + 5);  // Range constructor: [start, end)

    // 6. Copy from vector
    vector<int> v = {1, 2, 3, 4, 5};
    list<int> l2(v.begin(), v.end());  // Copies all elements from vector v into list l2

    //============================================//
    // 🟡 Accessing Elements and Size
    //============================================//

    cout << "Size of the list: " << l2.size() << endl;  // Print size

    // You can't use indexing like l2[0] because list doesn't support random access.

    //============================================//
    // 🔵 Traversing a list using range-based for loop
    //============================================//
    for (int val : l2) {
        cout << val << " ";
    }
    cout << endl;

    //============================================//
    // Alternative traversal using iterators
    //============================================//
    // for (auto it = l2.begin(); it != l2.end(); it++) {
    //     cout << *it << " ";
    // }

    return 0;
}
