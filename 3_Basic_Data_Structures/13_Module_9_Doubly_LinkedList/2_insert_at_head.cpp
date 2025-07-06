#include<bits/stdc++.h>
using namespace std;

// Node structure for doubly linked list
class Node{
    public:
        int val;       // stores the value/data of the node
        Node* next;    // pointer to the next node
        Node* prev;    // pointer to the previous node

    // Constructor: initializes value and sets next & prev to NULL
     Node(int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

// Function to insert a node at the beginning (head) of the doubly linked list
void insert_at_head(Node* &head, Node* &tail, int val){
    // Step 1: Create a new node with the given value
    Node* newnode = new Node(val);

    // Step 2: Check if the list is empty
    if(head == NULL){
        head = newnode;   // set head and tail both to newnode
        tail = newnode;   // since it's the only node
        return;
    }

    // If list is not empty:
    // Step 3: Point newnode's next to current head
    newnode->next = head;

    // Step 4: Point current head's prev to newnode
    head->prev = newnode;

    // Step 5: Move head pointer to newnode
    head = newnode;
}

// Function to print the list from head to tail
void print_forward(Node* head){
    Node* temp = head;

    // Traverse until the end of the list
    while(temp != NULL){
        cout << temp->val << " ";  // print current node's value
        temp = temp->next;         // move to the next node
    }
}

// Function to print the list from tail to head (reverse direction)
void print_backward(Node* tail){
    Node* temp = tail;

    // Traverse until the beginning of the list
    while(temp != NULL){
        cout << temp->val << " ";  // print current node's value
        temp = temp->prev;         // move to the previous node
    }
}

int main(){
    
    Node* head = NULL; // initially, the list is empty
    Node* tail = NULL;

    // Node* head = new Node(10);
    // Node* a = new Node(20);
    // Node* tail = new Node(30);

    // //connection
    // head->next = a;
    // a->prev = head;

    // a->next = tail;
    // tail->prev = a;

    // Insert nodes at the beginning of the list
    // The list will be built like: 999 -> 899 -> 799 -> 699 -> 599
    insert_at_head(head, tail, 599);
    insert_at_head(head, tail, 699);
    insert_at_head(head, tail, 799);
    insert_at_head(head, tail, 899);
    insert_at_head(head, tail, 999);

    // Print the list from head to tail: should output 999 899 799 699 599
    print_forward(head);

    return 0;
}
