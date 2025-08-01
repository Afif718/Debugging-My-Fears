class Solution {
public:
    int mx;
    int max_height(TreeNode* root){
        if(root == NULL){
            return 0;
        }

        if(root->left == NULL && root->right == NULL){
            return 1;
        }

        int l = max_height(root->left);
        int r = max_height(root->right);
        int diameter = l+r;

        
        mx = max(mx, diameter);

        return max(l,r) + 1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        mx = 0;
        
        max_height(root);

        return mx;
    }
};

/*
https://leetcode.com/problems/diameter-of-binary-tree/description/

543. Diameter of Binary Tree
Solved
Easy
Topics
premium lock icon
Companies
Given the root of a binary tree, return the length of the diameter of the tree.

The diameter of a binary tree is the length of the longest path between any two nodes in a tree. This path may or may not pass through the root.

The length of a path between two nodes is represented by the number of edges between them.

 

Example 1:


Input: root = [1,2,3,4,5]
Output: 3
Explanation: 3 is the length of the path [4,2,1,3] or [5,2,1,3].
Example 2:

Input: root = [1,2]
Output: 1
 

Constraints:

The number of nodes in the tree is in the range [1, 104].
-100 <= Node.val <= 100
*/