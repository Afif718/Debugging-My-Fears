#include<bits/stdc++.h>
using namespace std;

// ========================
// Definition of Node Class
// ========================
class Node{
    public:
        int val;        // stores the data/value
        Node* next;     // pointer to the next node

    // Constructor to initialize node value and set next as NULL
    Node(int val){
        this->val = val;
        this->next = NULL;  // no connection yet
    }
};

// =========================================================
// Function to Insert a Node at the Tail (End) of Linked List
// =========================================================
void insert_at_tail(Node* &head, int val){
    // Step 1: Create a new node with the given value
    Node* newnode = new Node(val);

    // Step 2: Handle edge case — when the list is empty
    if(head == NULL){
        /*
        If the list is currently empty (head is NULL), then the new node becomes the first and only node.
        So we simply make head point to this new node.
        */
        head = newnode;
        return; // Exit here; no further processing needed
    }

    // Step 3: Traverse the list to find the last node (whose next is NULL)
    Node* temp = head; // Start from the head

     /*
    What is happening here:
    --------------------------------
    while(temp->next != NULL)
    - We are checking whether the current node (`temp`) is the last node.
    - If `temp->next` is not NULL, it means there is another node after it.
    - So, we keep moving forward in the list.
    - The loop stops when `temp` reaches the last node (whose `next` is NULL).

    Purpose:
    To locate the last node in the current linked list so that we can append the new node after it.
    */

    while(temp->next != NULL){
        temp = temp->next; // Move to next node until we reach the last
    }

    // Step 4: Once we're at the last node, set its next to the new node
    temp->next = newnode;

    /*
    Visual Flow:

    Before:
    [400] -> [500] -> NULL

    Inserting 600:

    temp starts at 400, moves to 500, which is last (next = NULL)
    Now:
    [400] -> [500] -> [600] -> NULL
    */
}

// ======================================
// Function to Print the Linked List
// ======================================
void print_node(Node* head){
    Node* temp = head;

    // Traverse the list and print values of each node
    while(temp != NULL){
        cout << temp->val << endl;
        temp = temp->next; // move to next node
    }
}

// ======================================
// Main Function
// ======================================
int main(){

    // Step 0: Initialize an empty linked list
    Node* head = NULL; // head is initially NULL (list is empty)

    // Inserting elements at the tail one by one
    insert_at_tail(head, 400); // list: [400]
    insert_at_tail(head, 500); // list: [400] -> [500]
    insert_at_tail(head, 600); // list: [400] -> [500] -> [600]

    // Print the linked list to verify the result
    print_node(head);

    /*
    Output:
    400
    500
    600
    */

    return 0;
}

/*
📌 Key Concepts Covered:

1. `insert_at_tail`:
   - Efficient way to add a node to the end of the list.
   - Handles both empty and non-empty cases.
   - Uses traversal to reach the end (O(n) time complexity).

2. Memory Allocation:
   - Nodes are dynamically created with `new`.
   - Each node lives in the heap and is linked using the `next` pointer.

3. Pointer Traversal:
   - A temporary pointer (`temp`) is used to walk through the list.
   - We keep going until `temp->next == NULL`, i.e., end of the list.

4. Why reference to head (`Node* &head`)?
   - We pass head by reference so we can modify it if the list is empty.
   - If we passed it by value, changes wouldn’t reflect back in `main()`.

💡 Visualization After Insertions:
[400] -> [500] -> [600] -> NULL
 ^head

Each call to `insert_at_tail` appends a node at the end while keeping the previous structure intact.
*/
