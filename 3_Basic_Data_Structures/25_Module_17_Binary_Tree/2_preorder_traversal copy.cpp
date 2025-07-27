#include<bits/stdc++.h>
using namespace std;

// Define the structure of each Node in the Binary Tree
class Node{
public:
    int val;       // Holds the value/data of the node
    Node* left;    // Pointer to the left child
    Node* right;   // Pointer to the right child

    // Constructor to initialize node with a value and NULL children
    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

/*
===============================
    Preorder Traversal (DFS)
===============================

Definition:
-----------
Preorder traversal is a type of **Depth-First Search (DFS)** where the nodes are visited in the following order:
    1. Visit Root
    2. Traverse Left Subtree
    3. Traverse Right Subtree

It's called "preorder" because the root node is visited **before** (pre) its child nodes.

How Recursion Works:
---------------------
The recursion stack mimics the call hierarchy:
- Each time you call the function, it "pauses" the current frame and jumps into the new one.
- Once the base case (root == NULL) is hit, the stack unwinds, continuing from the paused point.

Example Tree:
-------------
           10
         /    \
       20      30
      /       /  \
    40      50    60

Preorder Traversal Output:
---------------------------
=> 10 20 40 30 50 60
(Visit root, then left subtree, then right subtree)

*/

void preorder(Node* root){
    if(root == NULL){
        // Base case: If the node is NULL, just return
        return;
    }

    // 1. Visit the root node (current node)
    cout << root->val << " ";

    // 2. Recur on the left subtree
    preorder(root->left);

    // 3. Recur on the right subtree
    preorder(root->right);
}

int main(){

    /*
    ===========================
        Manual Tree Creation
    ===========================
    
            10
          /    \
        20      30
       /       /  \
     40      50    60

    Node Connections:
    - 10 is root
    - 20 is left child of 10
    - 30 is right child of 10
    - 40 is left child of 20
    - 50 and 60 are children of 30
    */

    // Create nodes
    Node* root = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);
    Node* e = new Node(60);

    // Build the tree by setting left and right children
    root->left = a;
    root->right = b;

    a->left = c;

    b->left = d;
    b->right = e;

    /*
    ===============================
        Start Preorder Traversal
    ===============================
    
    Expected Output:
    ----------------
    10 (root)
      → 20 (left of 10)
        → 40 (left of 20)
      → 30 (right of 10)
        → 50 (left of 30)
        → 60 (right of 30)

    Call Stack Visualization:
    --------------------------
    preorder(10)
        print 10
        preorder(20)
            print 20
            preorder(40)
                print 40
                preorder(NULL)
                preorder(NULL)
        preorder(30)
            print 30
            preorder(50)
                print 50
                preorder(NULL)
                preorder(NULL)
            preorder(60)
                print 60
                preorder(NULL)
                preorder(NULL)
    */

    preorder(root); // Begin the traversal
    
    return 0;
}
