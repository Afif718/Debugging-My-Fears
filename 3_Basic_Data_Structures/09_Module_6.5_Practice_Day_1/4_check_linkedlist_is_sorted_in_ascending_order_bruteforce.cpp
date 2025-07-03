#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int val;
        Node* next;
    
     Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

void check_sorted(Node* head){
    
    Node* temp = head;
    
    int node_size = 0;
    while(temp != NULL){
        temp = temp->next;
        node_size++;
    }

    vector<int> v(node_size);

    Node* vtemp = head;

    for(int i=0; i<node_size; i++){
        v[i] = vtemp->val;
        vtemp = vtemp->next;
    }

    /* size 5
    v[0] <= v[1]
    v[1] <= v[2]
    v[2] <= v[3]
    v[3] <= v[4]
    */

    bool issortedas = true;

    for(int i=0; i<node_size-1; i++){
        // cout << v[i] << " ";
        if(v[i] > v[i+1]){
            issortedas = false;
            break;
        }
    }

    if(issortedas){
        cout << "YES\n"; 
    } else{
        cout << "NO\n";
    }
}

int main(){
    
    Node* head = new Node(2);
    Node* a = new Node(4);
    Node* b = new Node(6);
    Node* c = new Node(5);
    Node* d = new Node(8);
    Node* tail = new Node(4);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = tail;

    check_sorted(head);

    return 0;
}

//problem link: https://docs.google.com/document/d/1KJAVqqr7pqeMR0z5ATAXmKbIQo2JazHf/edit?tab=t.0