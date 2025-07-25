class Solution {
public:
    bool isValid(string s) {
        
        // Initialize an empty stack to keep track of opening brackets
        stack<char> st;

        // Traverse each character in the string
        for(char ch: s){

            // If the character is an opening bracket, push it into the stack
            if(ch == '(' || ch == '{' || ch == '['){
                st.push(ch);
            } 
            else {
                // If the stack is empty and we find a closing bracket, it's invalid
                if(st.empty()){
                    return false;
                } 
                else {
                    // Match the top of the stack with the current closing bracket
                    if(ch == ')' && st.top() == '('){
                        st.pop(); // valid pair found, pop it
                    } 
                    else if(ch == '}' && st.top() == '{'){
                        st.pop(); // valid pair found, pop it
                    } 
                    else if(ch == ']' && st.top() == '['){
                        st.pop(); // valid pair found, pop it
                    } 
                    else {
                        // Mismatched pair, return false
                        return false;
                    }
                }
            }
        }

        // If the stack is empty, all brackets were matched and closed properly
        return (st.empty() ? true : false);
    }
};


/*
question:

20. Valid Parentheses
Solved
Easy
Topics
premium lock icon
Companies
Hint
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.
 

Example 1:

Input: s = "()"

Output: true

Example 2:

Input: s = "()[]{}"

Output: true

Example 3:

Input: s = "(]"

Output: false

Example 4:

Input: s = "([])"

Output: true

Example 5:

Input: s = "([)]"

Output: false

 

Constraints:

1 <= s.length <= 104
s consists of parentheses only '()[]{}'.
*/