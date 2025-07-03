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

    if(node_size % 2 == 0){
        cout << v[(node_size / 2) - 1] << " " << v[(node_size / 2)];
    } else{
        cout << v[(node_size / 2)];
    }
}

int main(){
    
    Node* head = new Node(2);
    Node* a = new Node(4);
    Node* b = new Node(6);
    Node* c = new Node(8);
    Node* d = new Node(10);
    //Node* tail = new Node(6);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    //d->next = tail;

    check_sorted(head);

    return 0;
}