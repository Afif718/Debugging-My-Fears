#include<bits/stdc++.h>
using namespace std;

// ---------------------------------------
// Node class for Doubly Linked List
// ---------------------------------------
class Node {
public:
    int val;        // Value/data stored in the node
    Node* next;     // Pointer to the next node
    Node* prev;     // Pointer to the previous node

    // Constructor to initialize a new node with a value
    Node(int val) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

// ---------------------------------------
// Custom Stack Class Using Doubly Linked List
// ---------------------------------------
class myStack {

public:
    Node* head = NULL;       // Pointer to the first node (not needed for stack logic, but useful for full list management)
    Node* tail = NULL;       // Pointer to the last node — this represents the top of the stack
    int size_list = 0;       // Track the current size of the stack

    // ---------------------------
    // Push Operation (Insert at Tail)
    // ---------------------------
    void push(int val) { // O(1) 
        size_list++; // Increase stack size counter

        Node* newnode = new Node(val); // Create a new node with the given value

        if (head == NULL) {
            // Stack is empty, so new node is both head and tail
            head = newnode;
            tail = newnode;
            return;
        }

        // Attach new node at the end of the list (tail)
        tail->next = newnode;
        newnode->prev = tail;

        tail = newnode; // Move tail pointer to the new last node
    }

    // ---------------------------
    // Pop Operation (Remove from Tail)
    // ---------------------------
    void pop() { // O(1) 
        size_list--; // Decrease stack size counter

        Node* delnode = tail;        // Store current top node to delete
        tail = tail->prev;           // Move tail pointer back

        delete delnode;              // Free memory of removed node

        if (tail == NULL) {
            // Stack is now empty after pop
            head = NULL;
            return;
        }

        tail->next = NULL;           // Remove dangling pointer
    }

    // ---------------------------
    // Top Operation
    // ---------------------------
    int top() { 
        return tail->val; // O(1) — Return value of the last inserted node (top of stack)
    }

    // ---------------------------
    // Size Operation
    // ---------------------------
    int size() {
        return size_list; // O(1) — return number of elements
    }

    // ---------------------------
    // Empty Check
    // ---------------------------
    bool empty() { // O(1) 
        // Return true if head is NULL (i.e., no elements in the list)
        return head == NULL;
    }
};

// ---------------------------------------
// Driver Code
// ---------------------------------------
int main() {
    myStack st;  // Create an instance of our custom stack

    int st_size;
    cin >> st_size;  // Input number of elements to be pushed into the stack

    // Push input values into the stack
    for (int i = 0; i < st_size; i++) {
        int val;
        cin >> val;
        st.push(val); // Each value is pushed onto the stack
    }

    /*
        Why we print this way:
        ----------------------
        Stack is LIFO (Last In, First Out) — we can only access the "top".
        So to print all values:
        - We repeatedly get the top element using `top()`
        - Then remove it using `pop()`
        - Continue until the stack is empty

        This printing method destroys the stack, but it's the standard way to traverse it.
    */

    while (!st.empty()) {
        cout << st.top() << " ";  // Print the top value
        st.pop();                 // Remove the top value
    }

    return 0;
}
