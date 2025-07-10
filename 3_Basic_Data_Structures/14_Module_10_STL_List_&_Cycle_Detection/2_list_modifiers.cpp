#include <bits/stdc++.h>
using namespace std;

/*
===========================================================
🔰 STL list Recap + Key Concepts
===========================================================

✔️ list<T> is a **doubly linked list** implementation in C++ STL.
   - Dynamic memory allocation
   - No random access (no indexing like vector[i])
   - Efficient for frequent insertions/deletions at front/middle/back: O(1) or O(n)
   - Bidirectional iterator support

🔍 Difference: vector vs list
────────────────────────────────────────
| Feature            | vector          | list                     |
|--------------------|------------------|---------------------------|
| Type               | Dynamic array    | Doubly linked list       |
| Random access      | ✅ O(1)          | ❌ O(n)                   |
| Insert at middle   | ❌ O(n)          | ✅ O(n)                   |
| Insert at front    | ❌ O(n)          | ✅ O(1)                   |
| Memory layout      | Contiguous       | Non-contiguous (nodes)   |

*/

int main() {

    //===========================================================
    // 1️⃣ Assign/Copy list
    //===========================================================
    list<int> l = {1, 2, 3, 4, 5, 6};  // original list

    // Way 1: assign using iterator range
    // list<int> l2;
    // l2.assign(l.begin(), l.end());

    // Way 2: direct assignment (copy entire list)
    // list<int> l2 = l;

    //===========================================================
    // 2️⃣ Accessing elements (no direct indexing)
    //===========================================================
    // Since list doesn't support indexing, we use iterators.
    // next(l.begin(), 2) → moves iterator 2 steps from beginning.
    // Time complexity: O(n)
    cout << "Element at index 2 --> " << *next(l.begin(), 2) << endl;

    //===========================================================
    // 3️⃣ Inserting at specific position
    //===========================================================
    // l.insert(position_iterator, value)
    // We use next(l.begin(), 2) to point to index 2
    // Inserts 333 before index 2
    // Time complexity: O(n)
    cout << "After inserting 333 at index 2 --> ";
    l.insert(next(l.begin(), 2), 333);

    // Insert another list into list at a specific position
    // l.insert(position, l2.begin(), l2.end())
    // Inserting list l2 = {400, 500} at index 3
    list<int> l2 = {400, 500};
    l.insert(next(l.begin(), 3), l2.begin(), l2.end());

    // Print the updated list
    for (int val : l) {
        cout << val << " ";
    }
    cout << endl;

    //===========================================================
    // 4️⃣ Deleting from front and back
    //===========================================================
    // Removes element at front: O(1)
    l.pop_front();

    // Removes element at back: O(1)
    l.pop_back();

    //delete element from a certain index
    l.erase(next(l.begin(), 3)); // it will remove 500 from index 3

    // Print list after deletion
    for (int val : l) {
        cout << val << " ";
    }

    return 0;
}
