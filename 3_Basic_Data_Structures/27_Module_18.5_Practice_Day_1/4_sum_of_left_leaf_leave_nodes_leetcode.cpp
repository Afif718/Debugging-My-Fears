/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr, right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        // Base case: if the current node is NULL, return 0 (nothing to add)
        if(root == NULL){
            return 0;
        }

        int sum = 0;

        // Check if the left child exists and is a leaf node
        if(root->left != NULL && root->left->left == NULL && root->left->right == NULL){
            // If true, then root->left is a left leaf, so add its value to the sum
            sum += root->left->val;
        }

        // Recur for the left subtree to find left leaves deeper in the tree
        sum += sumOfLeftLeaves(root->left);

        // Recur for the right subtree too — because even from the right side,
        // there can be left leaves deeper down the tree
        sum += sumOfLeftLeaves(root->right);

        // Return the total sum of all left leaves found
        return sum;
    }
};

/*
https://leetcode.com/problems/sum-of-left-leaves/description/

404. Sum of Left Leaves
Solved
Easy
Topics
premium lock icon
Companies
Given the root of a binary tree, return the sum of all left leaves.

A leaf is a node with no children. A left leaf is a leaf that is the left child of another node.

 

Example 1:


Input: root = [3,9,20,null,null,15,7]
Output: 24
Explanation: There are two left leaves in the binary tree, with values 9 and 15 respectively.
Example 2:

Input: root = [1]
Output: 0
*/