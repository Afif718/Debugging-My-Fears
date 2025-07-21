#include<bits/stdc++.h>
using namespace std;

/*
    QUEUE: A queue is a linear data structure that follows the FIFO (First In, First Out) principle.
    This means the element inserted first will be removed first.

    Operations:
    1. push(val)   -> Insert an element at the back of the queue.   O(1)
    2. pop()       -> Remove the element from the front of the queue. O(1)
    3. front()     -> Access the front element.                     O(1)
    4. back()      -> Access the last element.                      O(1)
    5. size()      -> Get number of elements.                       O(1)
    6. empty()     -> Check if the queue is empty.                 O(1)

    Why do we need a queue?
    - Useful when you want to process items in the order they were added.
    - Ideal for **task scheduling**, **waiting lines**, **CPU job scheduling**, **data streams**, etc.

    Real-world example:
    - Think of a queue in front of a ticket counter:
      The person who arrives first is served first — this is exactly how queue works.

    This implementation uses a **linked list** so insertion and deletion are done in O(1) time.
*/

class Node {
public:
    int val;
    Node* next;

    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

// Custom queue class using linked list
class myQueue {
public:
    Node* head = NULL; // front of the queue
    Node* tail = NULL; // back of the queue
    int size_list = 0; // tracks current number of elements

    // Insert an element at the back
    void push(int val) {
        size_list++;
        Node* newnode = new Node(val);

        if (head == NULL) { // if queue is empty
            head = newnode;
            tail = newnode;
            return;
        }

        tail->next = newnode; // attach new node to the end
        tail = newnode;       // move tail to the new node
    }

    // Dequeue: Remove element from the front of the queue
    // Time Complexity: O(1)
    void pop(){
        if(head == NULL) return; // Edge case: do nothing if queue is already empty

        size_list--;
        Node* delnode = head;
        head = head->next;
        delete delnode;

        // If queue becomes empty after pop, reset tail as well
        if(head == NULL){
            tail = NULL;
        }
    }

    // Return the front element of the queue without removing it
    // Time Complexity: O(1)
    int front(){
        if(head == NULL) {
            cout << "Queue is empty\n";
            return -1;
        }
        return head->val;
    }

    // Return the last element (at the back) of the queue
    // Time Complexity: O(1)
    int back(){
        if(tail == NULL) {
            cout << "Queue is empty\n";
            return -1;
        }
        return tail->val;
    }

    // Returns number of elements currently in the queue
    // Time Complexity: O(1)
    int size(){
        return size_list;
    }

    // Returns true if queue is empty, false otherwise
    // Time Complexity: O(1)
    bool empty(){
        return head == NULL;
    }
};


int main(){
    myQueue q;
    
    int queue_size;
    cin >> queue_size; // Input number of elements to enqueue

    // Enqueue the input values into the queue
    for(int i = 0; i < queue_size; i++){
        int val;
        cin >> val;
        q.push(val);
    }

    // Uncomment below to see front, back, size and empty status before popping
    // cout << q.front() << " " << q.back() << " " << q.size() << " " << q.empty() << endl;

    // Print and dequeue all elements from the queue
    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}
