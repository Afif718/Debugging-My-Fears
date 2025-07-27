#include<bits/stdc++.h>
using namespace std;

// Definition of the Node class
class Node {
    public:
        int val;
        Node* left;
        Node* right;
    
    // Constructor to initialize node value and pointers
    Node(int val) {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

/*
Postorder Traversal (Recursive):

    Postorder means:
    1. Traverse Left Subtree
    2. Traverse Right Subtree
    3. Visit (Print) Root

    The function calls itself recursively for left and right children,
    and only after both children are done, it processes the root node.

    Let’s understand the call flow on a sample tree.
*/

// Postorder traversal function
void postorder(Node* root) {
    if(root == NULL) {
        return; // base case: do nothing for null nodes
    }

    postorder(root->left);   // Step 1: Recur on the left child
    postorder(root->right);  // Step 2: Recur on the right child
    cout << root->val << " "; // Step 3: Process (print) current root node
}

int main() {

    /*
    Constructing the following Binary Tree:

             10
            /  \
          20    30
         /     /  \
       40     50   60

    Postorder Traversal:
    => Visit Left Subtree (20 -> 40)
    => Visit Right Subtree (30 -> 50, 60)
    => Then visit root (10)

    Expected Output: 40 20 50 60 30 10
    */

    // Creating nodes
    Node* root = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);
    Node* e = new Node(60);

    // Establishing links between nodes
    root->left = a;
    root->right = b;

    a->left = c;
    b->left = d;
    b->right = e;

    // Calling the traversal
    postorder(root);

    return 0;
}
