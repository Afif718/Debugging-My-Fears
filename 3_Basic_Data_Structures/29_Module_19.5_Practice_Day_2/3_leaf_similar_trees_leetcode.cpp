/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(right) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:

    // Helper function to collect leaf nodes in left-to-right order
    void collectLeafNodes(TreeNode* root, vector<int>& leaves) {
        if (root == NULL) {
            return; // Base case: if node is null, do nothing
        }

        // If the node is a leaf (no left or right child), store its value
        if (root->left == NULL && root->right == NULL) {
            leaves.push_back(root->val);
            return; // No need to go further down
        }

        // Recurse on the left and right subtrees
        collectLeafNodes(root->left, leaves);
        collectLeafNodes(root->right, leaves);
    }

    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> v1, v2;

        // Collect all the leaf nodes for root1 and root2
        collectLeafNodes(root1, v1);
        collectLeafNodes(root2, v2);

        // Compare the leaf sequences from both trees
        return v1 == v2;
    }
};


/*
https://leetcode.com/problems/leaf-similar-trees/

Code
Testcase
Testcase
Test Result
872. Leaf-Similar Trees
Solved
Easy
Topics
premium lock icon
Companies
Consider all the leaves of a binary tree, from left to right order, the values of those leaves form a leaf value sequence.



For example, in the given tree above, the leaf value sequence is (6, 7, 4, 9, 8).

Two binary trees are considered leaf-similar if their leaf value sequence is the same.

Return true if and only if the two given trees with head nodes root1 and root2 are leaf-similar.

 

Example 1:


Input: root1 = [3,5,1,6,2,9,8,null,null,7,4], root2 = [3,5,1,6,7,4,2,null,null,null,null,null,null,9,8]
Output: true
Example 2:


Input: root1 = [1,2,3], root2 = [1,3,2]
Output: false
 

Constraints:

The number of nodes in each tree will be in the range [1, 200].
Both of the given trees will have values in the range [0, 200].
*/