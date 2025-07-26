#include<bits/stdc++.h>
using namespace std;

// Custom stack implementation using vector
class MyStack{
    public:
        vector<int> st;  // underlying container for stack elements

    void push(int val){
        // Push value at the end of the vector (top of stack)
        st.push_back(val);
    }

    void pop(){
        // Remove the top element if stack is not empty
        if(!st.empty()){
            st.pop_back();
        }
    }

    int size(){
        // Return current number of elements in the stack
        return st.size();
    }

    int top(){
        // Return the top element of the stack (last element of vector)
        return st.back();
    }

    bool empty(){
        // Check if stack is empty
        return st.empty();
    }
};

// Node class for doubly linked list used to implement queue
class Node{
    public:
        int val;       // value stored in the node
        Node* next;    // pointer to next node
        Node* prev;    // pointer to previous node
    
     Node(int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

// Custom queue implementation using doubly linked list
class MyQueue{
    Node* head = NULL;  // pointer to front node of queue
    Node* tail = NULL;  // pointer to rear node of queue
    int q_size = 0;     // tracks number of elements in queue
    public:
        
    void push(int val){
        q_size++;               // increment size since new element is added
        Node* newnode = new Node(val); // create new node with val
        
        // If queue is empty, new node becomes both head and tail
        if(head == NULL){
            head = newnode;
            tail = newnode;
            return;
        }

        // Add new node at the tail (end) of the queue
        tail->next = newnode;   // old tail points forward to new node
        newnode->prev = tail;   // new node points back to old tail
        tail = newnode;         // update tail pointer to new node
    }

    void pop(){
        // Remove the node at the head (front) of the queue
        if(head != NULL){
            Node* delnode = head;  // node to be deleted
            
            head = head->next;     // move head to next node
            
            if(head != NULL){
                head->prev = NULL; // new head's prev must be NULL
            } else{
                // If queue becomes empty after removal
                tail = NULL;      // tail also becomes NULL
            }

            delete delnode;        // free memory for removed node
            q_size--;              // decrement size
        }
    }

    int size(){
        // Return current number of elements in the queue
        return q_size;
    }

    int front(){
        // Return value at the front of the queue
        return head->val;
    }

    bool empty(){
        // Check if queue is empty
        return head == NULL;
    }
};

int main(){

    MyStack st;
    MyQueue q;

    int st_size, q_size;
    cin >> st_size >> q_size;

    // Input elements into stack
    // Visualization: After input 1 2 3, stack looks like [1, 2, 3]
    // Top is 3 (last element pushed)
    for(int i=0; i<st_size; i++){
        int val;
        cin >> val;
        st.push(val);
    }

    // Input elements into queue
    // Visualization: After input 1 2 3, queue looks like front->1->2->3->back
    for(int i=0; i<q_size; i++){
        int val;
        cin >> val;
        q.push(val);
    }

    bool isSame = true; // Flag to check if stack and queue sequences are reverse of each other

    // If sizes differ, they can't represent the reverse sequence
    if(st_size != q_size){
        cout << "NO\n";
        return 0;
    } else{
        // Compare elements until one structure is empty or mismatch found
        while(!st.empty() && !q.empty()){
            // If top of stack (last inserted) != front of queue (first inserted), sequences differ
            if(st.top() != q.front()){
                isSame = false;
                break;
            }

            // Remove matched elements from both
            st.pop();
            q.pop();
        }
    }

    // Output YES if sequences are reverses of each other, else NO
    cout << (isSame ? "YES\n" : "NO\n");
    return 0;
}


/*
problem link: https://www.hackerrank.com/contests/assignment-03-a-basic-data-structure-a-batch-07/challenges/same-or-not-4/problem


question: There is a list of  values that were inserted into a stack and a list of  values that were inserted into a queue. You need to determine whether the stack and queue are the same or not based on the order in which the elements are removed.

Note: You cannot use any  here. You need to implement the stack and queue by yourself. You can use linked list or array as you want.

Input Format

First line will contain  and .
Second line will contain stack  with  values.
Third line will contain queue  with  values.
Constraints

Output Format

Output YES if they were same, otherwise NO.
Sample Input 0

5 5
10 20 30 40 50
50 40 30 20 10
Sample Output 0

YES
Sample Input 1

4 4
10 20 30 40
10 20 30 40
Sample Output 1

NO
Sample Input 2

5 4
1 2 3 4 5
5 4 3 2
Sample Output 2

NO
*/