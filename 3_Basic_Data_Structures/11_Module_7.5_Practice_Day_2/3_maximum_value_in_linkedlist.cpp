#include<bits/stdc++.h>
using namespace std;

// Definition of a Node in a singly linked list
class Node{
public:
    int val;        // Stores the value of the node
    Node* next;     // Pointer to the next node

    // Constructor to initialize node with a value and set next to NULL
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

// Function to insert a new node at the end (tail) of the linked list
void insert_at_tail(Node* &head, Node* &tail, int val){
    // Step 1: Create a new node with the given value
    Node* newnode = new Node(val);

    // Step 2: If list is empty, new node becomes both head and tail
    if(head == NULL){
        head = newnode;
        tail = newnode;
        return;
    }

    // Step 3: If list is not empty, attach new node to tail and update tail
    tail->next = newnode;
    tail = newnode;
}

// Function to find and return the maximum value in the linked list
int max_value_in_linkedlist(Node* head){
    // Step 1: Assume head value is the maximum initially
    int maxval = head->val;

    // Step 2: Traverse through each node
    for(Node* i = head; i != NULL; i = i->next){
        // Step 3: If current node's value is greater than maxval, update maxval
        if(i->val > maxval){
            maxval = i->val;
        }
    }

    // Step 4: Return the maximum value found
    return maxval;
}

int main(){
    Node* head = NULL;  // Initially the linked list is empty
    Node* tail = NULL;  // We also maintain a tail pointer for efficient insertion

    int val;
    // Input loop: takes values until -1 is entered
    while(true){
        cin >> val;

        if(val == -1){
            break; // Exit loop if input is -1
        }

        insert_at_tail(head, tail, val); // Insert value at the tail
    }

    // Print the maximum value in the linked list
    cout << max_value_in_linkedlist(head);
    
    return 0;
}
