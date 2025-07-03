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

void insert_at_any_position(Node* &head, int index, int val){

    //create a new node
    Node* newnode = new Node(val);
    Node* temp = head;

    //now we have to go to the 1 index before the mentioned index
    for(int i=0; i<index-1; i++){
        temp = temp->next;
    }

    newnode->next = temp->next;
    temp->next = newnode;
}

void prient_node(Node* head){

    Node* temp = head;

    while(temp != NULL){
        cout << temp->val << endl;
        temp = temp->next;
    }
}

int main(){
    
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);

    head->next = a;
    a->next = b;

    insert_at_any_position(head, 2, 100);
    insert_at_any_position(head, 2, 200);


    prient_node(head);

    return 0;
}