#include<bits/stdc++.h> 
using namespace std;

//==========================================//
//        Doubly Linked List: Node Class    //
//==========================================//

class Node {
public:
    int val;        // Data value stored in the node
    Node* next;     // Pointer to the next node
    Node* prev;     // Pointer to the previous node
    
    // Constructor: initializes value and sets next & prev to NULL
    Node(int val) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

//====================================================//
// Function to delete a node from the beginning (head)
//====================================================//

void delete_from_head(Node* &head, Node* &tail){
    /*
    Deletion from head:
    --------------------
    Before:
      head → [10] <-> [20] <-> [30] ← tail

    After 1st deletion:
      head → [20] <-> [30] ← tail

    After 2nd deletion:
      head → [30] ← tail

    After 3rd deletion:
      head = NULL
      tail = NULL
    */

    // Step 1: Keep a pointer to the node to be deleted (current head)
    Node* deletenode = head;

    // Step 2: Move head to the next node
    head = head->next;

    // Step 3: Delete the old head node from memory
    delete deletenode;

    // Step 4: If head becomes NULL after deletion, list is now empty
    if(head == NULL){
        tail = NULL;  // So tail should also be NULL
        return;
    }

    // Step 5: Otherwise, set the new head's prev to NULL
    head->prev = NULL;
}


//==================================================//
// Function to print the list from head to tail
//==================================================//
void print_forward(Node* head) {
    Node* temp = head;

    cout << "Forward Traversal: ";
    while(temp != NULL) {
        cout << temp->val << " ";  // Print current node’s value
        temp = temp->next;         // Move to next node
    }
    cout << endl;
}


//==================================================//
// Function to print the list from tail to head
//==================================================//
void print_backward(Node* tail) {
    Node* temp = tail;

    cout << "Backward Traversal: ";
    while(temp != NULL) {
        cout << temp->val << " ";  // Print current node’s value
        temp = temp->prev;         // Move to previous node
    }
    cout << endl;
}


//====================//
// Main Driver Code
//====================//
int main() {
 
    // Creating 3 nodes manually
    Node* head = new Node(10);     // First node
    Node* a = new Node(20);        // Second node
    Node* tail = new Node(30);     // Third node

    // Establishing connections to form:
    // [10] <-> [20] <-> [30]
    head->next = a;        // head → a
    a->prev = head;        // a ← head

    a->next = tail;        // a → tail
    tail->prev = a;        // tail ← a

    // Initial state:
    // head → [10] <-> [20] <-> [30] ← tail

    // Perform deletions
    delete_from_head(head, tail);  // deletes 10
    delete_from_head(head, tail);  // deletes 20

    /*
    After deletions:
    ----------------
    Only node 30 remains:
    head → [30] ← tail
    */

    print_forward(head);  // Expected Output: 30

    return 0;
}
