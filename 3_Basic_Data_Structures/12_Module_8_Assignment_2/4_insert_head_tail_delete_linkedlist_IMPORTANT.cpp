#include<bits/stdc++.h>
using namespace std;

// Node class representing each element in the singly linked list
class Node{
    public:
        int val;       // value stored in the node
        Node* next;    // pointer to the next node

    // Constructor to initialize a new node with a value
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

// Function to insert a node at the head (beginning) of the list
void insert_at_head(Node* &head, Node* &tail, int val){
    Node* newnode = new Node(val); // create new node

    // If the list is empty, the new node becomes both head and tail
    if(head == NULL){
        head = newnode;
        tail = newnode;
        return;
    }

    // Otherwise, insert the new node before the current head
    newnode->next = head;
    head = newnode;
}

// Function to insert a node at the tail (end) of the list
void insert_at_tail(Node* &head, Node* &tail, int val){
    Node* newnode = new Node(val); // create new node

    // If the list is empty, the new node becomes both head and tail
    if(head == NULL){
        head = newnode;
        tail = newnode;
        return;
    }

    // Otherwise, add the new node after the current tail and update tail
    tail->next = newnode;
    tail = newnode;
}

// Function to calculate and return the size (length) of the linked list
int get_size(Node* head){
    Node* temp = head;
    int count_size = 0;

    // Traverse the list and count nodes
    while(temp != NULL){
        count_size++;
        temp = temp->next;
    }

    return count_size;
}

// Function to delete the node at the head (index 0)
void delete_at_head(Node* &head, Node* &tail){
    if (head == NULL) {
        return; // empty list, nothing to delete
    }

    Node* deletenode = head;     // store the node to be deleted
    head = head->next;           // move head to the next node
    delete deletenode;           // delete the original head node

    if(head == NULL){
        // After deletion, if list becomes empty, reset tail too
        tail = NULL;
    }
}

// Function to delete a node at a given valid index (not 0)
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

// Function to print all values in the linked list
void print_node(Node* head){
    Node* temp = head;

    // Traverse the list and print each value
    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
}

int main(){
    Node* head = NULL; // initially empty list
    Node* tail = NULL;

    int queries;
    cin >> queries; // read number of queries

    while(queries--){
        int operations, input;
        cin >> operations >> input;

        // Perform operations based on the type
        if(operations == 0){ // insert at head
            insert_at_head(head, tail, input);
        } 
        else if(operations == 1){ // insert at tail
            insert_at_tail(head, tail, input);
        } 
        else if(operations == 2){ // delete node at specific index
            int size = get_size(head);

            if(input == 0){
                delete_at_head(head, tail); // delete first node
            } 
            else if(input > 0 && input < size){
                delete_node_at_any_position(head, tail, input); // delete at given index
            }
            // if input is invalid index, do nothing
        }

        // Print the list after each operation
        print_node(head);
        cout << endl;
    }

    return 0;
}


/*

Problem Statement

You have a singly linked list which is empty initially. Then you will be given Q queries. In each query you will be given two values X and V.

If X is 0 that means you will insert the value V to the head of the linked list.
If X is 1 then you will insert the value V to the tail of the linked list.
If X is 2 then you will delete the value Vth index of the linked list. Assume that index starts from 0. If the index is invalid, then you shouldn't perform the deletion.
After each query you need to print the linked list.
Note: You must use singly linked list, otherwise you will not get marks.

Input Format

First line will contain Q.
Next Q lines will contain X and V.
Constraints

1 <= Q <= 1000;
0 <= X <= 2;
0 <= V <= 10^9
Output Format

For each query ouput the updated linked list.
Sample Input 0

4
0 10
1 20
1 30
0 40
Sample Output 0

10 
10 20 
10 20 30 
40 10 20 30 
Sample Input 1

11
0 10
2 5
1 20
1 30
0 40
2 0
0 50
2 2
1 60
2 3
2 3
Sample Output 1

10 
10 
10 20 
10 20 30 
40 10 20 30 
10 20 30 
50 10 20 30 
50 10 30 
50 10 30 60 
50 10 30 
50 10 30 
Sample Input 2

10
1 4
2 1
0 9
0 10
2 2
1 5
2 0
2 1
2 5
2 2
Sample Output 2

4 
4 
9 4 
10 9 4 
10 9 
10 9 5 
9 5 
9 
9 
9 

*/