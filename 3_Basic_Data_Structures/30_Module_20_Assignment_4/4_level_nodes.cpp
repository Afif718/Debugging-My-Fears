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

void level_nodes(Node* root, vector<int>& result , int x){
    queue<pair<Node*, int>> q;

    if(root != NULL){
        q.push({root,0});
    }

    bool isInvalid_level = false;

    while(!q.empty()){
        pair<Node*, int> parent = q.front();
        q.pop();

        Node* node = parent.first;
        int level = parent.second;

        if(level == x){
            result.push_back(node->val);
        } 

        if(node->left){
            q.push({node->left, level+1});
        }

        if(node->right){
            q.push({node->right, level+1});
        }
        
    }


}

int main() {
    Node* root = input_tree();

    int x;
    cin >> x;
    
    vector<int> result;

    level_nodes(root, result, x);

    if(result.empty()){
        cout << "Invalid\n";
    } else{
        for(int val:result){
        cout << val << " ";
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