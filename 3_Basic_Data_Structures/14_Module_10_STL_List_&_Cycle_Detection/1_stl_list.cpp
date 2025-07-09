#include<bits/stdc++.h>
using namespace std;

/*
==============================
💡 What is STL list?
==============================
- STL `list` is a **doubly linked list** implementation in C++ Standard Template Library.
- It allows efficient insertion and deletion from both ends (front and back) and at any position using iterators.
- STL `list` is **not** a dynamic array like `vector`.

Syntax:
    list<datatype> list_name;

Common use-cases:
✔ Fast insertion/deletion at any point
✔ Maintaining ordered sequences with frequent modifications
✘ Random access is not supported (unlike vector)

Key methods:
- `size()`, `empty()`, `clear()`, `resize()`
- `push_back()`, `push_front()`, `pop_back()`, `pop_front()`
- `insert()`, `erase()`
- `begin()`, `end()`, `rbegin()`, `rend()`

*/

int main(){

    //=============================================//
    // 👇 Declaring & Initializing STL Lists
    //=============================================//

    // list<int> l; // Empty list

    // list<int> l(10, 5); // List with 10 elements, all initialized to 5

    // list<int> l = {10, 20, 30, 40, 50}; // Initializer list
    // list<int> l2(l); // Copying list 'l' into 'l2'

    //=============================//
    // Copying array into list
    //=============================//
    // int arr[5] = {1, 2, 3, 4, 5};
    // list<int> l2(arr, arr+5); // Copies arr[0] to arr[4] into list

    //=============================//
    // Copying vector into list
    //=============================//
    vector<int> v = {1, 2, 3, 4, 5};
    list<int> l2(v.begin(), v.end());  // Copy all elements of vector v into list l2

    //=============================//
    // 📌 Accessing elements
    //=============================//
    cout << "Size of the list: " << l2.size() << endl; // Returns number of elements in list

    // Method 1: Using iterator (commented for now)
    // for(auto it = l2.begin(); it != l2.end(); it++){
    //     cout << *it << " ";
    // }

    // Method 2: Range-based for loop (cleaner)
    cout << "List elements: ";
    for(int val : l2){
        cout << val << " ";
    }
    cout << endl;

    //=============================//
    // 🧹 Resizing the list
    //=============================//

    // l2.resize(8); // Expands list to size 8; new values = 0
    l2.resize(8, 100); // Expands list to size 8; new values = 100

    cout << "After resizing: ";
    for (int val : l2) {
        cout << val << " ";
    }
    cout << endl;

    //=============================//
    // ❓ Check if list is empty
    //=============================//
    if(l2.empty()){
        cout << "EMPTY LIST!" << endl;
    } else{
        cout << "NOT EMPTY!" << endl;
    }

    //=============================//
    // 🧼 Clear the entire list
    //=============================//
    // l2.clear(); // Uncomment to clear all elements

    return 0;
}
