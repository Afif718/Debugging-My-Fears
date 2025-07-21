#include<bits/stdc++.h>
using namespace std;

// Node class representing each element in the doubly linked list
class Node {
public:
    int val;        // Stores the value of the node
    Node* next;     // Pointer to the next node
    Node* prev;     // Pointer to the previous node

    // Constructor to initialize a node with a given value
    Node(int val) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

// Custom Queue class implemented using a doubly linked list
class myQueue {
public:
    Node* head = NULL;   // Points to the front of the queue
    Node* tail = NULL;   // Points to the rear of the queue
    int size_list = 0;   // Tracks the number of elements in the queue

    // Insert a new element at the back (tail) of the queue — O(1)
    void push(int val) {
        size_list++; // Increment size
        Node* newnode = new Node(val); // Create new node with given value

        if (head == NULL) { // If queue is empty
            head = newnode; // Set head and tail to new node
            tail = newnode;
            return;
        }

        // Link the new node after the current tail
        tail->next = newnode;    // Set current tail's next to new node
        newnode->prev = tail;    // Set new node's prev to current tail
        tail = newnode;          // Update tail to new node
    }

    // Remove an element from the front (head) of the queue — O(1)
    void pop() {
        size_list--; // Decrease size

        Node* delnode = head;     // Store the node to delete
        head = head->next;        // Move head to the next node
        delete delnode;           // Delete the old head node

        if (head == NULL) {       // If queue becomes empty
            tail = NULL;          // Set tail to NULL as well
            return;
        }

        head->prev = NULL;        // Set new head's prev to NULL
    }

    // Return the front value (element at head)
    int front() {
        return head->val;
    }

    // Return the back value (element at tail)
    int back() {
        return tail->val;
    }

    // Return the number of elements in the queue
    int size() {
        return size_list;
    }

    // Check if the queue is empty
    bool empty() {
        return head == NULL;
    }
};

int main() {

    myQueue q; // Create a queue instance

    int queue_size;
    cin >> queue_size; // Take number of elements to be inserted

    // Insert elements into the queue
    for (int i = 0; i < queue_size; i++) {
        int val;
        cin >> val;
        q.push(val);
    }

    // Print front, back, size, and empty status of the queue
    cout << q.front() << " " << q.back() << " " << q.size() << " " << q.empty() << endl;
    
    // Dequeue and print each element until queue becomes empty
    while (!q.empty()) {
        cout << q.front() << " "; // Print front element
        q.pop();                  // Remove front element
    }

    return 0;
}
