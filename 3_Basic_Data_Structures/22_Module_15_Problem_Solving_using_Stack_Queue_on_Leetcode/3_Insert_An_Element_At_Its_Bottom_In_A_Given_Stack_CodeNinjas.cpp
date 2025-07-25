#include <bits/stdc++.h>
using namespace std;

/*
Function to insert an element 'x' at the bottom of a given stack 'st'.
We use a temporary stack to reverse the order, insert the new element at the bottom,
and then restore the original order by pushing everything back.
*/
stack<int> pushAtBottom(stack<int>& st, int x) 
{
    // Create a temporary stack to hold elements
    stack<int> temp;

    // Step 1: Transfer all elements from 'st' to 'temp'
    // This reverses the original stack order
    while(!st.empty()){
        temp.push(st.top());  // Push top element of 'st' to 'temp'
        st.pop();             // Remove element from 'st'
    }

    // Now 'st' is empty, and 'temp' contains all original elements in reverse order
    /*
        Visualization Example:
        Original st:     Top -> 30 20 10
        temp becomes:    Top -> 10 20 30
        st becomes:      empty
    */

    // Step 2: Push the new element 'x' into the now-empty 'st'
    st.push(x);

    /*
        After this step:
        st:              Top -> x
        temp:            Top -> 10 20 30
    */

    // Step 3: Push back all elements from 'temp' to 'st'
    // This restores the original order but with 'x' at the bottom
    while(!temp.empty()){
        st.push(temp.top());
        temp.pop();
    }

    /*
        Final st:        Top -> 30 20 10 x
        Which means x is now at the bottom
    */

    // Return the updated stack
    return st;
}


/*
Problem statement
You are given a stack/deque of integers 'MY-STACK' and an integer ‘X’. Your task is to insert ‘X’ to the bottom of ‘MY-STACK’ and return the updated stack/deque.

Note :
If ‘MY_STACK’ = [7, 1, 4, 5], then the first element represents the element at the bottom of the stack and the last element represents the element at the top of the stack.
For Example :
Let ‘MY_STACK’ = [7, 1, 4, 5] and ‘X’ = 9. So, ‘MY_STACK’ after insertion becomes [9, 7, 1, 4, 5].

Follow Up :
Try to do this without using any other data structure.
Detailed explanation ( Input/output format, Notes, Images )
Constraints :
1 <= T <=100
1 <= N <= 10^4
0 <= 'X’ and 'MY_STACK[i]’ <= 10^5

Time limit: 1 second
Sample input 1 :
2
3 8
4 3 2
4 5
6 2 4 9
Sample Output 1 :
8 4 3 2
5 6 2 4 9
Explanation For Sample Input 1 :
Test Case 1:

We are  given 'MY_STACK = [4,3,2] and 'X’ = 8.
We insert ‘X’ at the bottom of ‘MY_STACK’. 
So finally, we have 'MY_STACK' = [8, 4, 3, 2]. 

Test Case 2:
After inserting an element at its bottom, the stack will be 5 6 2 4 9
Sample Input 2 :
2
1 0
4 
2 5
1 9
Sample Output 2 :
0 4
5 1 9
Explanation For Sample Input 2 :
Test Case 1:
We are given 'MY_STACK = [4]’ and 'X’ = 0’.
We insert ‘X’ at the bottom of ‘MY_STACK’. 
So finally, 'MY_STACK' will become [0, 4]. 

Test Case 2:
We are given 'MY_STACK = [1,9]’ and 'X’ = 5.
So finally, 'MY_STACK' will become [5, 1, 9]. 
*/