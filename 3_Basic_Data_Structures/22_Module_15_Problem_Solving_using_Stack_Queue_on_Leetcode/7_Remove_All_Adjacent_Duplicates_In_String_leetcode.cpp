class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;  // Stack to keep characters while checking for adjacent duplicates

        // Traverse each character in the input string
        for(char c : s){
            if(st.empty()){
                // If stack is empty, push the first character
                st.push(c);

                // Visualization example: input = "abbaca"
                // Step 1: char = 'a' → stack: [a]
            } else {
                if(c == st.top()){
                    // If current char equals top of stack, pop it (remove both)
                    st.pop();

                    // Visualization:
                    // e.g. char = 'b' and stack.top() = 'b' → pop
                    // Before: stack = [a, b]
                    // After : stack = [a]
                } else {
                    // If not equal, push current character to stack
                    st.push(c);

                    // Visualization:
                    // e.g. char = 'c' and stack.top() = 'a' → push 'c'
                    // Before: stack = [a]
                    // After : stack = [a, c]
                }
            }
        }

        // Build result from the stack (which is in reverse order)
        string result;

        // Pop characters and append to result string
        while(!st.empty()){
            result += st.top();  // Add top character to result
            st.pop();            // Remove it from stack

            // Visualization:
            // e.g. stack = [c, a] (top to bottom)
            // result = "ca"
        }

        // Reverse the result to correct the order
        reverse(result.begin(), result.end());

        // Final Visualization:
        // result before reverse = "ca"
        // result after reverse  = "ac"

        return result;
    }
};

/*
1047. Remove All Adjacent Duplicates In String
Solved
Easy
Topics
premium lock icon
Companies
Hint
You are given a string s consisting of lowercase English letters. A duplicate removal consists of choosing two adjacent and equal letters and removing them.

We repeatedly make duplicate removals on s until we no longer can.

Return the final string after all such duplicate removals have been made. It can be proven that the answer is unique.

 

Example 1:

Input: s = "abbaca"
Output: "ca"
Explanation: 
For example, in "abbaca" we could remove "bb" since the letters are adjacent and equal, and this is the only possible move.  The result of this move is that the string is "aaca", of which only "aa" is possible, so the final string is "ca".
Example 2:

Input: s = "azxxzy"
Output: "ay"
 

Constraints:

1 <= s.length <= 105
s consists of lowercase English letters.
*/