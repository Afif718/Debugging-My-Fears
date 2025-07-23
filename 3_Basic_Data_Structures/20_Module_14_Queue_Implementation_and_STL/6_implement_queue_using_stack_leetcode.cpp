class MyQueue {
public:
    stack<int> st;  // Main stack to simulate the queue

    // Constructor: Initializes the queue
    MyQueue() {
    }
    
    // Push element x to the back of queue
    void push(int x) {
        st.push(x);  // Push directly to the stack
    }
    
    // Removes the element from the front of queue and returns that element
    int pop() {
        stack<int> st2;  // Temporary stack to reverse the order
        int val;

        // Transfer elements from st to st2, except the last one
        while (!st.empty()) {
            val = st.top();  // Store top element
            st.pop();        // Remove top from st

            // If st is now empty, 'val' is the front of the queue
            if (st.empty()) {
                break;       // Don't push it to st2
            } else {
                st2.push(val);  // Push others to temp stack
            }
        }

        // Push elements back to original stack to maintain order
        while (!st2.empty()) {
            st.push(st2.top());
            st2.pop();
        }

        return val;  // Return the front element (which was last in the stack)
    }
    
    // Get the front element without removing it
    int peek() {
        stack<int> st2;
        int val;

        // Transfer all elements to st2 to access the front
        while (!st.empty()) {
            val = st.top();   // Keep updating val
            st.pop();
            st2.push(val);
        }

        // Push elements back to restore original stack
        while (!st2.empty()) {
            st.push(st2.top());
            st2.pop();
        }

        return val;  // This is the front element
    }
    
    // Returns whether the queue is empty
    bool empty() {
        return st.empty();  // If main stack is empty, queue is empty
    }
};


/*
232. Implement Queue using Stacks
Easy
Topics
premium lock icon
Companies
Implement a first in first out (FIFO) queue using only two stacks. The implemented queue should support all the functions of a normal queue (push, peek, pop, and empty).

Implement the MyQueue class:

void push(int x) Pushes element x to the back of the queue.
int pop() Removes the element from the front of the queue and returns it.
int peek() Returns the element at the front of the queue.
boolean empty() Returns true if the queue is empty, false otherwise.
Notes:

You must use only standard operations of a stack, which means only push to top, peek/pop from top, size, and is empty operations are valid.
Depending on your language, the stack may not be supported natively. You may simulate a stack using a list or deque (double-ended queue) as long as you use only a stack's standard operations.
 

Example 1:

Input
["MyQueue", "push", "push", "peek", "pop", "empty"]
[[], [1], [2], [], [], []]
Output
[null, null, null, 1, 1, false]

Explanation
MyQueue myQueue = new MyQueue();
myQueue.push(1); // queue is: [1]
myQueue.push(2); // queue is: [1, 2] (leftmost is front of the queue)
myQueue.peek(); // return 1
myQueue.pop(); // return 1, queue is [2]
myQueue.empty(); // return false
 

Constraints:

1 <= x <= 9
At most 100 calls will be made to push, pop, peek, and empty.
All the calls to pop and peek are valid.
*/