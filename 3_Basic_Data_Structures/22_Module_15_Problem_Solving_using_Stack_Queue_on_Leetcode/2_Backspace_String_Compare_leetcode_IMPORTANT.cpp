class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> ss;  // Stack to simulate typing with backspaces for string s
        stack<char> tt;  // Stack to simulate typing with backspaces for string t

        // Process string s
        for (char c : s) {
            if (c == '#') {
                // '#' means backspace, so pop the last character if the stack is not empty
                if (!ss.empty()) {
                    ss.pop();

                    // Visualization:
                    // Before popping: stack might look like ['a', 'b', 'c']
                    // After popping:  stack becomes ['a', 'b']
                }
                // If the stack is empty, ignore the backspace (like empty text editor)
            } else {
                // Regular character, just push onto the stack
                ss.push(c);

                // Visualization:
                // If c = 'a' -> stack becomes ['a']
                // If c = 'b' -> stack becomes ['a', 'b']
            }
        }

        // Process string t (same logic as above)
        for (char c : t) {
            if (c == '#') {
                if (!tt.empty()) {
                    tt.pop();

                    // Visualization:
                    // Before popping: stack might look like ['x', 'y']
                    // After popping:  stack becomes ['x']
                }
            } else {
                tt.push(c);

                // Visualization:
                // If c = 'x' -> stack becomes ['x']
                // If c = 'y' -> stack becomes ['x', 'y']
            }
        }

        // Compare the two stacks
        // If both stacks contain the same characters in same order after simulating the backspaces,
        // then the final strings are equal
        return ss == tt;
    }
};


/*
Question:

844. Backspace String Compare
Solved
Easy
Topics
premium lock icon
Companies
Given two strings s and t, return true if they are equal when both are typed into empty text editors. '#' means a backspace character.

Note that after backspacing an empty text, the text will continue empty.

 

Example 1:

Input: s = "ab#c", t = "ad#c"
Output: true
Explanation: Both s and t become "ac".
Example 2:

Input: s = "ab##", t = "c#d#"
Output: true
Explanation: Both s and t become "".
Example 3:

Input: s = "a#c", t = "b"
Output: false
Explanation: s becomes "c" while t becomes "b".
 

Constraints:

1 <= s.length, t.length <= 200
s and t only contain lowercase letters and '#' characters.
 

Follow up: Can you solve it in O(n) time and O(1) space?
*/