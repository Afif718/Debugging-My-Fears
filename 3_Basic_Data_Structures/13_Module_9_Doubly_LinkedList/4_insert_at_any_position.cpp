#include<bits/stdc++.h>
using namespace std;

//======================//
// Doubly Linked List   //
//======================//

// Node class definition
class Node {
public:
    int val;        // Data value stored in the node
    Node* next;     // Pointer to the next node
    Node* prev;     // Pointer to the previous node
    
    // Constructor: initializes the value and sets next and prev to NULL
    Node(int val) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

//==============================//
// Insert at Any Middle Position
//==============================//
/*
Inserts a node at a specific position *between* head and tail.
Note: This function does not handle:
  - insertion at index 0 (head)
  - insertion at the end (tail)
*/
void insert_at_any_position(Node* &head, Node* &tail, int index, int val){

    // Step 1: Create the new node
    Node* newnode = new Node(val);

    // Step 2: If the list is empty, initialize head and tail
    if(head == NULL){
        head = newnode;
        tail = newnode;
        return;    
    }

    // Step 3: Traverse to the (index-1)th node
    Node* temp = head;
    for(int i = 0; i < index - 1; i++){
        temp = temp->next;
    }

    /*
    Let's say we're inserting 555 at index 1 into:
    head → [10] <-> [20] <-> [30] ← tail

    After insertion:
    head → [10] <-> [555] <-> [20] <-> [30] ← tail

    Connection steps:
      newnode->next = temp->next;          // 555 → 20
      temp->next->prev = newnode;          // 20 ← 555
      temp->next = newnode;                // 10 → 555
      newnode->prev = temp;                // 555 ← 10
    */

    newnode->next = temp->next;
    temp->next->prev = newnode;

    temp->next = newnode;
    newnode->prev = temp;
}


//====================================//
// Print the list from head to tail
//====================================//
void print_forward(Node* head) {
    Node* temp = head;

    cout << "Forward Traversal: ";
    while(temp != NULL) {
        cout << temp->val << " ";  // print value of each node
        temp = temp->next;         // move to next node
    }
    cout << endl;
}


//==============//
// Main Function
//==============//
int main() {

    // Create 3 nodes with values: 10 → 20 → 30
    Node* head = new Node(10);     
    Node* a = new Node(20);        
    Node* tail = new Node(30);     

    // Establish connections between the nodes
    head->next = a;        // head → a
    a->prev = head;        // a ← head

    a->next = tail;        // a → tail
    tail->prev = a;        // tail ← a

    /*
    Initial structure:
      [10] <-> [20] <-> [30]
       ↑                  ↑
      head               tail
    */

    // Insert new nodes at specific positions between existing nodes
    insert_at_any_position(head, tail, 1, 333);  // Between 10 and 20
    insert_at_any_position(head, tail, 2, 444);  // Between 333 and 20
    insert_at_any_position(head, tail, 3, 555);  // Between 444 and 20

    /*
    After insertions:
      [10] <-> [333] <-> [444] <-> [555] <-> [20] <-> [30]
       ↑                                                ↑
      head                                             tail
    */

    // Print the updated list
    print_forward(head);  // Expected Output: 10 333 444 555 20 30

    return 0;
}
