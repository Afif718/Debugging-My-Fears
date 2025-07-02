#include<bits/stdc++.h>
using namespace std;

// ========================
// Definition of Node Class
// ========================
class Node{
    public:
        int val;        // holds the data/value of the node
        Node* next;     // pointer to the next node

    // Constructor initializes value and sets next to NULL
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

// ==============================================
// Function to Insert a New Node at the Head
// ==============================================
//we are sending &head as refference as we are making changes into it
void insert_at_head(Node* &head, int val){
    /*
    Steps:
    1. Create a new node with the given value.
    2. Set the new node’s next to the current head.
    3. Update head to point to the new node.
    
    Visual:
    Before insertion:
        head --> [10] -> [20] -> [30] -> NULL

    After inserting 100 at head:
        head --> [100] -> [10] -> [20] -> [30] -> NULL
    */

    Node* newnode = new Node(val); // Step 1
    newnode->next = head;          // Step 2
    head = newnode;                // Step 3
}

// ==============================================
// Function to Print Linked List
// ==============================================
void print_linked_list(Node* head){
    Node* temp = head;

    // Traverse and print each node's value
    while(temp != NULL){
        cout << temp->val << endl;
        temp = temp->next;
    }
}

int main(){

    // ===============================
    // Creating Initial Linked List
    // ===============================
    /*
    We first create 3 nodes manually and link them:
        [10] -> [20] -> [30] -> NULL
    */

    Node* head = new Node(10);     // head points to node with value 10
    Node* a = new Node(20);        // a is a node with value 20
    Node* b = new Node(30);        // b is a node with value 30

    head->next = a;                // 10 -> 20
    a->next = b;                   // 20 -> 30

    // ===============================
    // Inserting New Nodes at Head
    // ===============================

    /*
    Each call to insert_at_head adds a new node at the front.
    So the list evolves as:

    Initial:         [10] -> [20] -> [30] -> NULL

    After 1st insert (100):
                     [100] -> [10] -> [20] -> [30] -> NULL

    After 2nd insert (200):
                     [200] -> [100] -> [10] -> [20] -> [30] -> NULL

    After 3rd insert (300):
                     [300] -> [200] -> [100] -> [10] -> [20] -> [30] -> NULL
    */

    insert_at_head(head, 100); // adds 100 to the front
    insert_at_head(head, 200); // adds 200 to the front
    insert_at_head(head, 300); // adds 300 to the front

    // ===============================
    // Printing the Final Linked List
    // ===============================
    print_linked_list(head);

    /*
    Output:
    300
    200
    100
    10
    20
    30
    */

    return 0;
}

/*
📌 Final Takeaways:

- Each time you insert at the head, the new node becomes the new starting point.
- The list grows backwards — last inserted becomes the first.
- 'insert_at_head' is O(1) time complexity — very efficient!
- This pattern is useful in stacks, reversing lists, and time-ordered inserts.

🔁 Visualization after all insertions:

[300] -> [200] -> [100] -> [10] -> [20] -> [30] -> NULL
 ^head

Each node holds a value and a pointer to the next node in the sequence.
*/
