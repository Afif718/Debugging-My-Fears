#include <bits/stdc++.h>
using namespace std;

class MinStack {
public:
    stack<int> st;      // Main stack to store all values
    stack<int> min_st;  // Auxiliary stack to keep track of minimum values

    // Constructor initializes the stack
    MinStack() {
        // No initialization needed as stacks are empty by default
    }

    // Push a value onto the stack
    void push(int val) {
        st.push(val);  // Push value to the main stack

        // If min_st is empty or current val is smaller or equal to the current minimum,
        // we also push it to min_st to update the minimum tracking
        if(min_st.empty() || val <= min_st.top()){
            min_st.push(val);
        }

        // Visualization:
        // Suppose val = -3, st = [ -2, 0 ] → push -3
        // st becomes:     [ -2, 0, -3 ]
        // min_st becomes: [ -2, -3 ] if -3 < top of min_st (-2)
    }

    // Remove the top element from the stack
    void pop() {
        // If the top of main stack is equal to top of min stack,
        // it means the minimum element is being removed, so remove it from both stacks
        if(st.top() == min_st.top()){
            min_st.pop();
        }

        // Always pop from the main stack
        st.pop();

        // Visualization:
        // st = [ -2, 0, -3 ], min_st = [ -2, -3 ]
        // after pop():
        // st = [ -2, 0 ], min_st = [ -2 ]
    }

    // Return the top element of the main stack
    int top() {
        return st.top();
    }

    // Return the current minimum element in the stack
    int getMin() {
        return min_st.top();
    }
};

/*
How it works:

Let’s walk through an example:
Input:
["MinStack","push","push","push","getMin","pop","top","getMin"]
[[],        [-2],  [0],   [-3],    [],       [],   [],     []]

Step-by-step:

1. MinStack minStack;
   → st = [ ]
   → min_st = [ ]

2. minStack.push(-2);
   → st = [ -2 ]
   → min_st = [ -2 ]  // since -2 is the only element, it's also min

3. minStack.push(0);
   → st = [ -2, 0 ]
   → min_st = [ -2 ]  // 0 is not <= -2, so not pushed to min_st

4. minStack.push(-3);
   → st = [ -2, 0, -3 ]
   → min_st = [ -2, -3 ]  // -3 is < current min (-2), so pushed

5. minStack.getMin(); // returns -3

6. minStack.pop();
   → st = [ -2, 0 ]
   → min_st = [ -2 ]  // since top of both stacks was -3, remove from both

7. minStack.top(); // returns 0

8. minStack.getMin(); // returns -2

Why this works in O(1) time:
- All operations (`push`, `pop`, `top`, `getMin`) are direct stack operations (push/pop/top), all done in constant time.
- The `min_st` always contains the minimums in sync with `st`, so no need to iterate or search for min.

*/


/*
https://leetcode.com/problems/min-stack/

155. Min Stack
Medium
Topics
premium lock icon
Companies
Hint
Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.

Implement the MinStack class:

MinStack() initializes the stack object.
void push(int val) pushes the element val onto the stack.
void pop() removes the element on the top of the stack.
int top() gets the top element of the stack.
int getMin() retrieves the minimum element in the stack.
You must implement a solution with O(1) time complexity for each function.

 

Example 1:

Input
["MinStack","push","push","push","getMin","pop","top","getMin"]
[[],[-2],[0],[-3],[],[],[],[]]

Output
[null,null,null,null,-3,null,0,-2]

Explanation
MinStack minStack = new MinStack();
minStack.push(-2);
minStack.push(0);
minStack.push(-3);
minStack.getMin(); // return -3
minStack.pop();
minStack.top();    // return 0
minStack.getMin(); // return -2
 

Constraints:

-231 <= val <= 231 - 1
Methods pop, top and getMin operations will always be called on non-empty stacks.
At most 3 * 104 calls will be made to push, pop, top, and getMin.
*/