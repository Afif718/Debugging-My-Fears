/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    int maxDepth(TreeNode* root) {
        // Base case: If the current node is null, the depth is 0
        if(root == NULL) return 0;

        // If the current node is a leaf (no left or right child), depth is 1
        if(root->left == NULL && root->right == NULL) return 1;

        // Recursively compute the depth of the left subtree
        int l = maxDepth(root->left);

        // Recursively compute the depth of the right subtree
        int r = maxDepth(root->right);

        // The depth of the current node is the max of left and right depths + 1 (for the current node itself)
        return max(l, r) + 1;
    }
};


/*
https://leetcode.com/problems/maximum-depth-of-binary-tree/description/

104. Maximum Depth of Binary Tree
Solved
Easy
Topics
premium lock icon
Companies
Given the root of a binary tree, return its maximum depth.

A binary tree's maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.

 

Example 1:


Input: root = [3,9,20,null,null,15,7]
Output: 3
Example 2:

Input: root = [1,null,2]
Output: 2
 

Constraints:

The number of nodes in the tree is in the range [0, 104].
-100 <= Node.val <= 100
*/