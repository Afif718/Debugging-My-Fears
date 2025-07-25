#include <bits/stdc++.h>
using namespace std;

// Function to reverse the elements of a queue
queue<int> reverseQueue(queue<int> q)
{
    stack<int> temp; // Temporary stack to reverse the order of elements

    // Step 1: Transfer all elements from the queue to the stack
    // This reverses the order because stack is LIFO (Last In First Out)
    while(!q.empty()){
        temp.push(q.front()); // Take front of queue and push into stack
        q.pop();              // Remove front from the queue
    }

    /*
        Visualization after step 1:
        Suppose queue = [10, 20, 30, 40, 50]
        Then, stack = top -> 50, 40, 30, 20, 10

        Queue is now empty.
    */

    // Step 2: Transfer all elements back from the stack to the queue
    // This puts the elements in reversed order into the queue
    while(!temp.empty()){
        q.push(temp.top());  // Push top of stack into the queue
        temp.pop();          // Remove the top from the stack
    }

    /*
        Visualization after step 2:
        Now queue = [50, 40, 30, 20, 10]
        Stack is now empty.
    */

    return q; // Return the reversed queue
}

/*
https://www.naukri.com/code360/problems/reversing-a-queue_982934?leftPanelTabValue=PROBLEM

Problem statement
You are given a queue of 'N' elements. Your task is to reverse the order of elements present in the queue.

You can only use the standard operations of the QUEUE STL.

1. enqueue(x): Add an item x to the rear of the queue.

2. dequeue(): Removes an item from the front of the queue.

3. size(): Returns the number of elements in the queue.

4. front(): Finds front element.

5. empty(): Checks whether the queue is empty or not.
Detailed explanation ( Input/output format, Notes, Images )
Constraints:
1 <= T <= 100 
1 <= N <= 3000
-10 ^ 5 <= Queue[i] <= 10 ^ 5

Time Limit: 1 sec
Sample Input 1:
2
1
9
5
10 6 8 12 3
Sample Output 1:
9 
3 12 8 6 10
Explanation 1:
For the first test case, the queue has only one element, i.e. 9. So, even after reversing, our queue remains the same.

For the second test case, the queue has elements in the order: 10, 6, 8, 12, 3. Reversing the queue changes the order of elements to - 3, 12, 8, 6, 10.
Sample Input 2:
2
2
99 89
6
1 2 3 4 5 6
Sample Output 2:
89 99
6 5 4 3 2 1

*/