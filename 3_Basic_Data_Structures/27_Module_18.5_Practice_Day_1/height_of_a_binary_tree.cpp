#include<bits/stdc++.h>
using namespace std;

// Node structure of a binary tree
class Node {
public:
    int val;         // Value of the current node
    Node* left;      // Pointer to the left child
    Node* right;     // Pointer to the right child

    // Constructor to initialize a node with a value
    Node(int val) {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};


Node* input_tree() {
    int val;
    cin >> val;
    Node* root;

    if (val == -1) {
        // If root value is -1, return NULL tree
        root = NULL;
    } else {
        root = new Node(val);
    }

    queue<Node*> q;

    if (root != NULL) {
        q.push(root);
    }

    // Building the tree level by level
    while (!q.empty()) {
        // Step 1: Extract front node from the queue
        Node* p = q.front();
        q.pop();

        // Step 2: Input left and right values
        int l, r;
        cin >> l >> r;
        Node* myLeft, *myRight;

        // Create left child if not -1
        if (l == -1) {
            myLeft = NULL;
        } else {
            myLeft = new Node(l);
        }

        // Create right child if not -1
        if (r == -1) {
            myRight = NULL;
        } else {
            myRight = new Node(r);
        }

        // Assign children to current node
        p->left = myLeft;
        p->right = myRight;

        if (p->left) {
            q.push(p->left);
        }

        if (p->right) {
            q.push(p->right);
        }
    }

    return root;
}

int max_height(Node* root){

    if(root == NULL){
        return 0;
    }

    //leaf nodes
    if(root->left == NULL && root->right == NULL){
        return 0;
    }

    int l = max_height(root->left);
    int r = max_height(root->right);

    // int height = max(l,r) + 1;

    // return height;
    return max(l, r) + 1;

}

int main() {
    Node* root = input_tree();

    cout << "Height of Binary Tree " << max_height(root);
    
    return 0;
}