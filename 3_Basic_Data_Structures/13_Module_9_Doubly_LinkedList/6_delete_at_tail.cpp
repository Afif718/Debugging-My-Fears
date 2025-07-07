#include<bits/stdc++.h> 
using namespace std;

//=============================//
// Doubly Linked List: Node
//=============================//

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


//========================================================//
// Function to delete a node from the end (tail) of the list
//========================================================//
void delete_at_tail(Node* &head, Node* &tail){
    /*
    Visual: 
      Before deletion:
        head → [10] <-> [20] <-> [30] ← tail

      After 1st deletion:
        head → [10] <-> [20] ← tail

      After 2nd deletion:
        head → [10] ← tail

      After 3rd deletion:
        head = NULL
        tail = NULL
    */

    // Step 1: Store current tail in a temporary pointer
    Node* deletetail = tail;

    // Step 2: Move tail pointer to the previous node
    tail = tail->prev;

    // Step 3: Delete the old tail node to free memory
    delete deletetail;

    // Step 4: If list becomes empty after deletion
    if(tail == NULL){
        head = NULL;  // Set head to NULL as well
        return;
    }

    // Step 5: Set new tail's next pointer to NULL
    tail->next = NULL;
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
 
    // Creating 3 nodes manually:
    Node* head = new Node(10);     // First node
    Node* a = new Node(20);        // Second node
    Node* tail = new Node(30);     // Third node

    // Connect the nodes to form:
    // head → [10] <-> [20] <-> [30] ← tail
    head->next = a;        // head → a
    a->prev = head;        // a ← head

    a->next = tail;        // a → tail
    tail->prev = a;        // tail ← a

    // Delete last node (30)
    delete_at_tail(head, tail);  // List becomes: [10] <-> [20]

    // Print remaining list from head to tail
    print_forward(head);  // Expected Output: 10 20

    return 0;
}
