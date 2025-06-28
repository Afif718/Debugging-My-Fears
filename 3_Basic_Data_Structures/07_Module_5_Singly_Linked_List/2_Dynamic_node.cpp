#include<bits/stdc++.h>
using namespace std;

// Node class represents each element in a singly linked list
class Node{
    public:
        int val;        // stores the value/data
        Node* next;     // pointer to the next node

    // Constructor for easy node creation
    Node(int val){
        this->val = val;     // assign the passed value
        this->next = NULL;   // initially points to nothing (end of list)
    }
};

int main(){

    // ======================
    // Dynamic Object Creation
    // ======================

    /*
    Why dynamic memory?
    - With dynamic memory (using `new`), we can allocate memory at runtime.
    - This is essential for linked lists where we don’t know in advance how many nodes we’ll need.
    - Nodes are stored in the heap and persist until manually deleted.
    
    What is happening here?
    - head is a pointer to a dynamically allocated Node with value 10.
    - a and b are also dynamically created Nodes.
    */

    Node* head = new Node(10);  // creates a node with val = 10
    Node* a = new Node(20);     // creates a node with val = 20
    Node* b = new Node(30);     // creates a node with val = 30

    // Establish connections between nodes
    // previously: a.next = &b (when a, b were stack objects)
    // now: a and b are pointers (heap objects), so we use '->' to set links
    head->next = a;  // link head to a
    a->next = b;     // link a to b

    /*
    Memory layout:
        head --> [10 | * ] --> [20 | * ] --> [30 | NULL]
                   |             |             |
                 heap          heap          heap

    Each node knows the address of the next node.
    head stores the address of the first node in the chain.
    */

    // ================================
    // Understanding Pointer Dereference
    // ================================

    /*
    head is a pointer to a Node.
    - head->val accesses the value of the node that head points to.
    - head->next is also a pointer (to the next node).
    - head->next->val accesses the value in the second node.
    - head->next->next->val accesses the third node’s value.
    */

    cout << head->val << endl;             // prints 10
    cout << head->next->val << endl;       // prints 20
    cout << head->next->next->val << endl; // prints 30

    // You can also use *head to dereference the node directly:
    // (*head).val is equivalent to head->val

    /*
    Important Concepts:
    - '->' is syntactic sugar for pointer dereferencing.
      Example: `head->val` is equivalent to `(*head).val`
    - In linked lists, we traverse by following `next` pointers.
    - Each time we do head->next, we move one step forward.
    */

    return 0;
}

/*
⚡ Key Takeaways for Dynamic Linked Lists:

1. `new` allocates memory on the heap.
2. Each `Node*` is a pointer to a dynamically allocated object.
3. Use `->` to access members of a class/struct via a pointer.
4. Each node contains a value and a `next` pointer to the next node.
5. To link nodes dynamically, use pointer assignments like `node1->next = node2;`.
6. This structure enables us to build flexible, scalable data structures.

💡 In real-world scenarios:
- We usually keep a `head` pointer to access the list.
- We often loop until `current->next == NULL` to reach the end.
- Don't forget to `delete` dynamically allocated memory in large programs to prevent memory leaks.
*/
