#include <bits/stdc++.h>
using namespace std;

// Node class representing each node of the binary tree
class Node {
public:
    int val;       // Value of the node
    Node* left;    // Pointer to left child
    Node* right;   // Pointer to right child

    Node(int val) {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

// Function to input the binary tree in level order
Node* intput_tree() {
    int val;
    cin >> val;  // Read the root value
    Node* root;

    // If the input is -1, tree is empty
    if (val == -1) {
        root = NULL;
    } else {
        root = new Node(val); // Create root node
    }

    queue<Node*> q;
    if (root != NULL) {
        q.push(root); // Start with root node in the queue
    }

    // Build the tree level by level using queue
    while (!q.empty()) {
        Node* p = q.front();
        q.pop();

        // Read left and right child values of current node
        int l, r;
        cin >> l >> r;

        Node* myLeft, *myRight;

        // Create left child node if input is not -1
        if (l == -1) {
            myLeft = NULL;
        } else {
            myLeft = new Node(l);
        }

        // Create right child node if input is not -1
        if (r == -1) {
            myRight = NULL;
        } else {
            myRight = new Node(r);
        }

        // Link children to current node
        p->left = myLeft;
        p->right = myRight;

        // Push children nodes into queue if they exist to process their children next
        if (p->left) {
            q.push(p->left);
        }
        if (p->right) {
            q.push(p->right);
        }
    }

    return root; // Return the root of the constructed tree
}

/*
VISUALIZATION:

Example input:
10
20 30
40 -1 50 60
-1 -1 -1 -1

Constructed binary tree:

          10
         /  \
       20    30
      /      /  \
    40      50   60

Queue operations:
- Initially push root (10)
- Pop 10, read children (20, 30), push 20 and 30
- Pop 20, read children (40, -1), push 40 only
- Pop 30, read children (50, 60), push 50 and 60
- Pop 40, read children (-1, -1), no push
- Pop 50, read children (-1, -1), no push
- Pop 60, read children (-1, -1), no push
*/

// Recursive function to count leaf nodes in the binary tree
int count_leaf_node(Node* root) {
    if (root == NULL) {
        // Base case: empty tree has zero leaf nodes
        return 0;
    }

    // If current node has no children, it's a leaf node
    if (root->left == NULL && root->right == NULL) {
        return 1;
    }

    // Recursive case: count leaf nodes in left and right subtrees
    int l = count_leaf_node(root->left);
    int r = count_leaf_node(root->right);

    // Total leaf nodes = leaf nodes in left subtree + leaf nodes in right subtree
    return l + r;
}

/*
RECURSION VISUALIZATION:

Count leaf nodes in:

          10
         /  \
       20    30
      /      /  \
    40      50   60

Steps:
- count_leaf_node(10)
= count_leaf_node(20) + count_leaf_node(30)
= (count_leaf_node(40) + 0) + (count_leaf_node(50) + count_leaf_node(60))
= (1 + 0) + (1 + 1)
= 1 + 3
= 4 leaf nodes

Nodes 40, 50, and 60 are leaves; 20 is not leaf because it has a child.
*/

// Main function: entry point of the program
int main() {
    Node* root = intput_tree(); // Build tree from input

    cout << "Number of Leaf Nodes in the Binary Tree --> " << count_leaf_node(root) << endl;

    return 0;
}
