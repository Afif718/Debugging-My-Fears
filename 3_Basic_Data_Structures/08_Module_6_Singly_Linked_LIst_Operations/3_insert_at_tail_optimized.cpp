#include <bits/stdc++.h>
using namespace std;

// ===========================
// Definition of Node Class
// ===========================
class Node {
public:
    int val;        // stores the data/value
    Node* next;     // pointer to the next node

    // Constructor to initialize node with value and set next to NULL
    Node(int val) {
        this->val = val;
        this->next = NULL;  // no connection yet
    }
};

// ==========================================================
// Function to Insert a Node at the Tail (End) of the List
// ==========================================================
void insert_at_tail(Node* &head, Node* &tail, int val) {
    // Step 1: Create a new node dynamically with the given value
    Node* newnode = new Node(val);

    // Step 2: Handle the case when the list is initially empty
    if (head == NULL) {
        // The new node becomes both head and tail
        head = newnode;
        tail = newnode;
        return; // Stop here; no further linking needed
    }

    // Step 3: Append the new node to the tail and update the tail
    tail->next = newnode;  // old tail now points to the new node
    tail = newnode;        // update the tail to the newly added node
}

// ======================================
// Function to Print the Entire Linked List
// ======================================
void print_node(Node* head) {
    Node* temp = head;

    // Traverse and print each node until we hit the end (NULL)
    while (temp != NULL) {
        cout << temp->val << endl;
        temp = temp->next; // move to next node
    }
}

// =======================
// Main Function
// =======================
int main() {

    // Step 1: Manually create initial linked list: [10] -> [20] -> [30]
    Node* head = new Node(10);   // head node
    Node* a = new Node(20);      // second node
    Node* tail = new Node(30);   // third node (acts as current tail)

    // Step 2: Connect nodes to form the initial list
    head->next = a;
    a->next = tail;

    /*
    Initial list:
    [10] -> [20] -> [30]
     ↑                 ↑
    head             tail
    */

    // Step 3: Append more nodes to the tail
    insert_at_tail(head, tail, 400);  // [10 -> 20 -> 30 -> 400]
    insert_at_tail(head, tail, 500);  // [10 -> 20 -> 30 -> 400 -> 500]
    insert_at_tail(head, tail, 600);  // [10 -> 20 -> 30 -> 400 -> 500 -> 600]

    /*
    Final structure:
    [10] -> [20] -> [30] -> [400] -> [500] -> [600]
     ↑                                          ↑
    head                                      tail
    */

    // Step 4: Print the entire list
    print_node(head);

    // Step 5: Print the value at the tail to confirm it points to the last node
    cout << "Tail now: " << tail->val << endl;

    return 0;
}
