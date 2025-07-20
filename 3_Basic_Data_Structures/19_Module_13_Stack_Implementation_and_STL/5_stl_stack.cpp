#include<bits/stdc++.h>
using namespace std;

int main() {
    // ---------------------------------------------
    // STL Stack: container adapter for LIFO structure
    // ---------------------------------------------
    stack<int> st; 
    /*
        The STL stack is a container adapter that provides
        stack functionalities (LIFO: Last In First Out).

        By default, it uses `deque` as the underlying container,
        but you can use `vector` or `list` too.

        Available operations:
        ----------------------
        1. st.push(x)      → Insert element at the top          [O(1)]
        2. st.pop()        → Remove element from the top        [O(1)]
        3. st.top()        → Get the top element (read-only)    [O(1)]
        4. st.empty()      → Check if the stack is empty        [O(1)]
        5. st.size()       → Get current size                   [O(1)]
    */

    int st_size;
    cin >> st_size; // Input number of elements to be pushed

    // Push values into the stack
    for(int i = 0; i < st_size; i++) {
        int val;
        cin >> val;
        st.push(val); // LIFO: last pushed will be first out
    }

    /*
        At this point, if input was: 10 20 30
        Then stack looks like (top to bottom):

        +-----+
        | 30  | ← top
        +-----+
        | 20  |
        +-----+
        | 10  |
        +-----+
    */

    // Print and remove all elements from the stack
    while(!st.empty()) {
        cout << st.top() << " ";  // Access the top element
        st.pop();                 // Remove the top element
    }

    /*
        Output (for input: 10 20 30):
        30 20 10

        Reason: Stack is LIFO.
        We can only access the top.
        So to print everything, we:
            - Get top using `top()`
            - Then pop using `pop()`
            - Repeat until stack is empty

        This method **destroys** the stack as we remove all elements.
    */

    return 0;
}
