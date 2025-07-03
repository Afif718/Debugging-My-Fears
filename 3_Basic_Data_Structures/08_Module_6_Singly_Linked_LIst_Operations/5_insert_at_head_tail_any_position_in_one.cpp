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

void insert_at_head(Node* &head, int val){
    //create a new node
    Node* newnode = new Node(val);
    newnode->next = head;
    head = newnode;
}

void insert_at_tail(Node* &head, int val){
    //create a new node
    Node* newnode = new Node(val);

    if(head == NULL){
        head = newnode;
        return;
    }

    Node* temp = head;

    while(temp->next != NULL){
        temp = temp->next;
    }

    temp->next = newnode;

}

void insert_at_any_position(Node* &head, int index, int val){

    //first create a new node
    Node* newnode = new Node(val);
    
    Node* temp = head;

    for(int i=0; i<index-1; i++){
        temp = temp->next;
    }

    newnode->next = temp->next;
    temp->next = newnode;
}

void print_node(Node* head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp->val <<endl;
        temp = temp->next;
    }
}

int main(){

    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);

    head->next = a;
    a->next = b;

    insert_at_head(head, 500);
    insert_at_tail(head, 1000);
    insert_at_any_position(head, 2, 499);

    print_node(head);
    
    return 0;
}