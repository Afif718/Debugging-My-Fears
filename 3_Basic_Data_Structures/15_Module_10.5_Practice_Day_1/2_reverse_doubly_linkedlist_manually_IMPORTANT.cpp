#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int val;       
        Node* next;    
        Node* prev;    

     Node(int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_at_tail(Node* &head, Node* &tail, int val){
    // Step 1: Create a new node with the given value
    Node* newnode = new Node(val);

    // Step 2: If list is empty, initialize both head and tail with newnode
    if(head == NULL){
        head = newnode;
        tail = newnode;
        return;
    }

    // If list is not empty:
    // Step 3: Set current tail's next to the new node
    tail->next = newnode;

    // Step 4: Set new node's prev to the current tail
    newnode->prev = tail;

    // Step 5: Update the tail to point to the new node
    tail = newnode;
}

void reverse_linkedlist(Node* head, Node* tail){
    for(Node *i= head, *j=tail; i != j && i->prev !=j ; i=i->next, j=j->prev){
        swap(i->val , j->val);
    }
}

// Function to print the list from head to tail (forward direction)
void print_forward(Node* head){
    Node* temp = head;

    // Traverse the list using next pointers
    while(temp != NULL){
        cout << temp->val << " ";  // print current node's value
        temp = temp->next;         // move to next node
    }
}


int main(){
    
    Node* head = NULL;  // Initially the list is empty
    Node* tail = NULL;

    int val;
    while(true){
        cin >> val;

        if(val == -1){
            break;
        }
        insert_at_tail(head, tail, val);
    }


    reverse_linkedlist(head, tail);
    // Print the list in forward direction: expected output: 599 699 799 899
    print_forward(head);

    return 0;
}