#include <bits/stdc++.h>
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
        cin>>val;
        if(val==-1){
            return NULL;
        } 

        Node* root=new Node(val);
        queue<Node*>q;

        if(root) q.push(root);
        while(!q.empty()){
            Node* p=q.front();
            q.pop();

            int l,r;
            cin>>l>>r;
            Node*left;
            Node*right;
            
            if(l==-1) left=NULL;
            else left=new Node(l);
            if(r==-1) right=NULL;
            else right=new Node(r);
            p->left =left;
            p->right=right;

            if(p->left)q.push(p->left);
            if(p->right) q.push(p->right);
        }
        return root;
}
void PrintLeft(Node *root)
{
    if (root == NULL) return;
    PrintLeft(root->left);
    if(root->left == NULL && root->right) PrintLeft(root->right);
    cout << root->val << " ";
}
void PrintRight(Node *root)
{
    if (root == NULL) return;
    cout<<root->val<<" ";
    PrintRight(root->right);
    if(root->right == NULL && root->left) PrintRight(root->left);
}
int main() {
    Node* root = input_tree();

    PrintLeft(root->left);
    cout << root->val << " ";
    PrintRight(root->right);

    return 0;
}

/*
https://www.hackerrank.com/contests/assignment-04-a-basic-data-structure-a-batch-07/challenges/print-outer-tree

Print Outer Tree
Problem
Submissions
Leaderboard
Discussions
Problem Statement

You will be given a binary tree as input in level order. You need to print the outer side of the binary tree. See the sample input output for more clarifications. You need to print from the left most leaf node to right most leaf node.

For example:

image

The output for the above tree will be: 90 40 20 10 30 50 60

Input Format

Input will contain the binary tree in level order.  means there is no node available.
Constraints

 Maximum number of nodes 
 Node's value 
Output Format

Output the left most leaf node to right most leaf node.
Sample Input 0

10
20 30
40 70 -1 50
90 110 -1 -1 80 60
-1 -1 -1 -1 100 -1 -1 -1
-1 -1
Sample Output 0

90 40 20 10 30 50 60 
Explanation 0

This test case was explained in the question.
Sample Input 1

10
20 30
-1 40 70 50
60 90 -1 -1 80 -1
-1 -1 -1 -1 100 110
-1 -1 -1 -1
Sample Output 1

60 40 20 10 30 50 80 110 
Explanation 1

Outer part of the binary tree - 
image

Sample Input 2

10
-1 20
-1 50
80 -1
-1 -1
Sample Output 2

10 20 50 80
Explanation 2

Outer part of the binary tree - 
image

Sample Input 3

10
20 -1
-1 50
80 -1
-1 -1
Sample Output 3

80 50 20 10 
Explanation 3

Outer part of the binary tree - 
*/