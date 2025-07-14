#include<bits/stdc++.h>
using namespace std;

// Node class to represent each element in the doubly linked list
class Node{
    public:
        int val;       // value of the node
        Node* next;    // pointer to the next node
        Node* prev;    // pointer to the previous node

        // Constructor to initialize a node with value
        Node(int val){
            this->val = val;
            this->next = NULL;
            this->prev = NULL;
        }
};

// Function to insert a value at the end of the list
void insert_at_tail(Node* &head, Node* &tail, int val){
    Node* newnode = new Node(val); // create new node

    // if list is empty, new node becomes both head and tail
    if(head == NULL){
        head = newnode;
        tail = newnode;
        return;
    }

    // connect new node to the end of the list
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode; // update tail
}

// Function to count number of nodes in the list
int linkedlist_size(Node* head){
    Node* temp = head;
    int size = 0;

    while(temp != NULL){
        size++;
        temp = temp->next;
    }
    return size;
}

// Function to check if two doubly linked lists are the same
void check_same_or_not(Node* head1, Node* head2){
    int list_size1 = linkedlist_size(head1); // size of first list
    int list_size2 = linkedlist_size(head2); // size of second list
    bool isSame = true;

    if(list_size1 == list_size2){
        Node* temp1 = head1;
        Node* temp2 = head2;

        // compare each node's value one by one
        while(temp1 != NULL){
            if(temp1->val != temp2->val){
                isSame = false;
                break;
            }
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
    } else {
        cout << "NO\n"; // sizes are not equal
        return;
    }

    // print result
    if(isSame){
        cout << "YES\n";
    } else{
        cout << "NO\n";
    }
}

// Function to print the list from head to tail
void print_forward(Node* head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
}

int main(){
    Node* head1 = NULL;
    Node* tail1 = NULL;

    // input for first list
    int val1;
    while(true){
        cin >> val1;
        if(val1 == -1) break;
        insert_at_tail(head1, tail1, val1);
    }

    Node* head2 = NULL;
    Node* tail2 = NULL;

    // input for second list
    int val2;
    while(true){
        cin >> val2;
        if(val2 == -1) break;
        insert_at_tail(head2, tail2, val2);
    }

    // check if both lists are same
    check_same_or_not(head1, head2);

    return 0;
}
