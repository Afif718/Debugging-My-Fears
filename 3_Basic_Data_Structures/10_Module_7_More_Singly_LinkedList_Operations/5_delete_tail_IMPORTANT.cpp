#include<bits/stdc++.h>
using namespace std;

// Define the structure of each Node in the linked list
class Node{
public:
    int val;        // The value/data of the node
    Node* next;     // Pointer to the next node

    // Constructor to initialize the value and next pointer
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

// Insert a new node at the tail (end) of the list
void insert_at_tail(Node* &head, Node* &tail, int val){
    Node* newnode = new Node(val);

    // If the list is empty, newnode is both head and tail
    if(head == NULL){
        head = newnode;
        tail = newnode;
        return;
    }

    // Otherwise, connect the current tail to the new node and update tail
    tail->next = newnode;
    tail = newnode;
}

/*
Delete node at a given index, and if it's the last node (tail), update the tail pointer.
Note: index is 0-based. 
For example:
List: 10 -> 20 -> 30 -> 40
index = 3 → deletes 40
*/
void delete_tail(Node* &head, Node* &tail, int index){
    Node* temp = head;

    // Traverse to the node just before the one we want to delete
    for(int i = 0; i < index - 1; i++){
        temp = temp->next;
    }

    /*
    Visualization:
    Let's say the list is:
    head -> [10] -> [20] -> [30] -> [40] -> NULL
                          (temp)     (tail)
    
    If index = 3:
    - We want to delete node at index 3 i.e., [40]
    - temp = node at index 2 i.e., [30]
    */

    Node* deletenode = temp->next;            // The node we want to delete
    temp->next = temp->next->next;            // Bypass the node to delete
    delete deletenode;                        // Free the memory of deleted node
    tail = temp;                              // Update tail to the new last node
}

// Print the entire linked list
void print_node(Node* head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp->val << endl;
        temp = temp->next;
    }
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;

    int val;

    // Input values to create the linked list (terminated by -1)
    while(true){ // O(n)
        cin >> val;
        if(val == -1) break;

        insert_at_tail(head, tail, val); // O(1) insertion at tail
    }

    // Ask user for the index of node to delete
    int del_index;
    cin >> del_index;

    cout << "Tail before deletion: " << tail->val << endl;

    // Delete the node at the given index and update tail if needed
    delete_tail(head, tail, del_index);

    // Print updated linked list
    print_node(head);

    // Print updated tail
    cout << "Tail after deletion: " << tail->val;

    return 0;
}
