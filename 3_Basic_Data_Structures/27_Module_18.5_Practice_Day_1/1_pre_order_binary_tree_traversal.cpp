class Solution {
public:
    vector<int> result;
    void preorder(TreeNode* root){
        if(root == NULL){
            return;
        }

        result.push_back(root->val);

        preorder(root->left);
        preorder(root->right);
    }

    vector<int> preorderTraversal(TreeNode* root) {
        preorder(root);

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