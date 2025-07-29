#include<bits/stdc++.h>
using namespace std;

// Define the structure of a Node in the Binary Tree
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

// Function to perform Level Order Traversal (Breadth-First Traversal)
void level_order(Node* root){
    // Level order traversal uses a queue to visit nodes level by level

    // Step 1: Create a queue to hold nodes
    queue<Node*> q;

    // Step 2: Push the root node into the queue to start the process
    q.push(root);

    // Step 3: Keep processing until the queue becomes empty
    while(!q.empty()){
        // a. Remove the front node from the queue
        Node* f = q.front();
        q.pop();

        // b. Process the current node (print its value)
        cout << f->val << " ";

        // c. Push the left child into the queue if it exists
        if(f->left != NULL){
            q.push(f->left);
        }

        // d. Push the right child into the queue if it exists
        if(f->right != NULL){
            q.push(f->right);
        }
    }
}

int main(){
    // Constructing the binary tree manually

    /*
        The binary tree structure:
        
                10
               /  \
             20    30
            /     /  \
          40     50   60

        Level order traversal visits nodes level by level:
        First level: 10
        Second level: 20, 30
        Third level: 40, 50, 60
    */

    Node* root = new Node(10);  // root node
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);
    Node* e = new Node(60);

    // Establishing connections
    root->left = a;
    root->right = b;

    a->left = c;
    b->left = d;
    b->right = e;

    // Call level order traversal
    level_order(root);

    return 0;
}
