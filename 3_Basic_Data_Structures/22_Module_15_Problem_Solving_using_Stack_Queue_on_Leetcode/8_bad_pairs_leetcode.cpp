class Solution {
public:
    string makeGood(string s) {
        stack<char> st;  // Stack to keep track of characters while checking for "bad" pairs
        string result;   // To store the final good string

        // Traverse each character in the input string
        for(char c : s){
            /*
             * Visualization:
             * At each step, imagine the stack growing and shrinking.
             * If a "bad" pair is found (e.g., 'a' and 'A' or 'B' and 'b'), remove the top of the stack.
             * Otherwise, push the character onto the stack.
             * 
             * "Bad" pair condition:
             * ASCII difference between lowercase and uppercase of same character is 32.
             * So if abs(st.top() - c) == 32, then we have a bad pair to eliminate.
             */
            
            if(!st.empty() && abs(st.top() - c) == 32) {
                // Bad pair found -> remove both
                // e.g., top = 'a', c = 'A' → remove 'a'
                st.pop();
            } else {
                // Good character → keep it
                st.push(c);
            }

            /*
             * Example Visualization for input = "leEeetcode":
             * Step by step:
             * 1. 'l' → stack: [l]
             * 2. 'e' → stack: [l, e]
             * 3. 'E' → 'e' and 'E' are a bad pair → pop → stack: [l]
             * 4. 'e' → stack: [l, e]
             * 5. 't' → stack: [l, e, t]
             * 6. 'c' → stack: [l, e, t, c]
             * 7. 'o' → stack: [l, e, t, c, o]
             * 8. 'd' → stack: [l, e, t, c, o, d]
             * 9. 'e' → stack: [l, e, t, c, o, d, e]
             * Final string = "leetcode"
             */
        }

        // Pop all characters from the stack to form the final result
        while(!st.empty()) {
            result += st.top();  // Add the character from top of stack
            st.pop();            // Remove it
        }

        // Reverse the result because stack gives us characters in reverse order
        reverse(result.begin(), result.end());

        return result;
    }
};

/*
https://leetcode.com/problems/make-the-string-great/

1544. Make The String Great
Solved
Easy
Topics
premium lock icon
Companies
Hint
Given a string s of lower and upper case English letters.

A good string is a string which doesn't have two adjacent characters s[i] and s[i + 1] where:

0 <= i <= s.length - 2
s[i] is a lower-case letter and s[i + 1] is the same letter but in upper-case or vice-versa.
To make the string good, you can choose two adjacent characters that make the string bad and remove them. You can keep doing this until the string becomes good.

Return the string after making it good. The answer is guaranteed to be unique under the given constraints.

Notice that an empty string is also good.

 

Example 1:

Input: s = "leEeetcode"
Output: "leetcode"
Explanation: In the first step, either you choose i = 1 or i = 2, both will result "leEeetcode" to be reduced to "leetcode".
Example 2:

Input: s = "abBAcC"
Output: ""
Explanation: We have many possible scenarios, and all lead to the same answer. For example:
"abBAcC" --> "aAcC" --> "cC" --> ""
"abBAcC" --> "abBA" --> "aA" --> ""
Example 3:

Input: s = "s"
Output: "s"
 

Constraints:

1 <= s.length <= 100
s contains only lower and upper case English letters.


*/