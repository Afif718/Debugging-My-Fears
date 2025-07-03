#include<bits/stdc++.h>
using namespace std;

//2 1 5 3 4 8 9

class Node{
    public:
        int val;
        Node* next;
    
     Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

void print_size_of_linkedlist(Node* head){

    Node* temp = head;
    int size = 0;
    while(temp != NULL){
        temp = temp->next;
        size++;
    }

    cout << size <<endl;
}

int main(){

    Node* head = new Node(2);
    Node* a = new Node(1);
    Node* b = new Node(5);
    Node* c = new Node(3);
    // Node* d = new Node(4);
    // Node* e = new Node(8);
    // Node* tail = new Node(9);

    head->next = a;
    a->next = b;
    b->next = c;
    // c->next = d;
    // d->next = e;
    // e->next = tail;

    print_size_of_linkedlist(head);
    
    return 0;
}

//problem link: https://docs.google.com/document/d/1KJAVqqr7pqeMR0z5ATAXmKbIQo2JazHf/edit?tab=t.0