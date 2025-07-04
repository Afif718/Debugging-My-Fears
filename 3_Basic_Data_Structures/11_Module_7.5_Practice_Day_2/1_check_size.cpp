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

int count_size_node(Node* head){
    Node* temp = head;

    int count = 0;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }

    return count;
}

void print_node(Node* head){

    Node* temp = head;

    while(temp != NULL){
        cout << temp->val << endl;
        temp = temp->next;

    }
}

int main(){

    Node* head1 = NULL;
    Node* tail1 = NULL;

    int val1;
    while(true){ // O(n)
        cin >> val1;

        if(val1 == -1){
            break;
        }
 
        insert_at_tail(head1, tail1, val1); //O(1)
    }

    //node 2
    Node* head2 = NULL;
    Node* tail2 = NULL;

    int val2;
    while(true){ // O(n)
        cin >> val2;

        if(val2 == -1){
            break;
        }
 
        insert_at_tail(head2, tail2, val2); //O(1)
    }

    cout << (count_size_node(head1) == count_size_node(head2) ? "YES\n" : "NO\n" );
    
    return 0;
}