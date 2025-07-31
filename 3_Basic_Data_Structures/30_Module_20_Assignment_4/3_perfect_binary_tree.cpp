#include<bits/stdc++.h>
using namespace std;

// Node class to represent each node in the binary tree
class Node {
public:
    int val;         // value of the node
    Node* left;      // pointer to left child
    Node* right;     // pointer to right child

    Node(int val) {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

// Function to build the binary tree from input
Node* input_tree() {
    int val;
    cin >> val;
    Node* root;

    if (val == -1) {
        // -1 means the root is NULL (empty tree)
        root = NULL;
    } else {
        root = new Node(val); // create root node
    }

    queue<Node*> q;

    if (root != NULL) {
        q.push(root); // push root to queue
    }

    // Building the tree level by level using BFS
    while (!q.empty()) {
        Node* p = q.front();  // get front node from queue
        q.pop();

        int l, r;
        cin >> l >> r; // take input for left and right children
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

        // Connect current node to its children
        p->left = myLeft;
        p->right = myRight;

        // Push children to queue for further processing
        if (p->left) {
            q.push(p->left);
        }

        if (p->right) {
            q.push(p->right);
        }
    }

    return root;
}

// Recursive function to calculate the maximum depth of the tree
int max_depth(Node* root){
    if(root == NULL){
        return 0;
    }

    if(root->left == NULL && root->right == NULL){
        return 1; // Leaf node contributes depth of 1
    }

    // Recursively calculate left and right subtree depths
    int l = max_depth(root->left);
    int r = max_depth(root->right);

    return max(l,r) + 1; // Add 1 for current node
}

// Function to count the total number of nodes using BFS
int count_nodes(Node* root){
    if(root == NULL){
        return 0;
    }

    queue<Node*> q;
    q.push(root); // Start from root

    int count_nodes = 0;

    // Level-order traversal to count nodes
    while(!q.empty()){
        Node* parent = q.front();
        q.pop();

        // Push left child if exists
        if(parent->left){
            q.push(parent->left);
        }

        // Push right child if exists
        if(parent->right){
            q.push(parent->right);
        }

        // Count current node
        count_nodes++;
    }

    return count_nodes;
}

int main() {
    Node* root = input_tree();

    int depth = max_depth(root);                // Maximum depth of the tree
    int total_num_of_nodes = count_nodes(root); // Total nodes in the tree

    // Visualizing the perfect binary tree property:
    // A perfect binary tree has 2^depth - 1 nodes
    // For example, depth = 3 → expected nodes = 7 → if matches, then it's perfect
    if(total_num_of_nodes == (pow(2, depth)-1)){
        cout << "YES\n"; // It is a perfect binary tree
    } else{
        cout << "NO\n";  // Not a perfect binary tree
    }

    return 0;
}
