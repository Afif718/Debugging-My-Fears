#include <bits/stdc++.h>
using namespace std;

// Node class representing each node in the binary tree
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

// Function to input a binary tree in level order (BFS) manner
Node* intput_tree() {
    int val;
    cin >> val;          // Read the root node value
    Node* root;

    // If the root value is -1, it means the tree is empty
    if (val == -1) {
        root = NULL;
    } else {
        root = new Node(val);  // Create root node
    }

    queue<Node*> q;
    if (root != NULL) {
        q.push(root);          // Push root into queue to start BFS tree construction
    }

    // Level order tree construction
    while (!q.empty()) {
        // Step 1: Get the current node from the queue front
        Node* p = q.front();
        q.pop();

        // Step 2: Read left and right child values for current node
        int l, r;
        cin >> l >> r;

        Node* myLeft, *myRight;

        // Create left child node if input is not -1, else NULL
        if (l == -1) {
            myLeft = NULL;
        } else {
            myLeft = new Node(l);
        }

        // Create right child node if input is not -1, else NULL
        if (r == -1) {
            myRight = NULL;
        } else {
            myRight = new Node(r);
        }

        // Attach children to current node
        p->left = myLeft;
        p->right = myRight;

        // Step 3: If children exist, push them to queue for next level processing
        if (p->left) {
            q.push(p->left);
        }

        if (p->right) {
            q.push(p->right);
        }
    }

    return root; // Return constructed tree's root node
}

/*
VISUALIZATION:

Example input:
10
20 30
40 -1 50 60
-1 -1 -1 -1

Tree built:

          10
         /  \
       20    30
      /      /  \
    40      50   60

Queue process for building:
- Push 10 initially
- Pop 10, read 20,30 → create nodes, push 20, 30
- Pop 20, read 40, -1 → create node 40, push 40
- Pop 30, read 50, 60 → create nodes 50, 60, push 50, 60
- Pop 40, read -1, -1 → no children to push
- Pop 50, read -1, -1 → no children to push
- Pop 60, read -1, -1 → no children to push
*/

// Recursive function to count nodes in the binary tree
int count_node(Node* root) {
    if (root == NULL) {
        // Base case: empty subtree has 0 nodes
        return 0;
    }

    // Recursive case:
    // 1. Count nodes in left subtree
    int l = count_node(root->left);
    // 2. Count nodes in right subtree
    int r = count_node(root->right);

    // 3. Total nodes = left subtree nodes + right subtree nodes + 1 (for current node)
    return l + r + 1;
}

/*
VISUALIZATION OF RECURSION:

Count nodes of this tree:

          10
         /  \
       20    30
      /      /  \
    40      50   60

Recursive calls:

count_node(10)
= count_node(20) + count_node(30) + 1
= (count_node(40) + count_node(NULL) + 1) + (count_node(50) + count_node(60) + 1) + 1
= (1 + 0 + 1) + (1 + 1 + 1) + 1
= 2 + 3 + 1
= 6 nodes total

Each recursion goes down to leaf nodes and counts up.

*/

// Main function: driver code
int main() {
    Node* root = intput_tree();  // Build tree from input

    cout << "Number of Nodes in the Binary Tree --> " << count_node(root) << endl;

    return 0;
}
