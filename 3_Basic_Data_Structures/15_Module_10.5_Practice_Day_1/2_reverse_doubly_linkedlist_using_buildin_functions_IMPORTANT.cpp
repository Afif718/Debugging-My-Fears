#include <bits/stdc++.h>
using namespace std;

int main() {
    // Using STL list (doubly linked list)
    list<int> l;

    // Input values until -1 is encountered
    int val;
    while (true) {
        cin >> val;
        if (val == -1) {
            break;  // Stop input on -1
        }
        l.push_back(val);  // Add elements at the end
    }

    // Reverse the entire list
    l.reverse();

    // Print the reversed list
    for (int val : l) {
        cout << val << " ";
    }
    cout << endl;

    // Display the head (first element) after reversal
    cout << "After reversing head --> " << l.front() << endl;

    // ❗ Fix: *l.end() is invalid — l.end() returns an iterator to one past the last element.
    // So we need to get the last element correctly using prev(l.end())
    cout << "After reversing tail --> " << *prev(l.end()) << endl;

    return 0;
}

/*
📝 Problem link:
https://docs.google.com/document/d/13vRt1XJ7C_rOw-DXi2-ayTxAPM6zMM67/edit?tab=t.0

📌 Notes:
- `list<int>` is a doubly linked list in STL.
- `reverse()` reverses the order of elements in the list.
- `front()` returns the first element (head).
- `prev(l.end())` gives a valid iterator to the last element (tail).
- Avoid using `*l.end()` directly — it's undefined behavior!
*/
