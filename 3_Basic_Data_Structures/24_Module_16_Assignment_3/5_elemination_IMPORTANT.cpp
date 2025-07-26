#include<bits/stdc++.h>
using namespace std;

int main(){
    int queries;
    cin >> queries;  // Number of test cases to process

    while(queries--){
        stack<char> st;  // Stack to simulate the elimination process
        
        string str;
        cin >> str;  // Input binary string for the current test case

        /*
        Process each character in the string:
        - If the stack is empty, push the current character.
        - Else, check the top of the stack and current character:
            * If current char is '1' and top of stack is '0', 
              this means '1' eliminates the adjacent '0' and itself.
              So we pop '0' from the stack and do NOT push '1' (both eliminated).
            * Else, push current character onto stack.
        */

        for(char c: str){
            if(st.empty()){
                // Stack empty, just push current character
                st.push(c);
            } else{
                if(c == '1' && st.top() == '0'){
                    // Pattern '0' followed by '1' found -> eliminate both
                    st.pop();  // Remove '0' from stack (previous character)
                    // Don't push '1', both eliminated
                } else{
                    // No elimination possible, push current char
                    st.push(c);
                }
            }
        }

        /*
        After processing entire string, if stack is empty,
        it means all characters were eliminated as per the rules.
        Otherwise, some characters remain and string is not fully eliminated.
        */

        if(st.empty()){
            cout << "YES\n";  // String fully eliminated
        } else{
            cout << "NO\n";   // Some characters remain
        }
    }
    return 0;
}


/*

problem link: https://www.hackerrank.com/contests/assignment-03-a-basic-data-structure-a-batch-07/challenges/elimination-2-2/problem

question:

Problem Statement

You will be given a binary string  (A binary string is a string which contains only 0 and 1) in which every  will eliminate its previously adjacent  and itself. After an elimination, if another elimination is possible, it will continue until no further eliminations can be made.

For example, if the sequence is , then the  and  elements, as well as the  and  elements, will be eliminated, resulting in the string  (10 01 1 01 10 - Bold values are eliminated). After that, the 2nd and 3rd elements will be eliminated, resulting in the string 110 (1 01 10 - Bold values are eliminated). After that, no further eliminations can occur.

You need to determine whether the string will be empty after all eliminations.

Note: You need to solve it using STL Stack or Queue only.

Input Format

First line will contain , the number of test cases.
Each test case will contain the string .
Constraints

Output Format

For each test case output YES if the string is empty after all eliminations, NO otherwise.
Sample Input 0

7
01
10
0011
0101
01001110
000111010011
00011
Sample Output 0

YES
NO
YES
YES
NO
YES
NO
*/