class Solution {
public:

    // Helper function to perform inorder traversal recursively.
    // It fills the 'result' vector with node values in inorder sequence (Left -> Node -> Right).
    void traverse(TreeNode* root, vector<int>& result) {
        if (root == NULL) {
            // Base case: if the current node is NULL, do nothing and return.
            return;
        }

        // Recursively visit the left subtree first
        traverse(root->left, result);

        // Visit the current node and add its value to the result vector
        result.push_back(root->val);

        // Recursively visit the right subtree
        traverse(root->right, result);
    }
    
    // Main function to return the inorder traversal of a binary tree.
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result; // Vector to store the inorder traversal result

        // Start the recursive traversal from the root
        traverse(root, result);

        return result; // Return the final result vector
    }
};


/*
problem link: https://leetcode.com/problems/binary-tree-inorder-traversal/description/

question:

94. Binary Tree Inorder Traversal
Solved
Easy
Topics
premium lock icon
Companies
Given the root of a binary tree, return the inorder traversal of its nodes' values.

 

Example 1:

Input: root = [1,null,2,3]

Output: [1,3,2]

Explanation:



Example 2:

Input: root = [1,2,3,4,5,null,8,null,null,6,7,9]

Output: [4,2,6,5,7,1,3,9,8]

Explanation:



Example 3:

Input: root = []

Output: []

Example 4:

Input: root = [1]

Output: [1]

 

Constraints:

The number of nodes in the tree is in the range [0, 100].
-100 <= Node.val <= 100
*/