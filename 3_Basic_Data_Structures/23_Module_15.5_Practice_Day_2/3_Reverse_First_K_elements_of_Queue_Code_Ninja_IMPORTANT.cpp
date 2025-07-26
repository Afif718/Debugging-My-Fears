#include <bits/stdc++.h> 
using namespace std;

// Function to reverse the first k elements of a queue
queue<int> reverseElements(queue<int> q, int k)
{
    stack<int> st;
    int count = 0;

    // Step 1: Push first k elements from queue into stack
    // This reverses the first k elements
    //
    // Suppose q initially: front -> [10, 20, 30, 40, 50] <- back
    //
    // After this loop:
    //    stack (top to bottom): [30, 20, 10]
    //    queue: front -> [40, 50] <- back
    while(count < k && !q.empty()){
        st.push(q.front());
        q.pop();
        count++;
    }

    // Step 2: Store the remaining elements in a new queue
    // q2 will store [40, 50] temporarily
    //
    // q2: front -> [40, 50] <- back
    queue<int> q2;
    while(!q.empty()){
        q2.push(q.front());
        q.pop();
    }

    // Step 3: Add the reversed elements from the stack back to original queue
    // q now: front -> [30, 20, 10]
    while(!st.empty()){
        q.push(st.top());
        st.pop();
    }

    // Step 4: Add the remaining elements (which were in correct order) back to q
    // Final queue: front -> [30, 20, 10, 40, 50] <- back
    while(!q2.empty()){
        q.push(q2.front());
        q2.pop();
    }

    return q;
}


/*
Problem link: https://www.naukri.com/code360/problems/reverse-first-k-elements-of-queue_982771?leftPanelTabValue=PROBLEM

question: 

Problem statement
You are given a QUEUE containing ‘N’ integers and an integer ‘K’. You need to reverse the order of the first ‘K’ elements of the queue, leaving the other elements in the same relative order.

You can only use the standard operations of the QUEUE STL:

1. enqueue(x) : Adds an item x to rear of the queue
2. dequeue() : Removes an item from front of the queue
3. size() : Returns number of elements in the queue.
4. front() : Finds the front element.
For Example:
Let the given queue be { 1, 2, 3, 4, 5 } and K be 3.
You need to reverse the first K integers of Queue which are 1, 2, and 3.
Thus, the final response will be { 3, 2, 1, 4, 5 }.
Detailed explanation ( Input/output format, Notes, Images )
Constraints:
1 <= T <= 10
1 <= N <= 10 ^ 5
0 <= K <= N
-10 ^ 9 <= queue elements <= 10 ^ 9

  Time limit: 1 sec
Sample Input 1:
2
5 3
1 2 3 4 5
4 2
6 2 4 1
Sample Output 1:
3 2 1 4 5
2 6 4 1
Explanation:
For test case 1: Refer to the example explained above.

For test case 2:
The queue after reversing the first 2 elements i.e., 6 and 2 will be { 2, 6, 4, 1 }.
Sample Input 2:
2
5 2
5 3 2 6 4
4 4
1 2 3 4
Sample Output 2:
3 5 2 6 4
4 3 2 1
*/