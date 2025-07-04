#include<bits/stdc++.h>
using namespace std;

// Define the Node class to create elements of the linked list
class Node {
public:
    int val;        // Data value of the node
    Node* next;     // Pointer to the next node in the list

    // Constructor to initialize a new node with value and NULL next
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

// Function to insert a new node at the end (tail) of the linked list
void insert_at_tail(Node* &head, Node* &tail, int val) {
    Node* newnode = new Node(val); // Create a new node with the input value

    // If the list is currently empty
    if(head == NULL) {
        head = newnode;  // Make newnode the head
        tail = newnode;  // Also mark newnode as tail
        return;
    }

    // Link the current tail to new node
    tail->next = newnode;

    // Update tail to point to the new last node
    tail = newnode;
}

// Function to sort the linked list using selection sort
// Instead of relinking nodes, we swap the values in-place
void sort_linkedlist(Node* &head) {
    // Outer loop: pick each node as the current 'i'
    for(Node* i = head; i->next != NULL; i = i->next) {
        // Inner loop: compare 'i' with each of the next nodes 'j'
        for(Node* j = i->next; j != NULL; j = j->next) {
            if(i->val > j->val) {
                // Swap values if i > j (ascending order)
                swap(i->val, j->val);
            }
        }
    }
}

// Function to print all the values in the linked list
void print_node(Node* head) {
    Node* temp = head; // Start from the head

    // Traverse until the end of the list
    while(temp != NULL) {
        cout << temp->val << endl; // Print the current node's value
        temp = temp->next;         // Move to the next node
    }
}

int main() {
    Node* head = NULL; // Initially list is empty
    Node* tail = NULL; // Tail pointer to keep insertion efficient

    int val;
    // Input loop: continues until -1 is entered
    while(true) {
        cin >> val;

        if(val == -1) {
            break; // Stop when sentinel value -1 is received
        }

        insert_at_tail(head, tail, val); // Insert the value at the tail
    }

    // Sort the linked list values in ascending order
    sort_linkedlist(head);

    // Print the sorted list
    print_node(head);

    return 0;
}
