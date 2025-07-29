#include <bits/stdc++.h>
using namespace std;

// Node class represents each node of the binary tree
class Node {
public:
    int val;        // stores the value of the node
    Node* left;     // pointer to the left child
    Node* right;    // pointer to the right child

    Node(int val) {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

// Function to build the binary tree from user input using level order traversal
Node* input_tree() {
    int val;
    cin >> val;           // Read root value
    Node* root;

    // If root value is -1, it means the tree is empty
    if (val == -1) {
        root = NULL;
    } else {
        root = new Node(val);  // Create root node
    }

    queue<Node*> q;

    // If root exists, push it into the queue
    if (root != NULL) {
        q.push(root);
    }

    // Tree construction starts here using BFS (level order)
    while (!q.empty()) {
        // STEP 1: Pop a node from the front
        Node* p = q.front();
        q.pop();

        // STEP 2: Take input for the current node's left and right children
        int l, r;
        cin >> l >> r;

        Node* myLeft, *myRight;

        // Create left child if input is not -1
        if (l == -1) {
            myLeft = NULL;
        } else {
            myLeft = new Node(l);
        }

        // Create right child if input is not -1
        if (r == -1) {
            myRight = NULL;
        } else {
            myRight = new Node(r);
        }

        // Attach left and right children to the current node
        p->left = myLeft;
        p->right = myRight;

        // STEP 3: Push children to the queue if they are not NULL
        if (p->left) {
            q.push(p->left);
        }

        if (p->right) {
            q.push(p->right);
        }
    }

    return root;
}

/*
VISUALIZATION:
Let’s say you input:
10
20 30
40 -1 50 60
-1 -1 -1 -1

This builds the tree:
            10
           /  \
         20    30
        /     /  \
      40     50   60

The queue operations for construction are:
- Start with 10 → enqueue 10
- Dequeue 10 → read 20, 30 → create 20, 30 → enqueue 20, 30
- Dequeue 20 → read 40, -1 → create 40 → enqueue 40
- Dequeue 30 → read 50, 60 → create 50, 60 → enqueue 50, 60
- Dequeue 40 → read -1, -1 → nothing to enqueue
- Dequeue 50 → read -1, -1 → nothing to enqueue
- Dequeue 60 → read -1, -1 → nothing to enqueue
*/

// Function to count number of nodes using level order traversal
int count_node(Node* root) {
    if (root == NULL) {
        cout << "NO TREE";
        return 0;
    }

    int count_node = 0;  // Initialize node count
    queue<Node*> q;
    q.push(root);        // Start BFS from root

    // LEVEL ORDER TRAVERSAL (Breadth-First Search)
    while (!q.empty()) {
        Node* p = q.front();
        q.pop();

        // Uncomment if you want to print the nodes
        // cout << p->val << " ";

        // If left child exists, enqueue it
        if (p->left) {
            q.push(p->left);
        }

        // If right child exists, enqueue it
        if (p->right) {
            q.push(p->right);
        }

        count_node++;  // Count current node
    }

    return count_node;
}

// Main function
int main() {
    Node* root = input_tree(); // Build the tree from user input

    // Print total number of nodes
    cout << "Number of nodes in the tree: " << count_node(root) << endl;

    return 0;
}

/*
SUMMARY OF HOW THIS WORKS:

1. You enter the values level by level.
2. Each pair (left, right) corresponds to the children of the current node being processed.
3. A queue is used to keep track of which node to process next (BFS).
4. After the tree is constructed, another BFS traversal counts the number of nodes.

LEARNER TIP:
Always visualize the queue content at each stage of input and how children are attached.
*/
