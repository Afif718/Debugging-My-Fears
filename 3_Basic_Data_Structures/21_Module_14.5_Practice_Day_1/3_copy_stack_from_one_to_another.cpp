#include <bits/stdc++.h>
using namespace std;

int main() {
    stack<int> st;

    int st_size;
    cin >> st_size; // Input: number of elements to push into the stack

    // Step 1: Pushing elements into stack `st`
    // Example input: 10 20 30 40 50
    // After pushing: Top of `st` = 50, then 40, 30, 20, Bottom = 10
    for(int i = 0; i < st_size; i++) {
        int val;
        cin >> val;
        st.push(val); // Push elements one by one into the stack
    }

    /*
        Visualization after pushing into `st` (Top to Bottom):
        ┌────┐
        │ 50 │ ← Top
        │ 40 │
        │ 30 │
        │ 20 │
        │ 10 │ ← Bottom
        └────┘
    */

    // Step 2: Reversing the stack using another stack `st2`
    stack<int> st2;

    // Move elements from `st` to `st2` to reverse the order
    while(!st.empty()) {
        st2.push(st.top()); // Take top of st and push to st2
        st.pop(); // Remove from original stack
    }

    /*
        Visualization after transfer to `st2` (Top to Bottom):
        ┌────┐
        │ 10 │ ← Top
        │ 20 │
        │ 30 │
        │ 40 │
        │ 50 │ ← Bottom
        └────┘

        Now, `st2` has the original *insertion order*
    */

    // Step 3: Print elements from `st2`
    while(!st2.empty()) {
        cout << st2.top() << " "; // Print the top of st2
        st2.pop(); // Remove the top after printing
    }

    /*
        Output: 10 20 30 40 50
        Which matches the order the elements were originally inserted.
    */

    return 0;
}

/*
Question: Take a stack of size N as input and copy those elements to another stack to get the values in the order they were inserted and print them. You should use STL to solve this problem.


Sample Input
Sample Output
5
10 20 30 40 50
10 20 30 40 50


*/