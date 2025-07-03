#include <bits/stdc++.h>
using namespace std;

// Define the Node class for the linked list
class Node {
public:
    int val;        // Value stored in the node
    Node* next;     // Pointer to the next node

    // Constructor to initialize the node
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

// Function to print the middle of the linked list
void print_middle(Node* head) {
    if (head == NULL) {
        cout << "List is empty" << endl;
        return;
    }

    // Initialize pointers:
    // - 'slow' moves 1 step at a time
    // - 'fast' moves 2 steps at a time
    // - 'prev' tracks the node before slow (needed for even size)
    Node* slow = head;
    Node* fast = head;
    Node* prev = NULL;

    /*
        VISUAL EXAMPLE: Linked List = 2 → 4 → 6 → 8 → 10 → 12

        Initial:
        slow, fast
           ↓     ↓
        [2] → [4] → [6] → [8] → [10] → [12]

        Step 1:
        prev   slow       fast
         ↓      ↓           ↓
        [2] → [4] → [6] → [8] → [10] → [12]

        Step 2:
                 prev   slow             fast
                  ↓      ↓                ↓
        [2] → [4] → [6] → [8] → [10] → [12]

        Step 3:
                           prev   slow
                            ↓      ↓
        [2] → [4] → [6] → [8] → [10] → [12] → NULL
                                             ↑
                                           fast == NULL → loop ends

        Result:
        prev = 6
        slow = 8

        Since it's even length → two middle values: 6 and 8
    */

    while (fast != NULL && fast->next != NULL) {
        prev = slow;             // store current slow
        slow = slow->next;       // move slow by 1
        fast = fast->next->next; // move fast by 2
    }

    // When fast becomes NULL, it means we have even number of nodes
    if (fast == NULL) {
        cout << "Middle values (even size): " << prev->val << " " << slow->val << endl;
    } else {
        // Odd number of nodes: slow points to exact middle
        cout << "Middle value (odd size): " << slow->val << endl;
    }
}

int main() {
    // Creating a sample linked list:
    // 2 → 4 → 6 → 8 → 10 → 12
    Node* head = new Node(2);
    Node* a = new Node(4);
    Node* b = new Node(6);
    Node* c = new Node(8);
    Node* d = new Node(10);
    Node* tail = new Node(12);

    // Connect the nodes together
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = tail;

    // Print the middle value(s)
    print_middle(head);

    return 0;
}
