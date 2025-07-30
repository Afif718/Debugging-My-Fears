// Definition for a binary tree node (already provided in most platforms like LeetCode):
// struct TreeNode {
//     int val;
//     TreeNode *left;
//     TreeNode *right;
//     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
// };

class Solution {
public:

    // This helper function performs recursive preorder traversal of the binary tree
    void traverse(TreeNode* root, vector<int>& result) {
        // Base Case: If the current node is NULL, stop the recursion and return
        if(root == NULL) {
            return;
        }

        // Step 1: Visit the current node and store its value
        // In preorder traversal, we visit the root node first
        result.push_back(root->val);

        // Step 2: Recursively traverse the left subtree
        traverse(root->left, result);

        // Step 3: Recursively traverse the right subtree
        traverse(root->right, result);
    }

    // This function will be called by the main program to start the traversal
    vector<int> preorderTraversal(TreeNode* root) {
        // Vector to store the result of preorder traversal
        vector<int> result;

        // Start the recursive traversal from the root
        traverse(root, result);

        // Return the final preorder traversal as a vector
        return result;
    }
};


/*
problem link: https://leetcode.com/problems/binary-tree-preorder-traversal/description/

question:

144. Binary Tree Preorder Traversal
Solved
Easy
Topics
premium lock icon
Companies
Given the root of a binary tree, return the preorder traversal of its nodes' values.

 

Example 1:

Input: root = [1,null,2,3]

Output: [1,2,3]

Explanation:



Example 2:

Input: root = [1,2,3,4,5,null,8,null,null,6,7,9]

Output: [1,2,4,5,6,7,3,8,9]

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