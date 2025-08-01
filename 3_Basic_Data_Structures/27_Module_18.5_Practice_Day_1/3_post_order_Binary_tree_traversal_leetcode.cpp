class Solution {
public:
    vector<int> result;

    void postorder(TreeNode* root){
        if(root == NULL){
            return;
        }

        postorder(root->left);
        postorder(root->right);

        result.push_back(root->val);
    }

    vector<int> postorderTraversal(TreeNode* root) {

        postorder(root);

        return result;
    }
};


/*
Problem link: https://leetcode.com/problems/binary-tree-postorder-traversal/description/

question:

145. Binary Tree Postorder Traversal
Easy
Topics
premium lock icon
Companies
Given the root of a binary tree, return the postorder traversal of its nodes' values.

 

Example 1:

Input: root = [1,null,2,3]

Output: [3,2,1]

Explanation:



Example 2:

Input: root = [1,2,3,4,5,null,8,null,null,6,7,9]

Output: [4,6,7,5,2,9,8,3,1]

Explanation:



Example 3:

Input: root = []

Output: []

Example 4:

Input: root = [1]

Output: [1]

 

Constraints:

The number of the nodes in the tree is in the range [0, 100].
-100 <= Node.val <= 100
 
*/