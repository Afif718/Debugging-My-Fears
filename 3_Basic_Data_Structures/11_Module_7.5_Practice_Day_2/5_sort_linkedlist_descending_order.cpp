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

void insert_at_tail(Node* &head, Node* &tail, int val){
    Node* newnode = new Node(val);

    if(head == NULL){
        head = newnode;
        tail = newnode;
        return;
    }

    tail->next = newnode;
    tail = newnode;
}

void sort_decending_order(Node* head){
    for(Node* i=head; i->next != NULL; i = i->next){
        for(Node* j=i->next; j != NULL; j = j->next){
            if(i->val < j->val){
                swap(i->val, j->val);
            }
        }
    }
}

void print_node(Node* head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp->val <<endl;
        temp = temp->next;
    }
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;

    while(true){
        int val;
        cin >> val;

        if(val == -1){
            break;
        }

        insert_at_tail(head, tail, val);
    }

    sort_decending_order(head);
    print_node(head);

    return 0;
}

//problem link: https://docs.google.com/document/d/1EXLsPmtlVXNjdqk49BCcLbPHf0n4UBlP/edit?tab=t.0