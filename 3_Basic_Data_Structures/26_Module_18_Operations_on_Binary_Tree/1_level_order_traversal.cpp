#include<bits/stdc++.h>
using namespace std;
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

void level_order(Node* root){
    // no need recursion here. we will use queue
    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        // 1. ber kore anbo
        Node* f = q.front();
        q.pop();

        // 2. oi node niya kaj korbo
        cout << f->val << " ";

        // 3. children push korbo
        if(f->left != NULL){
            q.push(f->left);
        }
        
        if(f->right != NULL){
            q.push(f->right);
        }
        
    }
}

int main(){

    Node* root = new Node(10);  // root node
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);
    Node* e = new Node(60);

    root->left = a;
    root->right = b;

    a->left = c;
    b->left = d;
    b->right = e;

    level_order(root);
    
    return 0;
}