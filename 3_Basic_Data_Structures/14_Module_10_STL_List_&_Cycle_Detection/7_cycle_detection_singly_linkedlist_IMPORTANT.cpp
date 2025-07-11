#include <bits/stdc++.h>
using namespace std;

//==============================
// 👨‍💻 Node structure for singly linked list
//==============================
class Node {
public:
    int val;         // Value stored in the node
    Node* next;      // Pointer to the next node

    // Constructor
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

int main() {

    //==============================
    // 🔗 Creating nodes
    //==============================
    Node* head = new Node(10);   // head -> 10
    Node* a = new Node(20);      //         ↓
    Node* b = new Node(30);      //         ↓
    Node* c = new Node(40);      //         ↓
    Node* d = new Node(50);      //       [null]

    //==============================
    // 🧷 Linking nodes to form the list
    //==============================
    head->next = a;   // 10 -> 20
    a->next = b;      // 20 -> 30
    b->next = c;      // 30 -> 40
    c->next = d;      // 40 -> 50
    d->next = a;   // 🔁 Uncomment to create a cycle: 50 -> 20

    /*
    📌 Linked List Visualization (No Cycle):
        head → 10 → 20 → 30 → 40 → 50 → NULL

    📌 If d->next = a is uncommented:
        head → 10 → 20 → 30 → 40 → 50
                        ↑              ↓
                        ← ← ← ← ← ← ← ←
        This creates a loop (cycle) starting from node 20.
    */

    //==============================
    // 🐢🐇 Floyd's Cycle Detection Algorithm
    //==============================
    Node* slow = head;  // 🐢 moves one step at a time
    Node* fast = head;  // 🐇 moves two steps at a time
    bool hasCycle = false;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;           // Move slow by 1
        fast = fast->next->next;     // Move fast by 2

        if (slow == fast) {
            // 🎯 Cycle detected — fast caught up with slow
            hasCycle = true;
            break;
        }
    }

    //==============================
    // 📢 Output result
    //==============================
    cout << (hasCycle ? "Cycle Detected!\n" : "No Cycle Detected!\n");

    return 0;
}
