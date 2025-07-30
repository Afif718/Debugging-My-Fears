class Solution {
public:
    // Helper function to perform postorder traversal and store result in 'result' vector
    void traverse(TreeNode* root, vector<int>& result) {
        if (root == NULL) {
            return;  // Base case: If node is null, do nothing
        }

        // 1. Traverse the left subtree first
        traverse(root->left, result);

        // 2. Then traverse the right subtree
        traverse(root->right, result);

        // 3. Finally, process the current root node (after left & right)
        result.push_back(root->val);
    }

    // Main function
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> result;

        // Start the recursive traversal
        traverse(root, result);

        return result;  // Return the collected postorder traversal result
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