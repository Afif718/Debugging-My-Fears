#include<bits/stdc++.h>
using namespace std;

// Node class for doubly linked list
class Node{
    public:
        int val;       // stores the data
        Node* next;    // pointer to the next node
        Node* prev;    // pointer to the previous node

     // constructor
     Node(int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

// Function to insert a node at the tail of the doubly linked list
void insert_at_tail(Node* &head, Node* &tail, int val){
    // Step 1: Create a new node with the given value
    Node* newnode = new Node(val);

    // Step 2: If list is empty, initialize both head and tail with newnode
    if(head == NULL){
        head = newnode;
        tail = newnode;
        return;
    }

    // Step 3: Link current tail to newnode
    tail->next = newnode;

    // Step 4: Link newnode back to current tail
    newnode->prev = tail;

    // Step 5: Update tail to point to newnode
    tail = newnode;
}

// Function to calculate the size of the doubly linked list
int linkedlist_size(Node* head){
    Node* temp = head;
    int size = 0;

    // Traverse till end of list to count size
    while(temp != NULL){
        size++;
        temp = temp->next;
    }
    return size;
}

// Function to check whether the doubly linked list is a palindrome
void check_palindrome(Node* head, Node* tail){
    bool isPalindrome = true;

    // Compare front and back elements moving inward
    while(head != NULL){
        if(head->val != tail->val){
            isPalindrome = false;
            break;
        }
        head = head->next;
        tail = tail->prev;
    }

    // Output result
    if(isPalindrome){
        cout << "YES\n";
    } else{
        cout << "NO\n";
    }
}

// Function to print the list from head to tail (not used in main but helpful)
void print_forward(Node* head){
    Node* temp = head;

    // Traverse and print each node's value
    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
}

int main(){
    Node* head = NULL;  // Start with an empty list
    Node* tail = NULL;

    int val;
    // Input loop until -1 is encountered
    while(true){
        cin >> val;

        if(val == -1){
            break;  // stop input
        }
        insert_at_tail(head, tail, val); // insert value at the end
    }

    // Check if the doubly linked list is a palindrome
    check_palindrome(head, tail);

    return 0;
}

// Problem link for reference:
// https://docs.google.com/document/d/13vRt1XJ7C_rOw-DXi2-ayTxAPM6zMM67/edit?tab=t.0
