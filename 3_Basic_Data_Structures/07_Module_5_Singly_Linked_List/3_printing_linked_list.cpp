#include<bits/stdc++.h>
using namespace std;

// Node class represents a single element in the linked list
class Node{
    public:
        int val;        // stores the data/value of the node
        Node* next;     // stores the address of the next node in the list

    // Constructor to easily initialize the value and set next to NULL
    Node(int val){
        this->val = val;
        this->next = NULL;  // initially points to nothing
    }
};

int main(){

    // ==============================
    // Creating Nodes Dynamically (Heap)
    // ==============================
    // These nodes are allocated on the heap using 'new'
    // This allows for dynamic memory usage — great for growing lists
    Node* head = new Node(10);   // head points to the first node
    Node* a = new Node(20);      // second node
    Node* b = new Node(30);      // third node
    Node* c = new Node(400);     // fourth node

    // ===============================
    // Establishing Connections (Links)
    // ===============================
    // Setting up the singly linked list structure:
    // head -> a -> b -> c -> NULL
    head->next = a;
    a->next = b;
    b->next = c;

    /*
    Memory layout after linking:
    
    head --> [10 | * ] --> [20 | * ] --> [30 | * ] --> [400 | NULL]
                |            |            |              |
              heap         heap         heap           heap
    */

    // ==========================================
    // Traversing the Linked List Using a Pointer
    // ==========================================

    /*
    To print all node values, we use a temporary pointer `temp`
    Starting from head, we move to the next node in each iteration
    until we reach the end of the list (NULL).
    */
    Node* temp = head;

    // This loop goes through each node and prints its value
    while(temp != NULL){
        cout << temp->val << endl;  // print current node's value
        temp = temp->next;          // move to the next node
    }

    /*
    Output:
    10
    20
    30
    400
    */

    return 0;
}

/*
✅ Key Concepts:
- Dynamic memory allocation is used to create nodes with `new`.
- We use `->` to access members of a pointer to a class.
- Nodes are linked using their `next` pointers.
- Traversal is done by moving from one node to the next using a loop until NULL is reached.
- Always start traversal from `head`, which points to the beginning of the list.
💡 In a complete program, don't forget to `delete` the nodes to free heap memory (not shown here).
*/
