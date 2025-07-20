#include<bits/stdc++.h>
using namespace std;

// --------------------------------------
// Custom Stack Implementation Using list
// --------------------------------------
// Unlike vector, list is a doubly linked list in C++ STL.
// We can efficiently add/remove elements from both ends.
// We're using push_back() and pop_back(), so time complexity remains O(1).

class myStack {

    public:
        list<int> l;  // underlying container — doubly linked list

    // Push a value onto the top of the stack
    void push(int val){
        l.push_back(val);  // Adds element to the back — O(1) time
    }

    // Pop/remove the top value from the stack
    void pop(){
        l.pop_back();      // Removes element from the back — O(1) time
    }

    // Get the current top value of the stack
    int top(){
        return l.back();   // Returns last element — O(1) time
    }

    // Return the size (number of elements) in the stack
    int size(){
        return l.size();   // O(1) time
    }

    // Check whether the stack is empty or not
    bool empty(){
        return l.empty();  // Returns true if size == 0 — O(1)
    }
};

int main() {

    myStack st;  // Creating an object of custom stack

    int v_size;
    cin >> v_size;  // Input: number of elements to push into the stack

    // Reading values and pushing them onto the stack
    for (int i = 0; i < v_size; i++) {
        int val;
        cin >> val;
        st.push(val);  // Stack builds up: first-in goes bottom, last-in goes top
    }

    // ------------------------------
    // Printing and Popping Stack
    // ------------------------------

    /*
        Why print using top() and pop()? 
        --------------------------------
        A stack is a restricted data structure. You can only:
        - See the top (last pushed) element
        - Remove the top element
        - Add to the top

        There's NO direct way to loop through all elements unless you pop each one.

        So, to print all elements:
        - We call top() to see the current top value
        - Then pop() to remove it
        - Continue until the stack becomes empty

        Note: This method **destroys** the stack (empties it).
        If you need to preserve the data, you must copy the stack first.
    */

    while (!st.empty()) {
        cout << st.top() << " ";  // Print current top element
        st.pop();                 // Remove the top element
    }

    return 0;
}
