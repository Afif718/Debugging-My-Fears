#include <bits/stdc++.h>
using namespace std;

// Node class definition for Doubly Linked List
class Node {
public:
    int val;         // Stores the data
    Node* next;      // Pointer to the next node
    Node* prev;      // Pointer to the previous node

    // Constructor
    Node(int val) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

//==============================
// 🟢 Insert a new node at the tail of the doubly linked list
//==============================
void insert_at_tail(Node* &head, Node* &tail, int val) {
    Node* newnode = new Node(val);  // Create a new node

    // If list is empty, both head and tail will point to the new node
    if (head == NULL) {
        head = newnode;
        tail = newnode;
        return;
    }

    // Link the current tail with newnode and update tail
    tail->next = newnode;       // Current tail points forward to new node
    newnode->prev = tail;       // New node points backward to old tail
    tail = newnode;             // Update tail to new node
}

//==============================
// 🔄 Reverse a Doubly Linked List by swapping values
//==============================
void reverse_doublylinkedlist(Node* head, Node* tail) {
    /*
    🧠 Logic:
    We use two pointers:
    - i: starts from head
    - j: starts from tail
    They move towards each other and swap values until they meet or cross.

    📌 Why not swap pointers? We're reversing by swapping values only.
    */
    for (Node* i = head, *j = tail; i != j && i->prev != j; i = i->next, j = j->prev) {
        swap(i->val, j->val);  // Swap values between i and j
    }
}

//==============================
// 📤 Print list in forward direction
//==============================
void print_forward(Node* head) {
    Node* temp = head;

    while (temp != NULL) {
        cout << temp->val << " ";   // Print current node value
        temp = temp->next;          // Move to the next node
    }
}

//==============================
// 🔰 Main Function
//==============================
int main() {
    Node* head = NULL;  // Start with empty list
    Node* tail = NULL;

    int val;

    // 📥 Take input until -1 is entered
    while (true) {
        cin >> val;
        if (val == -1) break;
        insert_at_tail(head, tail, val);  // Insert each value at the tail
    }

    // 🔄 Reverse the list
    reverse_doublylinkedlist(head, tail);

    // 🖨️ Print reversed list
    print_forward(head);
    cout << endl;

    // ✅ Show current head and tail values after reversal
    cout << "After reversing new Head --> " << head->val << endl;
    cout << "After reversing new Tail --> " << tail->val << endl;

    return 0;
}
