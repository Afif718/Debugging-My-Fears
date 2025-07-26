#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<int> st;  // Stack to store elements (LIFO order)
    queue<int> q;   // Queue to store elements (FIFO order)

    int st_size, q_size;
    cin >> st_size >> q_size;

    // Input values for stack
    // Visualization: If input is 1 2 3, then stack top is 3, bottom is 1
    for(int i=0; i<st_size; i++){
        int val;
        cin >> val;
        st.push(val);
    }

    // Input values for queue
    // Visualization: If input is 1 2 3, then queue front is 1, back is 3
    for(int i=0; i<q_size; i++){
        int val;
        cin >> val;
        q.push(val);
    }

    bool isSame = true; // Flag to check if sequences are the same in reversed order

    // If sizes differ, they can't be same in reverse order
    if(st_size != q_size){
        cout << "NO\n";
        return 0;
    } else{
        // Compare elements from stack and queue
        // Stack top is last inserted (LIFO), queue front is first inserted (FIFO)
        // If all elements match, then queue elements are reverse of stack elements
        while(!st.empty() && !q.empty()){
            if(st.top() != q.front()){
                isSame = false; // Found mismatch
                break;
            }

            st.pop(); // Remove top element from stack
            q.pop();  // Remove front element from queue
        }
    }

    // Print YES if queue is reverse of stack, otherwise NO
    cout << (isSame ? "YES\n" : "NO\n");
    return 0;
}


/*
problem link: https://www.hackerrank.com/contests/assignment-03-a-basic-data-structure-a-batch-07/challenges/same-or-not-ii/problem

Question: 

Same or Not
Problem
Submissions
Leaderboard
Discussions
Problem Statement

There is a list of  values that were inserted into a stack and a list of  values that were inserted into a queue. You need to determine whether the stack and queue are the same or not based on the order in which the elements are removed.

Note: You need to solve it using  Stack and Queue only.

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