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

void reverse_linkedlist(Node* &head, Node* &tail, Node* temp){
    if(temp->next == NULL){
        head = temp;
        return;
    }

    reverse_linkedlist(head, tail, temp->next);
    temp->next->next = temp;
    temp->next = NULL;
    tail = temp;
}

void print_node(Node* head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
}

void print_reverse_node(Node* head){
    Node* temp = head;

    if(head == NULL){
        return;
    }

    print_reverse_node(temp->next);
     //print
    cout << head->val << " ";
}

int main(){

    Node* head = NULL;
    Node* tail = NULL;

    int val;
    while (true)
    {
        cin >> val;

        if(val == -1){
            break;
        }
        
        insert_at_tail(head, tail, val);
    }
    
    
    //print_node(head);
    //print_reverse_node(head);
    //cout << endl;
    reverse_linkedlist(head, tail, head);
    print_node(head);    
    cout << endl;
    cout << head->val << endl;
    cout << tail->val << endl;
    return 0;
}