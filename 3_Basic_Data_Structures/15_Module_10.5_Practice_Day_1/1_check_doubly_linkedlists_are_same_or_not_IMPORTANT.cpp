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

//check size of double linkedlist
int linkedlist_size(Node* head){
    Node* temp = head;

    int size = 0;

    while(temp != NULL){
        size++;
        temp = temp->next;
    }
    return size;
}

void check_same_or_not(Node* head1, Node* head2){
    int list_size1 = linkedlist_size(head1);
    int list_size2 = linkedlist_size(head2);
    bool isSame = true;

    if(list_size1 == list_size2){
        Node* temp = head1;
        while(temp != NULL){
            if(head1->val != head2->val){
                isSame = false;
                break;
            }
            temp = temp->next;
        }
    }else{
        cout << "NO\n";
        return;
    }

    if(isSame){
        cout << "YES\n";
    } else{
        cout << "NO\n";
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
    
    Node* head1 = NULL;  // Initially the list is empty
    Node* tail1 = NULL;

    int val1;
    while(true){
        cin >> val1;

        if(val1 == -1){
            break;
        }
        insert_at_tail(head1, tail1, val1);
    }

    Node* head2 = NULL;  // Initially the list is empty
    Node* tail2 = NULL;

    int val2;
    while(true){
        cin >> val2;

        if(val2 == -1){
            break;
        }
        insert_at_tail(head2, tail2, val2);
    }

    check_same_or_not(head1, head2);

    return 0;
}