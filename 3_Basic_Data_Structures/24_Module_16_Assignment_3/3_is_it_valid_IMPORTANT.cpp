#include <bits/stdc++.h>
using namespace std;

int main() {
    int test_case;
    cin >> test_case;  // Number of test cases to run

    while (test_case--) {
        string str;
        cin >> str;    // Input binary string containing only '0' and '1'

        stack<char> st;  // Stack to help simulate elimination process

        /*
        Logic:
        - If stack is not empty and current character is different from the top of stack,
          this means we have a pair '01' or '10' which can eliminate each other.
          So we pop the top element (eliminating both).
        - Otherwise, push the current character onto the stack.
        
        This simulates the process of removing adjacent pairs of '0' and '1' step by step.
        */

        for (char c : str) {
            if (!st.empty() && st.top() != c) {
                // Found opposite character adjacent: elimination happens
                // Visualization example:
                // Stack before: [0]
                // Current char: '1'
                // Both '0' and '1' eliminated, so pop '0' from stack, don't push '1'
                st.pop();
            } else {
                // No elimination possible, push current character
                // Visualization example:
                // Stack before: []
                // Current char: '0'
                // Stack after push: [0]
                st.push(c);
            }
        }

        /*
        After processing all characters:
        - If stack is empty, it means all characters were eliminated successfully, so print YES.
        - If stack is not empty, some characters remain uneliminated, so print NO.
        */

        if (st.empty()) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}



/*
Problem link: https://www.hackerrank.com/contests/assignment-03-a-basic-data-structure-a-batch-07/challenges/is-it-valid-1-1/problem


question:

Problem Statement

Given a string  containing just the characters  and , determine if the input string is valid.

An input string is valid if the string is empty after doing some operatios. The available operations are:

 can delete its previous available character  along with itself. If there is no  available to delete, it will not delete itself.
 can delete its previous available character  along with itself. If there is no  available to delete, it will not delete itself.
Note: You need to solve it using STL Stack or Queue only.

Input Format

First line will contain , the number of test cases.
Next  lines will contain the string .
Constraints

. Here  means the length of the string.
Output Format

Output YES if the string is valid, otherwise NO.
Sample Input 0

10
0011
1010
1100
0101
0001
0111
0110
100101
1110010
0001011011
Sample Output 0

YES
YES
YES
YES
NO
NO
YES
YES
NO
YES
Submissions: 439
Max Score: 20
Difficulty: Easy
Rate This Challenge:

    
More

*/