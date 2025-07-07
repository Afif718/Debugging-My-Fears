#include<bits/stdc++.h>
using namespace std;

// Node class for doubly linked list
class Node{
    public:
        int val;       // value stored in the node
        Node* next;    // pointer to the next node
        Node* prev;    // pointer to the previous node

     // Constructor to initialize a node with value, next and prev set to NULL
     Node(int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

// Function to insert a node at the end (tail) of the doubly linked list
void insert_at_tail(Node* &head, Node* &tail, int val){
    // Step 1: Create a new node with the given value
    Node* newnode = new Node(val);

    // Step 2: If list is empty, initialize both head and tail with newnode
    if(head == NULL){
        head = newnode;
        tail = newnode;
        return;
    }

    // If list is not empty:
    // Step 3: Set current tail's next to the new node
    tail->next = newnode;

    // Step 4: Set new node's prev to the current tail
    newnode->prev = tail;

    // Step 5: Update the tail to point to the new node
    tail = newnode;
}

// Function to print the list from head to tail (forward direction)
void print_forward(Node* head){
    Node* temp = head;

    // Traverse the list using next pointers
    while(temp != NULL){
        cout << temp->val << " ";  // print current node's value
        temp = temp->next;         // move to next node
    }
}

// Function to print the list from tail to head (backward direction)
void print_backward(Node* tail){
    Node* temp = tail;

    // Traverse the list using prev pointers
    while(temp != NULL){
        cout << temp->val << " ";  // print current node's value
        temp = temp->prev;         // move to previous node
    }
}

int main(){
    
    Node* head = NULL;  // Initially the list is empty
    Node* tail = NULL;

    int val;
    while(true){
        cin >> val;

        if(val == -1){
            break;
        }
        insert_at_tail(head, tail, val);
    }

    // Node* head = new Node(10);
    // Node* a = new Node(20);
    // Node* tail = new Node(30);

    // //connection
    // head->next = a;
    // a->prev = head;

    // a->next = tail;
    // tail->prev = a;

    // Insert nodes at the tail (end) of the list one by one
    // The list will be built like: 599 -> 699 -> 799 -> 899
    insert_at_tail(head, tail, 599);
    insert_at_tail(head, tail, 699);
    insert_at_tail(head, tail, 799);
    insert_at_tail(head, tail, 899);

    // Print the list in forward direction: expected output: 599 699 799 899
    print_forward(head);

    return 0;
}
