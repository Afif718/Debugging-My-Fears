#include<bits/stdc++.h>
using namespace std;

// -----------------------------
// Custom Stack Implementation
// -----------------------------

class myStack {
public:
    vector<int> v;  // underlying container (vector) to store stack elements

    // Add an element to the top of the stack
    void push(int val) {
        v.push_back(val); // O(1) average time
    }

    // Remove the top element from the stack
    void pop() {
        // Important: make sure the stack is not empty before calling in real-world usage
        v.pop_back(); // O(1) time
    }

    // Get the top element of the stack without removing it
    int top() {
        return v.back(); // O(1) time
    }

    // Get the number of elements in the stack
    int size() {
        return v.size(); // O(1)
    }

    // Check whether the stack is empty
    bool empty() {
        return v.empty(); // returns true if size == 0
    }
};

int main() {
    myStack st; // Create an instance of our stack

    int v_size;
    cin >> v_size; // Input number of elements to be pushed into the stack

    // Pushing elements to the stack in the order they are received
    for (int i = 0; i < v_size; i++) {
        int val;
        cin >> val;
        st.push(val); // Last value pushed will be on top
    }

    /*
        NOTE:
        Stacks follow LIFO (Last In First Out).
        So if input was: 10 20 30
        Then stack looks like: [10, 20, 30]
        '30' is at the top, and it will be the first to come out.
    */

    /*
        Why do we print the stack this way?
        -----------------------------------
        Unlike arrays or vectors, stacks do NOT support indexed access like st[0], st[1], etc.
        So, we can only access the top of the stack.

        To print all elements:
        - We repeatedly access the top element (using top())
        - Then remove that element (using pop())
        - This continues until the stack becomes empty

        This is the only way to traverse/print all elements from a stack
        because it's designed to restrict access to just the top.

        Downside:
        - This will DESTROY the stack (i.e., after printing, it becomes empty)
        - If you want to keep the stack intact, you'd need to use another temporary stack
    */

    while (!st.empty()) {
        cout << st.top() << " "; // Print the top element
        st.pop();                // Remove it
    }

    return 0;
}
