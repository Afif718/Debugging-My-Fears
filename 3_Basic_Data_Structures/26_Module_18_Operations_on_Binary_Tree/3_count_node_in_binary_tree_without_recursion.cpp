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

Node* input_tree(){
    int val;
    cin >> val;
    Node* root;

    if(val == -1){
        root = NULL;
    }else{
        root = new Node(val);
    }

    queue<Node*> q;

    if(root != NULL){
        q.push(root);
    }
    

    while(!q.empty()){
        //1 ber kore ana
        Node* p = q.front();
        q.pop();

        //2 oi node neya kaj
        int l, r;
        cin >> l >> r;
        Node* myLeft, *myRight;

        if(l == -1){
            myLeft = NULL;
        } else{
            myLeft = new Node(l);
        }

        if(r == -1){
            myRight = NULL;
        } else{
            myRight = new Node(r);
        }

        p->left = myLeft;
        p->right = myRight;

        //3 child push kora
        if(p->left){
            q.push(p->left);
        }

        if(p->right){
            q.push(p->right);
        }
    }

    return root;
}

int count_node(Node* root){
    if(root == NULL){
        cout << "NO TREE";
        return 0;
    }

    int count_node = 0;

    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        Node* p = q.front();
        q.pop();

        //cout << p->val << " ";

        if(p->left){
            q.push(p->left);
        }

        if(p->right){
            q.push(p->right);
        }

        count_node++;
    }

    return count_node;
}

int main(){

    Node* root = input_tree();

    cout <<"Number of nodes in the node: " << count_node(root) << endl; 
    
    return 0;
}