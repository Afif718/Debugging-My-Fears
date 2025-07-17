#include<bits/stdc++.h>
using namespace std;

// Node class representing each element in the doubly linked list
class Node{
    public:
        int val;        // Stores the value/data
        Node* next;     // Pointer to the next node
        Node* prev;     // Pointer to the previous node
    
     // Constructor to initialize a node with value, and set pointers to NULL
     Node(int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

// Inserts a new node at the beginning of the doubly linked list
void insert_at_head(Node* &head, Node* &tail, int val){
    Node* newnode = new Node(val);  // Create new node

    // If list is empty, newnode becomes both head and tail
    if(head == NULL){
        head = newnode;
        tail = newnode;
        return;
    }

    // Connect new node to the current head
    newnode->next = head;
    head->prev = newnode;

    // Update head to point to the new node
    head = newnode;
}

// Inserts a new node at a specific index (not head or tail)
void insert_at_any_position(Node* &head, Node* &tail, int index, int val){
    Node* newnode = new Node(val);  // Create new node
    Node* temp = head;

    // Special case (shouldn't normally occur now, handled in main): empty list
    if(head == NULL){
        head = newnode;
        tail = newnode;
        return;
    }

    // Traverse to the node just before the desired index
    for(int i = 0; i < index - 1; i++){
        temp = temp->next;
    }

    // Insert newnode between temp and temp->next
    newnode->next = temp->next;            // Point newnode's next to the current next node
    temp->next->prev = newnode;            // Set that next node's prev to newnode
    temp->next = newnode;                  // Connect temp to newnode
    newnode->prev = temp;                  // Set newnode's prev to temp
}

// Inserts a new node at the end of the doubly linked list
void insert_at_tail(Node* &head, Node* &tail, int val){
    Node* newnode = new Node(val);  // Create new node

    // If list is empty, newnode becomes both head and tail
    if(head == NULL){
        head = newnode;
        tail = newnode;
        return;
    }

    // Connect newnode to the current tail
    tail->next = newnode;
    newnode->prev = tail;

    // Update tail to point to the new node
    tail = newnode;
}

// Returns the size of the linked list
int size_of_list(Node* head){
    Node* temp = head;
    int count_size = 0;

    // Traverse the list to count number of nodes
    while(temp != NULL){
        count_size++;
        temp = temp->next;
    }

    return count_size;
}

// Prints the list from left to right (head to tail)
void print_list_forward(Node* head){
    Node* temp = head;

    cout << "L -> ";
    while(temp != NULL){
        cout << temp->val << " ";  // Print value
        temp = temp->next;         // Move forward
    }
    cout << "\n";
}

// Prints the list from right to left (tail to head)
void print_list_backward(Node* tail){
    Node* temp = tail;

    cout << "R -> ";
    while(temp != NULL){
        cout << temp->val << " ";  // Print value
        temp = temp->prev;         // Move backward
    }
    cout << "\n";
}

int main(){
    Node* head = NULL;  // Initialize empty list
    Node* tail = NULL;

    int queries;
    cin >> queries;     // Read number of queries

    while(queries--){
        int position, val;
        cin >> position >> val;   // Read index and value to insert

        // Check if the index is invalid (larger than current size)
        if(position > size_of_list(head)){
            cout << "Invalid\n";
        } else {
            // Insert at head if index is 0
            if(position == 0){
                insert_at_head(head, tail, val);
            }
            // Insert at tail if index equals current list size
            else if(position == size_of_list(head)){
                insert_at_tail(head, tail, val);
            }
            // Insert in between otherwise
            else {
                insert_at_any_position(head, tail, position, val);
            }

            // Print list after successful insertion
            print_list_forward(head);
            print_list_backward(tail);
        }
    }

    return 0;
}


/*
Problem Statement

You have a doubly linked list which is empty initially. Then you will be given Q queries. In each query you will be given two values X and V.

You need to insert the value V at index X. Assume that index starts from 0.
After that for each query you need to print the linked list from left to right and right to left.
If the index is invalid, then print "Invalid".
Note: You must use Doubly Linked List, otherwise you will not get marks.

Input Format

First line will contain Q.
Next Q lines will contain X and V.
Constraints

1 <= Q <= 1000;
0 <= X <= 1000;
0 <= V <= 1000
Output Format

For each query print the linked list from left to right and right to left or print "Invalid" as asked.
Print "L -> " before printing the linked list from left to right.
Print "R -> " before printing the linked list from right to left.
Sample Input 0

5
1 10
0 10
1 20
3 30
2 30
Sample Output 0

Invalid
L -> 10 
R -> 10 
L -> 10 20 
R -> 20 10 
Invalid
L -> 10 20 30 
R -> 30 20 10 
Sample Input 1

10
0 10
1 20
0 30
1 40
6 50
0 60
4 70
4 80
2 90
1 100
Sample Output 1

L -> 10 
R -> 10 
L -> 10 20 
R -> 20 10 
L -> 30 10 20 
R -> 20 10 30 
L -> 30 40 10 20 
R -> 20 10 40 30 
Invalid
L -> 60 30 40 10 20 
R -> 20 10 40 30 60 
L -> 60 30 40 10 70 20 
R -> 20 70 10 40 30 60 
L -> 60 30 40 10 80 70 20 
R -> 20 70 80 10 40 30 60 
L -> 60 30 90 40 10 80 70 20 
R -> 20 70 80 10 40 90 30 60 
L -> 60 100 30 90 40 10 80 70 20 
R -> 20 70 80 10 40 90 30 100 60 
*/