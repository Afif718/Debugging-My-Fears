#include<bits/stdc++.h>
using namespace std;

/*
Why do we need Linked Lists?

Arrays and vectors have some limitations:
1. Fixed Size (for arrays): Once declared, the size of an array cannot be changed.
2. Costly Insertions/Deletions: Inserting or deleting elements in the middle requires shifting all elements.
3. Memory Waste or Shortage: If we allocate a large array, unused space is wasted. If small, we may run out of space.

How Linked Lists solve these:
1. Dynamic Size: We can create nodes on the fly without worrying about initial size.
2. Efficient Insertions/Deletions: Only pointer adjustments are needed — no shifting.
3. Memory Efficient: No need to pre-allocate; memory is used as needed.

What is a Linked List?
A Linked List is a linear data structure made up of nodes where each node contains:
    - data (value)
    - a pointer to the next node
It forms a chain-like structure through pointer connections.
*/

// Node class represents each element of the linked list
class Node{
    public:
        int val;       // holds the value/data
        Node* next;    // holds the address of the next node in the list

    // Use constructor to set values easily when creating a Node
    Node(int val){
        this->val = val;         // assign the passed value to this node's val
        this->next = NULL;       // initially the next pointer is NULL (no connection yet)
    }
};

int main(){

    // Creating three nodes (a, b, c) using the constructor
    Node a(10), b(20), c(300); // val is set, and next is initialized to NULL automatically

    // No need to assign values manually anymore due to constructor
    // a.val = 10;
    // b.val = 20;
    // c.val = 30;

    // Linking nodes to form a chain: a -> b -> c -> NULL
    a.next = &b;  // 'a' now points to 'b'
    b.next = &c;  // 'b' now points to 'c'

    // No need to set c.next = NULL explicitly, already set in constructor
    // c.next = NULL;

    /*
    Visual representation:
    +--------+     +--------+     +---------+
    |  10    | --> |  20    | --> |  300    | --> NULL
    +--------+     +--------+     +---------+
      (a)            (b)             (c)
    */

    // Printing values to verify the structure
    cout << a.val << endl;            // prints value of node a -> 10

    // a.next stores address of b, so we dereference it to get b's value
    // Method 1 (explicit): cout << (*a.next).val << endl;
    // Method 2 (preferred): using '->' operator
    cout << a.next->val << endl;      // prints value of node b -> 20
    cout << a.next->next->val << endl; // prints value of node c -> 300

    return 0;
}

/*
Key Concepts Recap:
- Node is a basic unit of a linked list that stores data and a pointer.
- 'next' connects the current node to the next one in the list.
- '->' is used to access members of a pointer to a class or struct.
- This example demonstrates a simple singly linked list where each node links to the next.
- In real-world programs, nodes are usually created dynamically using `new`, allowing runtime flexibility.
- The constructor makes it easier to initialize nodes and reduces code repetition.
*/
