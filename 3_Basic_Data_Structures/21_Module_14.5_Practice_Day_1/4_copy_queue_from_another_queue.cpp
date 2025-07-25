#include<bits/stdc++.h>
using namespace std;

int main() {
    // Declare a queue to store input values
    queue<int> q;

    int q_size;
    cin >> q_size; // Input the number of elements

    // Take 'q_size' number of inputs and push them into the queue
    for(int i = 0; i < q_size; i++) {
        int val;
        cin >> val;
        q.push(val); // Elements are added at the back (FIFO)
    }

    /*
        Visualization at this point (q):
        If input is: 10 20 30 40 50
        Queue (q) front → 10 20 30 40 50 ← back
    */

    // Declare a stack to reverse the order
    stack<int> st;

    // Transfer all elements from queue to stack
    while(!q.empty()) {
        st.push(q.front()); // Push front of queue to top of stack
        q.pop();            // Remove element from queue
    }

    /*
        Visualization at this point (st):
        Stack top → 10 20 30 40 50 → bottom
        (Since queue was FIFO, and stack is LIFO, the last element of queue is now on top)
        So, stack after pushing: top → 50 40 30 20 10
    */

    // Declare another queue to store elements in reverse order
    queue<int> q2;

    // Transfer elements from stack to the new queue
    while(!st.empty()) {
        q2.push(st.top()); // Push top of stack to back of queue
        st.pop();          // Remove element from stack
    }

    /*
        Visualization at this point (q2):
        Queue (q2) front → 50 40 30 20 10 ← back
        This is the reverse of the original input
    */

    // Print the reversed queue
    while(!q2.empty()) {
        cout << q2.front() << " "; // Print front of the queue
        q2.pop();                  // Remove element after printing
    }

    return 0;
}


/*
Question: Take a queue of size N as input. You need to copy those elements in another queue in reverse order. You might use stack here. You should use STL to solve this problem. After copying in another queue, print the elements of that queue.

Sample Input
Sample Output
5
10 20 30 40 50
50 40 30 20 10


*/