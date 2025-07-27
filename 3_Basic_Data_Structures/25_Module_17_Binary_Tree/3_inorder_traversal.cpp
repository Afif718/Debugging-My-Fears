#include<bits/stdc++.h>
using namespace std;

// Definition of a binary tree node
class Node{
public:
    int val;
    Node* left;
    Node* right;

    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

// Inorder Traversal (Left → Root → Right)
void inorder(Node* root){
    if(root == NULL){
        // Base case: if the node is NULL, just return
        return;
    }

    // Recursively traverse the left subtree
    inorder(root->left);

    // Visit the root (current node)
    cout << root->val << " ";

    // Recursively traverse the right subtree
    inorder(root->right);
}

int main(){

    /*
        Creating the following Binary Tree:

                  10
                /    \
              20      30
             /  \     /  \
           40   50   60   70
                      / \
                     90 100
                  (gives more shape)

        Connections:
        - 10: root
        - 20 and 30: children of 10
        - 40 and 50: children of 20
        - 60 and 70: children of 30
        - 90 and 100: children of 70
        - 50 has left child 80 (g)
    */

    Node* root = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);
    Node* e = new Node(60);
    Node* f = new Node(70);
    Node* g = new Node(80);
    Node* h = new Node(90);
    Node* i = new Node(100);

    root->left = a;
    root->right = b;

    a->left = c;
    a->right = d;

    d->left = g;

    b->left = e;
    b->right = f;

    f->left = h;
    f->right = i;

    /*
    --------------------------
    Inorder Traversal (L → N → R)
    --------------------------
    Steps:

    For each node:
    1. Go to the left subtree and perform inorder
    2. Visit the current node (print value)
    3. Go to the right subtree and perform inorder

    Visualization of Recursive Flow:

    inorder(10)
    ├─ inorder(20)
    │  ├─ inorder(40)
    │  │  └─ NULL → print 40 → NULL
    │  └─ print 20
    │  └─ inorder(50)
    │     ├─ inorder(80)
    │     │  └─ NULL → print 80 → NULL
    │     └─ print 50
    │     └─ NULL
    └─ print 10
    └─ inorder(30)
       ├─ inorder(60)
       │  └─ NULL → print 60 → NULL
       └─ print 30
       └─ inorder(70)
          ├─ inorder(90)
          │  └─ NULL → print 90 → NULL
          └─ print 70
          └─ inorder(100)
             └─ NULL → print 100 → NULL

    Final Printed Order:
    40 20 80 50 10 60 30 90 70 100

    This matches the inorder rule:
    Left → Node → Right
    */

    inorder(root); // Start inorder traversal

    return 0;
}
