#include<bits/stdc++.h>
using namespace std;

// Definition of a singly linked list node
class Node {
public:
    int val;        // value of the node
    Node* next;     // pointer to the next node

    Node(int val) {
        this->val = val;
        this->next = NULL; // initially, node points to nothing
    }
};

// Insert a node at the end of the list
void insert_at_tail(Node*& head, Node*& tail, int val) {
    Node* newnode = new Node(val); // create a new node

    if (head == NULL) {
        // If list is empty, new node becomes both head and tail
        head = newnode;
        tail = newnode;
        return;
    }

    // Otherwise, attach newnode to the end and update tail
    tail->next = newnode;
    tail = newnode;
}

/*
====================================
Reverse a singly linked list (recursive)
====================================
Logic: Recursively go to the end, then flip pointers while coming back.
*/
void reverse_linkedlist(Node*& head, Node*& tail, Node* temp) {
    if (temp->next == NULL) {
        // Base case: last node becomes new head
        head = temp;
        return;
    }

    // Recursive call to reach last node
    reverse_linkedlist(head, tail, temp->next);

    /*
    Visualization:
    Suppose list = 1 → 2 → 3 → 4 → 5

    On call stack:
    reverse(..., 1)
        reverse(..., 2)
            reverse(..., 3)
                reverse(..., 4)
                    reverse(..., 5) → base case (head = 5)

    Now stack starts unwinding:
    At temp = 4:
        temp->next = 5
        temp->next->next = temp → 5->next = 4
        temp->next = NULL       → breaks 4->5 link
        tail = temp             → update tail to 4

    So 5 → 4
       4 → NULL

    This process continues to build:
    5 → 4 → 3 → 2 → 1 → NULL
    */

    temp->next->next = temp;  // Make next node point back to current
    temp->next = NULL;        // Break original forward link
    tail = temp;              // Update tail
}

// Print the entire linked list
void print_node(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
}

// Print list in reverse using recursion (no actual reversal)
void print_reverse_node(Node* head) {
    if (head == NULL) return;
    print_reverse_node(head->next);
    cout << head->val << " ";
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    int val;
    while (true) {
        cin >> val;
        if (val == -1) break;
        insert_at_tail(head, tail, val);
    }

    // Reverse the list recursively
    reverse_linkedlist(head, tail, head);

    // Print reversed list
    print_node(head);    
    cout << endl;

    // Print new head and tail
    cout << "Head: " << head->val << endl;
    cout << "Tail: " << tail->val << endl;

    return 0;
}
