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

    // If the list is currently empty, set both head and tail to this node
    if (head == NULL) {
        head = newnode;
        tail = newnode;
        return;
    }

    // Otherwise, add the new node at the end and update tail
    tail->next = newnode;
    tail = newnode;
}

/*
Visual Representation:

Input: 10 20 30 -1

Before deletion:
[10] → [20] → [30] → NULL
 ^head       ^tail

After deleting head (10):
[20] → [30] → NULL
 ^head       ^tail
*/

// Function to delete the first node (head) of the list
void delete_node_at_head(Node* &head) {
    // Store the current head in a temporary pointer
    Node* deletenode = head;

    // Move head to the next node (new head)
    head = head->next;

    // Delete the old head node to free memory
    delete deletenode;
}

// Function to print all nodes in the list
void print_node(Node* head) {
    Node* temp = head;

    // Traverse from head to NULL, printing each value
    while (temp != NULL) {
        cout << temp->val << endl;
        temp = temp->next;
    }
}

int main() {
    Node* head = NULL;  // Initially the list is empty
    Node* tail = NULL;  // Tail pointer for fast insertion at the end

    int val;
    // Keep reading integers until -1 is encountered
    while (true) {
        cin >> val;

        if (val == -1) {
            break; // Stop input on -1
        }

        // Insert each value at the tail of the list
        insert_at_tail(head, tail, val);
    }

    /*
    Example:
    Input: 5 10 15 -1
    List after insertion:
    [5] → [10] → [15] → NULL

    After delete_node_at_head():
    [10] → [15] → NULL
    */

    // Delete the first node (head)
    delete_node_at_head(head);

    // Print the updated list after deletion
    print_node(head);

    return 0;
}
