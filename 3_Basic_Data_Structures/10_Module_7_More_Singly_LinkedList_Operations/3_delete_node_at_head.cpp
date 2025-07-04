#include <bits/stdc++.h>
using namespace std;

// Node class to define each element of the linked list
class Node {
public:
    int val;        // Value stored in the node
    Node* next;     // Pointer to the next node

    // Constructor to initialize node with value and set next to NULL
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

// Function to insert a new node at the end (tail) of the linked list
void insert_at_tail(Node* &head, Node* &tail, int val) {
    // Create a new node with the given value
    Node* newnode = new Node(val);

    // If the list is currently empty, set both head and tail to the new node
    if (head == NULL) {
        head = newnode;
        tail = newnode;
        return;
    }

    // Otherwise, add the new node at the end and update the tail pointer
    tail->next = newnode;
    tail = newnode;
}

// Function to delete the first node (head) from the linked list
void delete_node_at_head(Node* &head) {
    // Create a temporary pointer to hold the current head node
    Node* deletenode = head;

    // Move head to the next node
    head = head->next;

    // Free the memory of the original head node
    delete deletenode;
}

// Function to print all the nodes in the linked list
void print_node(Node* head) {
    // Use a temporary pointer to traverse from head to end
    Node* temp = head;

    // Traverse and print values until the end (NULL) is reached
    while (temp != NULL) {
        cout << temp->val << endl;
        temp = temp->next;
    }
}

int main() {
    Node* head = NULL; // Start with an empty linked list
    Node* tail = NULL; // Tail pointer for efficient insertion

    int val;
    // Keep taking input from the user until -1 is entered
    while (true) {
        cin >> val;

        if (val == -1) {
            break; // Stop input on -1
        }

        // Insert value at the end of the list
        insert_at_tail(head, tail, val);
    }

    // Delete the head (first) node from the list
    delete_node_at_head(head);

    // Print the linked list after deleting the head
    print_node(head);

    return 0;
}
