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

 void leafnodes(Node* root, vector<int>& result){
    

    if(root == NULL){
        return;
    }

    if(root->left == NULL && root->right == NULL){
        result.push_back(root->val);
    }


    leafnodes(root->left, result);
    leafnodes(root->right, result);

}




int main() {
    Node* root = input_tree();
    
    vector<int> result;
    leafnodes(root, result);

    sort(result.rbegin(), result.rend());


    for(int val:result){
        cout << val << " ";
    }

    return 0;
}

/*
https://www.hackerrank.com/contests/assignment-04-a-basic-data-structure-a-batch-07/challenges/leaf-nodes-1/problem

Problem Statement

You will be given a binary tree as input in level order. You need to print the values of leaf nodes in descending order.

For example:

image

The output for the above tree will be: 60 50 40

Input Format

Input will contain the binary tree in level order.  means there is no node available.
Constraints

 Maximum number of nodes 
 Node's value 
Output Format

Output the values of leaf nodes in descending order.
Sample Input 0

10 20 30 40 50 -1 60 -1 -1 -1 -1 -1 -1
Sample Output 0

60 50 40
*/