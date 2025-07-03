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
    

    bool issortedas = true;

    while(temp != NULL && temp->next != NULL){

        if(temp->val > temp->next->val){
            issortedas = false;
            break;
        }

        temp = temp->next;
    }

    if(issortedas){
        cout << "YES\n"; 
    } else{
        cout << "NO\n";
    }
}

int main(){
    
    Node* head = new Node(1);
    Node* a = new Node(4);
    Node* b = new Node(6);
    Node* c = new Node(8);
    Node* d = new Node(10);
    Node* tail = new Node(14);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = tail;

    check_sorted(head);

    return 0;
}

//problem link: https://docs.google.com/document/d/1KJAVqqr7pqeMR0z5ATAXmKbIQo2JazHf/edit?tab=t.0