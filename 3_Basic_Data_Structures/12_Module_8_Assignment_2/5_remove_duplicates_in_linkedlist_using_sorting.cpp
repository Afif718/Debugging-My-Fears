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

void sort_linkedlist(Node* &head){
    for(Node* i=head; i->next != NULL; i = i->next){
        for(Node* j= i->next; j != NULL; j = j->next){
            if(i->val > j->val){
                swap(i->val, j->val);
            }
        }
    }
}

void remove_duplicate_from_linkedlist(Node* head){
    Node* temp = head;

    while(temp != NULL && temp->next != NULL){
        if(temp->val == temp->next->val){
            Node* duplicate = temp->next;
            temp->next = temp->next->next;
            delete duplicate;
        } else{
            temp = temp->next;
        }
        
    }
}

void delete_node_at_any_position(Node* &head, Node* &tail, int index){
    Node* temp = head;

    // Traverse to the node before the one we want to delete
    for(int i = 0; i < index - 1; i++){
        temp = temp->next;
    }

    Node* deletenode = temp->next;       // node to be deleted
    temp->next = temp->next->next;       // bypass the node to be deleted

    if (deletenode == tail) {
        // If the deleted node was the tail, update tail
        tail = temp;
    }

    delete deletenode; // delete the node
}


void print_node(Node* head){
    if(head == NULL) {
        return;
    }
    
    cout << head->val;
    Node* temp = head->next;

    while(temp != NULL){
        cout << " " << temp->val;
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
    
    sort_linkedlist(head);
    remove_duplicate_from_linkedlist(head);
    print_node(head);
    return 0;
}

