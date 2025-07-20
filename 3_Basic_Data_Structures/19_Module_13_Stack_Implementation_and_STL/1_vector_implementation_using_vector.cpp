#include<bits/stdc++.h>
using namespace std;

// ---------------------------
// Custom Stack Implementation using vector
// ---------------------------

// A stack is a linear data structure that follows the Last In First Out (LIFO) principle.
// This means the last element added is the first one to be removed.
// Think of a stack like a pile of plates: you add to the top and remove from the top.

// Real-world use cases:
// 1. Function call management in programming (call stack)
// 2. Undo/Redo operations in editors
// 3. Syntax parsing in compilers
// 4. Expression evaluation (e.g., postfix to infix)
// 5. Navigation in browsers (Back/Forward history)

class myStack {

    public:
        vector<int> v;  // Using vector as the underlying container for dynamic resizing

    // Pushes an element to the top of the stack
    void push(int val){
        v.push_back(val); // O(1) average time
    }

    // Removes the top element from the stack
    void pop(){
        if (!v.empty()) {
            v.pop_back(); // O(1) time
        }
    }

    // Returns the top element of the stack
    int top(){
        return v.back(); // O(1) time. Assumes stack is not empty.
    }

    // Returns the current size of the stack
    int size(){
        return v.size(); // O(1)
    }

    // Returns true if stack is empty, false otherwise
    bool empty(){
        return v.empty(); // Clean way to check if vector is empty (O(1))
    }
};

int main() {

    myStack st;  // Creating an instance of our stack

    // Pushing elements to the stack (LIFO order: 10, 20, 30)
    st.push(10); // Stack: [10]
    st.push(20); // Stack: [10, 20]
    st.push(30); // Stack: [10, 20, 30]

    // Accessing the top element after each pop to demonstrate LIFO
    cout << "TOP: " << st.top() << endl; // Expected: 30
    st.pop();                            // Stack after pop: [10, 20]

    cout << "TOP: " << st.top() << endl; // Expected: 20
    st.pop();                            // Stack after pop: [10]

    cout << "TOP: " << st.top() << endl; // Expected: 10
    st.pop();                            // Stack after pop: []

    // Edge Case: Stack is now empty, so we must check before calling top()
    if (!st.empty()) {
        cout << "TOP: " << st.top() << endl;
    } else {
        cout << "Stack is empty!" << endl; // Safe check avoids undefined behavior
    }

    // Again checking before popping to avoid error
    if (!st.empty()) {
        st.pop();
    }

    return 0;
}
