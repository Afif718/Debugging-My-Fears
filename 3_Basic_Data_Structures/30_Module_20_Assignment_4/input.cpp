#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;         
    Node* left;      
    Node* right;     

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
        
        Node* p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node* myLeft, *myRight;

        if (l == -1) {
            myLeft = NULL;
        } else {
            myLeft = new Node(l);
        }

        if (r == -1) {
            myRight = NULL;
        } else {
            myRight = new Node(r);
        }

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


void level_order(Node* root) {

    if (root == NULL) {
        cout << "NO TREE";
        return;
    }


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


int main() {
    Node* root = input_tree();
    level_order(root);
    return 0;
}