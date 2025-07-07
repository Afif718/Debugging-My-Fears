#include<bits/stdc++.h>
using namespace std;

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

void insert_at_any_position(Node* &head, Node* &tail, int index, int val){

    //insert at head doesnt work for inserting at head or tail
    // it works for other positions

    // step 1: Create a new node
    Node* newnode = new Node(val);

    if(head == NULL){
        head = newnode;
        tail = newnode;
        return;    
    }

    Node* temp = head;

    // Step using loop and before one index before where u want to insert the value
    for(int i=0; i<index - 1; i++){
        temp = temp->next;
    }

    newnode->next = temp->next;
    temp->next->prev = newnode;

    temp->next = newnode;
    newnode->prev = temp;
}


// Function to print the list in forward direction (head to tail)
void print_forward(Node* head) {
    Node* temp = head;

    cout << "Forward Traversal: ";
    while(temp != NULL) {
        cout << temp->val << " ";  // Print current node's value
        temp = temp->next;         // Move to next node
    }
}


int main() {

    Node* head = NULL;  // Initially the list is empty
    Node* tail = NULL;

    // Node* head = new Node(10);     // First node
    // Node* a = new Node(20);        // Second node
    // Node* tail = new Node(30);     // Third node

    // // Establish connections between nodes
    // head->next = a;        // head -> a
    // a->prev = head;        // a <- head

    // a->next = tail;        // a -> tail
    // tail->prev = a;        // tail <- a

    insert_at_any_position(head, tail, 0, 333);
    insert_at_any_position(head, tail, 0, 444);
    insert_at_any_position(head, tail, 0, 555);
    print_forward(head);      // Expected Output: 10 20 30

    return 0;
}
