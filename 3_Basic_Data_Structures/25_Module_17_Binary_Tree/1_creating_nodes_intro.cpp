#include<bits/stdc++.h>
using namespace std;

/*
=============================== BINARY TREE INTRO ===============================

What is a Binary Tree?
----------------------
A Binary Tree is a non-linear hierarchical data structure in which each node 
has at most two children, referred to as the left child and the right child.

Why Do We Need Binary Trees?
----------------------------
- To organize data hierarchically (e.g., file systems, organizational structures)
- Efficient searching and insertion (like in Binary Search Trees)
- Useful for expression parsing, routing algorithms, AI game trees, etc.

Use Cases of Binary Trees:
--------------------------
- Binary Search Trees (BST) for fast search operations
- Heaps for priority queues
- Expression trees in compilers
- Syntax trees in parsers
- Huffman Encoding Trees in data compression

Types of Binary Trees:
----------------------
1. **Full Binary Tree**: Every node has either 0 or 2 children
2. **Perfect Binary Tree**: All internal nodes have 2 children and all leaves are at same level
3. **Complete Binary Tree**: All levels are fully filled except possibly the last
4. **Balanced Binary Tree**: Height is minimized for efficiency (e.g., AVL Tree, Red-Black Tree)
5. **Degenerate Tree (Skewed Tree)**: Each node has only one child (resembles a linked list)

Difference Between Linear and Non-Linear Data Structures:
---------------------------------------------------------
Linear DS: Data is arranged sequentially (e.g., Array, LinkedList, Stack, Queue)
Non-Linear DS: Data is arranged hierarchically or graph-like (e.g., Tree, Graph)
================================================================================
*/

// Defining the structure for a node in a binary tree
class Node {
public:
    int val;         // Value stored in the node
    Node* left;      // Pointer to the left child
    Node* right;     // Pointer to the right child

    // Constructor: initializes the value and sets left and right to NULL
    Node(int val) {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

int main() {

    // ======================== NODE CREATION ==============================
    // Manually creating individual nodes of the binary tree
    Node* root = new Node(10);  // root node
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);
    Node* e = new Node(60);

    // ======================== BUILDING TREE STRUCTURE ====================
    // Establish parent-child relationships

    /*
        Tree structure being built:

                10
               /  \
             20    30
            /     /  \
          40     50   60

        - Root node is 10
        - 20 is the left child of 10
        - 30 is the right child of 10
        - 40 is the left child of 20
        - 50 and 60 are left and right children of 30 respectively
    */

    root->left = a;
    root->right = b;

    a->left = c;
    b->left = d;
    b->right = e;

    // The tree is now constructed in memory but not printed or traversed.

    return 0;
}
