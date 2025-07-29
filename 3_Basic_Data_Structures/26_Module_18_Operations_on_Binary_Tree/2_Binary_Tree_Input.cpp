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

/**
 * Input the binary tree in level order
 * Example input:
 * 10 20 30
 * 40 -1 50 60
 * -1 -1 -1 -1
 * This represents the tree:
 *               10
 *             /    \
 *           20      30
 *         /   \     /
 *       40   50   60
 * Each line after the root represents the children of the previous level's nodes.
 */
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

        // Step 3: Push non-null children to the queue for next processing
        if (p->left) {
            q.push(p->left);
        }

        if (p->right) {
            q.push(p->right);
        }
    }

    return root;
}

/**
 * Level Order Traversal (BFS): Visit nodes level by level from top to bottom, left to right
 * Uses a queue to track the nodes to visit
 * Time Complexity: O(n), where n = number of nodes
 * Space Complexity: O(n) for the queue
 *
 * Example traversal output:
 * Input:
 * 10 20 30
 * 40 50 60 -1
 * -1 -1 -1 -1
 * Output:
 * 10 20 30 40 50 60
 */
void level_order(Node* root) {

    if (root == NULL) {
        cout << "NO TREE";
        return;
    }

    // Queue is used to hold nodes to process in order
    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        // Step 1: Pop the front node
        Node* f = q.front();
        q.pop();

        // Step 2: Print its value
        cout << f->val << " ";

        // Step 3: Push its children to the queue
        if (f->left != NULL) {
            q.push(f->left);
        }

        if (f->right != NULL) {
            q.push(f->right);
        }
    }
}

/**
 * Main function
 * Builds a binary tree using input_tree()
 * Then performs level order traversal
 */
int main() {
    Node* root = input_tree();
    level_order(root);
    return 0;
}
