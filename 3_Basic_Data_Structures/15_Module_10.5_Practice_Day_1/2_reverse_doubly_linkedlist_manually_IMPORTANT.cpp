#include <bits/stdc++.h>
using namespace std;

// Node class definition for doubly linked list
class Node {
public:
    int val;       // stores the value of the node
    Node* next;    // pointer to the next node
    Node* prev;    // pointer to the previous node

    // Constructor to initialize a new node
    Node(int val) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

// Function to insert a node at the end (tail) of the doubly linked list
void insert_at_tail(Node* &head, Node* &tail, int val) {
    Node* newnode = new Node(val);  // Step 1: Create a new node

    if (head == NULL) {
        // Step 2: If list is empty, head and tail point to the new node
        head = newnode;
        tail = newnode;
        return;
    }

    // Step 3: Connect current tail's next to new node
    tail->next = newnode;

    // Step 4: Connect new node's prev to current tail
    newnode->prev = tail;

    // Step 5: Update tail to the new node
    tail = newnode;
}

// Function to reverse the doubly linked list by swapping node values
void reverse_linkedlist(Node* head, Node* tail) {
    // Use two pointers: i starts from head, j starts from tail
    // Stop when they meet or cross
    for (Node *i = head, *j = tail; i != j && i->prev != j; i = i->next, j = j->prev) {
        swap(i->val, j->val);  // swap the values of i and j
    }
}

// Function to print the list from head to tail
void print_forward(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";  // print current node's value
        temp = temp->next;         // move to next node
    }
}

int main() {
    Node* head = NULL;  // Initially the list is empty
    Node* tail = NULL;

    // Input list values from user until -1 is entered
    int val;
    while (true) {
        cin >> val;
        if (val == -1) break;          // sentinel value to stop input
        insert_at_tail(head, tail, val); // insert value into the list
    }

    // Reverse the list using value swapping
    reverse_linkedlist(head, tail);

    // Print the reversed list
    print_forward(head);

    return 0;
}

/*
📝 Problem link:
https://docs.google.com/document/d/13vRt1XJ7C_rOw-DXi2-ayTxAPM6zMM67/edit?tab=t.0

📌 Key Notes:
- This solution swaps node values instead of rearranging pointers to reverse.
- Time Complexity: O(n/2) = O(n), where n = number of nodes.
- Suitable when actual node reordering isn't required.
*/
