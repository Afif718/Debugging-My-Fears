class Solution {
public:
    bool checkTree(TreeNode* root) {
        // Edge case: if the root is NULL, return false (tree doesn't exist)
        if (root == NULL) {
            return false;
        }

        // Store the root node's value
        int root_val = root->val;

        // Get left child's value if it exists; otherwise use 0
        int l = root->left ? root->left->val : 0;

        // ❌ FIX: You accidentally checked `root->left` again instead of `root->right`
        // int r = root->left ? root->right->val : 0; ← incorrect
        // ✅ Corrected:
        int r = root->right ? root->right->val : 0;

        // Visualization:
        //       root
        //      /    \
        //     l      r
        // Check if root's value == l + r

        // Return whether root value is equal to sum of left and right child values
        return root_val == l + r;
    }
};


/*
https://leetcode.com/problems/root-equals-sum-of-children/description/


Code


Testcase
Test Result
Test Result
2236. Root Equals Sum of Children
Solved
Easy
Topics
premium lock icon
Companies
You are given the root of a binary tree that consists of exactly 3 nodes: the root, its left child, and its right child.

Return true if the value of the root is equal to the sum of the values of its two children, or false otherwise.

 

Example 1:


Input: root = [10,4,6]
Output: true
Explanation: The values of the root, its left child, and its right child are 10, 4, and 6, respectively.
10 is equal to 4 + 6, so we return true.
Example 2:


Input: root = [5,3,1]
Output: false
Explanation: The values of the root, its left child, and its right child are 5, 3, and 1, respectively.
5 is not equal to 3 + 1, so we return false.
 

Constraints:

The tree consists only of the root, its left child, and its right child.
*/