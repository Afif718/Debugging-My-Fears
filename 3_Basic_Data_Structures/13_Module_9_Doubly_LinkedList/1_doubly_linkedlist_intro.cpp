#include<bits/stdc++.h>
using namespace std;

/*
==============================
        DOUBLY LINKED LIST
==============================

Definition:
------------
A Doubly Linked List is a linear data structure where each node points to both 
its next and previous nodes. This allows traversal in both directions 
(forward and backward).

Structure:
------------
[NULL <- Node1 <-> Node2 <-> Node3 -> NULL]

Each Node has:
    - val: stores the data
    - next: pointer to the next node
    - prev: pointer to the previous node
*/

class Node {
public:
    int val;        // Data value
    Node* next;     // Pointer to next node
    Node* prev;     // Pointer to previous node
    
    // Constructor: initializes node with a value and sets next/prev as NULL
    Node(int val) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

// Function to print the list in forward direction (head to tail)
void print_forward(Node* head) {
    Node* temp = head;

    cout << "Forward Traversal: ";
    while(temp != NULL) {
        cout << temp->val << " ";  // Print current node's value
        temp = temp->next;         // Move to next node
    }
}


// Function to print the list in backward direction (tail to head)
void print_backward(Node* tail) {
    Node* temp = tail;

    cout << "Backward Traversal: ";
    while(temp != NULL) {
        cout << temp->val << " ";  // Print current node's value
        temp = temp->prev;         // Move to previous node
    }
}

int main() {
    /*
    Creating 3 nodes manually:
    
        head      a       tail
         |         |         |
        [10] <-> [20] <-> [30]

    Step-by-step:
    1. Create head node with value 10
    2. Create node `a` with value 20
    3. Create tail node with value 30
    4. Connect nodes using next and prev pointers
    */

    Node* head = new Node(10);     // First node
    Node* a = new Node(20);        // Second node
    Node* tail = new Node(30);     // Third node

    // Establish connections between nodes
    head->next = a;        // head -> a
    a->prev = head;        // a <- head

    a->next = tail;        // a -> tail
    tail->prev = a;        // tail <- a

    /*
    Visualization after linking:
    
    FORWARD:
    head -> a -> tail -> NULL
     10     20     30

    BACKWARD:
    tail -> a -> head -> NULL
     30     20     10
    */

    print_forward(head);      // Expected Output: 10 20 30
    cout << "\n";
    print_backward(tail);     // Expected Output: 30 20 10

    return 0;
}
