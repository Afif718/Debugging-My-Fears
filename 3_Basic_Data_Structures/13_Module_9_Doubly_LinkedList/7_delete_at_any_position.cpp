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

//==================================================//
// Delete a node from any middle position (by index)
//==================================================//
void delete_at_any_position(Node* &head, Node* &tail, int index){
    /*
    Example:
        Index = 1
        List before: [10] <-> [20] <-> [30]
        We want to delete node at index 1 (value = 20)

        After deletion:
        List becomes: [10] <-> [30]
    */

    Node* temp = head;

    // Traverse to the (index - 1)th node (node before the one to delete)
    for(int i = 0; i < index - 1; i++){
        temp = temp->next;
    }

    // temp points to the node before the one to delete
    // temp->next is the node to be deleted
    Node* deletenode = temp->next;

    // Reconnect: bypass the deleted node in forward direction
    temp->next = temp->next->next;

    // Reconnect: point the new next node's prev back to temp
    // Without this, the backward link will still point to the deleted node
    if(temp->next != NULL){ // Safety check in case deleting tail
        temp->next->prev = temp;
    }

    // Finally, delete the unwanted node to free memory
    delete deletenode;

    /*
    Visualization:
      Before:
        temp → [10] <-> [20] <-> [30]
                        ↑ del

      After:
        temp → [10] <-> [30]
    */
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
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* tail = new Node(30);

    // Connect the nodes to form:
    // head → [10] <-> [20] <-> [30] ← tail
    head->next = a;
    a->prev = head;

    a->next = tail;
    tail->prev = a;

    // Delete node at index 1 (value = 20)
    delete_at_any_position(head, tail, 1);

    // Final list should be: [10] <-> [30]
    print_forward(head);  // Expected Output: 10 30

    return 0;
}
