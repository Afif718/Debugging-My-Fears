/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    bool isUnivalTree(TreeNode* root) {
        // Store the value of the root node. All other nodes should have the same value to be considered a unival tree.
        int root_val = root->val;

        // We assume initially the tree is univalued.
        bool isSame = true;

        // Queue for level-order (BFS) traversal
        queue<TreeNode*> q;

        // If root is not null, add it to the queue
        if (root != NULL) {
            q.push(root);
        }

        // Begin level-order traversal
        while (!q.empty()) {
            // Get the front node from the queue
            TreeNode* parent = q.front();
            q.pop();

            // If the value of the current node is not equal to the root's value,
            // the tree is not univalued. Return false.
            if (parent->val != root_val) {
                return false;
            }

            // If the left child exists, add it to the queue
            if (parent->left) {
                q.push(parent->left);
            }

            // If the right child exists, add it to the queue
            if (parent->right) {
                q.push(parent->right);
            }
        }

        // If we reach here, all nodes had the same value as the root
        return isSame;
    }
};


/*
965. Univalued Binary Tree
Solved
Easy
Topics
premium lock icon
Companies
A binary tree is uni-valued if every node in the tree has the same value.

Given the root of a binary tree, return true if the given tree is uni-valued, or false otherwise.

 

Example 1:


Input: root = [1,1,1,1,1,null,1]
Output: true
Example 2:


Input: root = [2,2,2,5,2]
Output: false
 

Constraints:

The number of nodes in the tree is in the range [1, 100].
0 <= Node.val < 100
*/