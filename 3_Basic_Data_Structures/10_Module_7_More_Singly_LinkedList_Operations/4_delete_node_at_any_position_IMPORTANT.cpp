#include <bits/stdc++.h>
using namespace std;

// Define a Node class for each element in the linked list
class Node {
public:
    int val;        // Stores the value
    Node* next;     // Points to the next node

    // Constructor to initialize node value and set next to NULL
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

// Function to insert a new node at the tail (end) of the linked list
void insert_at_tail(Node* &head, Node* &tail, int val) {
    // Create a new node with the given value
    Node* newnode = new Node(val);

    // If the list is empty, set both head and tail to the new node
    if (head == NULL) {
        head = newnode;
        tail = newnode;
        return;
    }

    // Otherwise, link new node after current tail and update tail pointer
    tail->next = newnode;
    tail = newnode;
}

// Function to delete a node at a specific position (0-based index)
void delete_node_at_any_position(Node* &head, int index) {
    Node* temp = head;

    // Traverse to the node just before the target index
    for (int i = 0; i < index - 1; i++) {
        temp = temp->next;
    }

    // temp is now the node before the one to delete
    Node* deletenode = temp->next;                 // node to be deleted
    temp->next = temp->next->next;                 // bypass the deleted node
    delete deletenode;                             // free memory

    /*
    Example:
    Suppose we have list: head → [10] → [20] → [30] → [40]
                             0     1      2      3

    If index = 2 (delete value 30):
    - temp points to index 1 (node with value 20)
    - deletenode = temp->next (node with value 30)
    - temp->next is updated to point to deletenode->next (node 40)
    - So now list becomes: head → [10] → [20] → [40]
    */
}

// Function to print all node values in the list
void print_node(Node* head) {
    Node* temp = head;

    // Traverse the list and print each node value
    while (temp != NULL) {
        cout << temp->val << endl;
        temp = temp->next;
    }
}

int main() {
    Node* head = NULL;  // Start with an empty list
    Node* tail = NULL;  // Track the tail for fast insertions

    int val;
    // Input loop: keep reading values until -1 is entered
    while (true) {
        cin >> val;
        if (val == -1) break;
        insert_at_tail(head, tail, val); // Insert at end of the list
    }

    // Perform deletions at given indexes (0-based)
    delete_node_at_any_position(head, 2); // delete 3rd node (index 2)
    delete_node_at_any_position(head, 1); // delete 2nd node (index 1)

    /*
    Example input: 10 20 30 40 50 -1
    Original List: [10] → [20] → [30] → [40] → [50]
    After deleting index 2 (30): [10] → [20] → [40] → [50]
    After deleting index 1 (20): [10] → [40] → [50]
    */

    // Print final list after deletions
    print_node(head);

    return 0;
}
