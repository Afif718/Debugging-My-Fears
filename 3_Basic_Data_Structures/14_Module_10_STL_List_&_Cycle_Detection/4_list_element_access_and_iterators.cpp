#include <bits/stdc++.h>
using namespace std;

int main() {
    //===============================
    // 🔰 Creating a list with values
    //===============================
    list<int> l = {10, 20, 30, 40, 50};  // Doubly linked list with 5 elements

    /*
    Internal structure (Doubly Linked List):
        [10] <-> [20] <-> [30] <-> [40] <-> [50]
         ↑                                 ↑
       head                               tail
    */

    //============================================
    // 🟢 Accessing the Head (first element)
    //============================================
    cout << "Head in the list: " << l.front() << endl;       
    // Output: 10 (returns the first element in the list)
    
    cout << "Head in the list using iterator : " << *l.begin() << endl;
    // Same as front(); *l.begin() points to first element

    //============================================
    // 🔵 Accessing the Tail (last element)
    //============================================
    cout << "Tail in the list: " << l.back() << endl;
    // Output: 50 (returns the last element in the list)

    //============================================
    // 🔶 Accessing elements by index (like index 2)
    //============================================
    /*
    Since list has no random access, we use `next(iterator, index)`:
        next(l.begin(), 2) moves the iterator 2 steps forward.
        *next(...) dereferences that to get the value.

    For this list: [10, 20, 30, 40, 50]
                         ↑
                       index 2 → value = 30
    */
    cout << "Value in index 2 is --> " << *next(l.begin(), 2);  // Output: 30

    return 0;
}
