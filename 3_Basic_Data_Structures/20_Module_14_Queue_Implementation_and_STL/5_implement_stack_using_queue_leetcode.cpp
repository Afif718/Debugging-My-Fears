class MyStack {
public:
    queue<int> q; // Main queue to simulate stack behavior

    MyStack() {
        // Constructor: initializes an empty stack
    }

    void push(int x) {
        // Simply enqueue the element at the back
        q.push(x);
    }

    int pop() {
        // Temporary queue to rearrange elements and access the last pushed (top) element
        queue<int> q2;
        int val;

        // Transfer all elements except the last into q2
        while (!q.empty()) {
            val = q.front(); // Get front element
            q.pop();         // Remove it from main queue

            if (q.empty()) {
                // If it's the last element, break and return it (simulate stack's pop)
                break;
            } else {
                q2.push(val); // Otherwise, move to q2
            }
        }

        // Reassign q2 to q (for future operations)
        q = q2;
        return val; // Return the top (last pushed) element
    }

    int top() {
        // Return the last inserted element (which is at the back of the queue)
        return q.back();
    }

    bool empty() {
        // Check if the stack is empty
        return q.empty();
    }
};


/*
225. Implement Stack using Queues
Solved
Easy
Topics
premium lock icon
Companies
Implement a last-in-first-out (LIFO) stack using only two queues. The implemented stack should support all the functions of a normal stack (push, top, pop, and empty).

Implement the MyStack class:

void push(int x) Pushes element x to the top of the stack.
int pop() Removes the element on the top of the stack and returns it.
int top() Returns the element on the top of the stack.
boolean empty() Returns true if the stack is empty, false otherwise.
Notes:

You must use only standard operations of a queue, which means that only push to back, peek/pop from front, size and is empty operations are valid.
Depending on your language, the queue may not be supported natively. You may simulate a queue using a list or deque (double-ended queue) as long as you use only a queue's standard operations.
 

Example 1:

Input
["MyStack", "push", "push", "top", "pop", "empty"]
[[], [1], [2], [], [], []]
Output
[null, null, null, 2, 2, false]

Explanation
MyStack myStack = new MyStack();
myStack.push(1);
myStack.push(2);
myStack.top(); // return 2
myStack.pop(); // return 2
myStack.empty(); // return False
 

Constraints:

1 <= x <= 9
At most 100 calls will be made to push, pop, top, and empty.
All the calls to pop and top are valid.
 
*/