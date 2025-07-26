#include <bits/stdc++.h> 
using namespace std;

class Queue {
public:
    vector<int> v;  // Underlying container to simulate the queue

    Queue() {
        // Constructor initializes the vector implicitly
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        // Checks if the vector is empty
        return v.empty();
    }

    void enqueue(int data) {
        // Enqueue: Add element at the end of the vector
        // Visualization:
        // Before enqueue(5): [ ]
        // After enqueue(5): [5]
        // After enqueue(10): [5, 10]
        v.push_back(data);
    }

    int dequeue() {
        // Dequeue: Remove element from the front (0-th index)
        // Visualization:
        // Before dequeue(): [5, 10, 15]
        // After dequeue(): [10, 15], returns 5
        if (!v.empty()) {
            int val = v.front();         // Store the front value
            v.erase(v.begin());          // Remove the front element (O(n) operation)
            return val;                  // Return the removed value
        }
        return -1;  // Return -1 if queue is empty
    }

    int front() {
        // Returns the front element of the queue without removing it
        // Visualization:
        // front() of [10, 20, 30] is 10
        if (!v.empty()) {
            return v.front();
        }
        return -1;
    }
};

/*
Problem link: https://www.naukri.com/code360/problems/queue-using-array-or-singly-linked-list_2099908?leftPanelTabValue=PROBLEM

question: Implement a Queue Data Structure specifically to store integer data using a Singly Linked List or an array.

You need to implement the following public functions :

1. Constructor: It initializes the data members as required.

2. enqueue(data): This function should take one argument of type integer. It enqueues the element into the queue.

3. dequeue(): It dequeues/removes the element from the front of the queue and in turn, returns the element being dequeued or removed. In case the queue is empty, it returns -1.

4. front(): It returns the element being kept at the front of the queue. In case the queue is empty, it returns -1.

5. isEmpty(): It returns a boolean value indicating whether the queue is empty or not.
Operations Performed on the Queue :
Query-1(Denoted by an integer 1): Enqueues integer data to the queue.

Query-2(Denoted by an integer 2): Dequeues the data kept at the front of the queue and returns it to the caller, return -1 if no element is present in the queue.

Query-3(Denoted by an integer 3): Fetches and returns the data being kept at the front of the queue but doesn't remove it, unlike the dequeue function, return -1 if no element is present in the queue.

Query-4(Denoted by an integer 4): Returns a boolean value denoting whether the queue is empty or not.
Detailed explanation ( Input/output format, Notes, Images )
Constraints :
1 <= t <= 5
1 <= q <= 5000
1 <= x <= 4
1 <= data <= 2^31 - 1

Time Limit: 1 sec
Sample Input 1 :
1
7
1 17
1 23
1 11
2
2
2
2
Sample Output 1 :
17
23
11
-1
Explanation for Sample Output 1 :
The first three queries are of enQueue, so we will push 17, 23, and 11 into the queue.

The next four queries are of deQueue, so we will starting removing elements from the queue, so the first element will be 17, then 23, and then 11. And after the third dequeue query, the queue is now empty so for the fourth query, we will return -1.
Sample Input 2 :
1
3
2
1 10
3
Sample Output 2 :
-1 
10


*/