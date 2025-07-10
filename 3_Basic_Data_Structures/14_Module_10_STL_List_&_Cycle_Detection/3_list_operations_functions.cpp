#include <bits/stdc++.h>
using namespace std;

/*
============================================================
🔰 STL list Advanced Operations
============================================================

✔️ list<T> is a doubly linked list.
✔️ STL `list` provides built-in functions such as:
   - remove(val)     → removes all occurrences of a value
   - sort()          → sorts the list (only for list, not set/map)
   - unique()        → removes *consecutive* duplicate elements (requires sorted list)
   - reverse()       → reverses the list

📌 NOTE:
- `sort()` and `reverse()` are member functions of `list`.
- `sort()` is NOT the same as `std::sort()` — it works for list directly.
- `unique()` only removes consecutive duplicates, so `sort()` is often used before it.
*/

int main() {
    // Initial list with some duplicate values
    list<int> l = {10, 20, 30, 40, 50, 60, 10, 20, 10};

    /*
    🔹 Step 1: Remove all occurrences of a value
    ----------------------------------------------------
    Syntax: l.remove(val);
    Removes ALL elements in the list equal to val.

    Example:
        Original list: [10, 20, 10, 30]
        l.remove(10);
        Result:        [20, 30]
    
    Uncomment to test:
    // l.remove(10);
    */

    /*
    🔹 Step 2: Sort the list
    ----------------------------------------------------
    sort() sorts the list in ascending order by default.

    You can also pass a comparator like greater<int>() for descending order.

    ❌ std::sort(l.begin(), l.end()) won't work because list doesn't support random access.
    ✅ Use l.sort() instead.
    */
    l.sort();  // List becomes: [10, 10, 10, 20, 20, 30, 40, 50, 60]

    /*
    🔹 Step 3: Remove consecutive duplicates using unique()
    ----------------------------------------------------
    unique() removes only **adjacent duplicates**.

    Example:
        Input:  [10, 10, 20, 20, 30, 10]
        Output: [10, 20, 30, 10]

    So we **usually sort before using unique()** to remove all actual duplicates.
    */
    l.unique();  // List becomes: [10, 20, 30, 40, 50, 60]

    /*
    🔹 Step 4: Reverse the list
    ----------------------------------------------------
    reverse() reverses the entire list in-place.

    Before: [10, 20, 30, 40, 50, 60]
    After:  [60, 50, 40, 30, 20, 10]
    */
    l.reverse();

    /*
    🔹 Final Output
    ----------------------------------------------------
    Print the transformed list
    */
    for (int val : l) {
        cout << val << " ";
    }

    return 0;
}
