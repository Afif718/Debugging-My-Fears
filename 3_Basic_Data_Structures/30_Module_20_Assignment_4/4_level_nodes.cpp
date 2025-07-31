#include<bits/stdc++.h>
using namespace std;

// Definition of a Binary Tree Node
class Node {
public:
    int val;         // Value stored in the node
    Node* left;      // Pointer to the left child
    Node* right;     // Pointer to the right child

    // Constructor
    Node(int val) {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

// Function to take level-order input and construct the tree
Node* input_tree() {
    int val;
    cin >> val;  // Read the root value
    Node* root;

    if (val == -1) {
        // If the value is -1, the tree is empty
        root = NULL;
    } else {
        // Create the root node
        root = new Node(val);
    }

    queue<Node*> q;

    if (root != NULL) {
        q.push(root);
    }

    // Level-order tree construction
    while (!q.empty()) {
        Node* p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r; // Read left and right child values

        Node* myLeft, *myRight;

        // Create left child if value is not -1
        if (l == -1) {
            myLeft = NULL;
        } else {
            myLeft = new Node(l);
        }

        // Create right child if value is not -1
        if (r == -1) {
            myRight = NULL;
        } else {
            myRight = new Node(r);
        }

        // Link children to current node
        p->left = myLeft;
        p->right = myRight;

        // Push children to queue to continue level-order construction
        if (p->left) {
            q.push(p->left);
        }

        if (p->right) {
            q.push(p->right);
        }
    }

    return root;
}

// Function to collect all nodes at a given level x
void level_nodes(Node* root, vector<int>& result , int x){
    queue<pair<Node*, int>> q; // Pair contains node and its level

    if(root != NULL){
        q.push({root, 0}); // Start with root at level 0
    }

    while(!q.empty()){
        pair<Node*, int> parent = q.front(); // Get front node with level
        q.pop();

        Node* node = parent.first;
        int level = parent.second;

        if(level == x){
            result.push_back(node->val); // If current level matches x, add to result
        } 

        // Enqueue left and right children with incremented level
        if(node->left){
            q.push({node->left, level+1});
        }

        if(node->right){
            q.push({node->right, level+1});
        }
    }
}

// Main function
int main() {
    Node* root = input_tree();  // Build the tree from user input

    int x;
    cin >> x; // Read the target level

    vector<int> result;

    level_nodes(root, result, x); // Get all nodes at level x

    if(result.empty()){
        cout << "Invalid\n"; // If no nodes found at level x
    } else {
        for(int val : result){
            cout << val << " "; // Print all values at level x
        }
    }

    return 0;
}


/*
https://www.hackerrank.com/contests/assignment-04-a-basic-data-structure-a-batch-07/challenges/level-nodes-2/problem

Level Nodes
Problem
Submissions
Leaderboard
Discussions
Problem Statement

You will be given a binary tree as input in level order. Also you will be given a level . You need to print all the node's values in that level from left to right. Assume that level starts from .

For example:

image

If , then the output for the above tree will be: 40 50 60

Note: If the level  is not a valid level, the print "Invalid".

Input Format

Input will contain the binary tree in level order.  means there is no node available.
Constraints

 Maximum number of nodes 
 Node's value 
Output Format

Output all the node's values in level .
Sample Input 0

10 20 30 40 50 -1 60 -1 -1 -1 -1 -1 -1
0
Sample Output 0

10
Sample Input 1

10 20 30 40 50 -1 60 -1 -1 -1 -1 -1 -1
1
Sample Output 1

20 30
Sample Input 2

10 20 30 40 50 -1 60 -1 -1 -1 -1 -1 -1
2
Sample Output 2

40 50 60
Sample Input 3

10 20 30 40 50 -1 60 -1 -1 -1 -1 -1 -1
3
Sample Output 3

Invalid
*/