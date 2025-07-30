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
    /**
     * RIGHT SIDE VIEW OF A BINARY TREE:
     * The right side view of a binary tree is the list of node values visible 
     * when the tree is viewed from the right side.
     * At each level (depth), we want to see the **rightmost node**.
     */

    vector<int> rightSideView(TreeNode* root) {
        vector<int> result;             // Stores final right view result.
        bool freq[105] = {false};       // Tracks if a level is already visited.

        queue<pair<TreeNode*, int>> q;  // Queue to perform level order traversal: (node, level)

        if (root != NULL) {
            q.push({root, 1});          // Start BFS from root at level 1.
        }

        // Begin level order traversal
        while (!q.empty()) {
            pair<TreeNode*, int> parent = q.front();
            q.pop();

            TreeNode* node = parent.first;
            int level = parent.second;

            /**
             * Visualization:
             * For example, the tree:
             *         1
             *        / \
             *       2   3
             *        \    \
             *         5    4
             *
             * Level 1: [1]         → rightmost: 1
             * Level 2: [2, 3]      → rightmost: 3
             * Level 3: [5, 4]      → rightmost: 4
             * Right view = [1, 3, 4]
             */

            // If this level is encountered for the first time, store the value
            if (freq[level] == false) {
                result.push_back(node->val); // This is the first (rightmost) node at this level
                freq[level] = true;
            }

            // Push right first to ensure rightmost node comes first at each level
            if (node->right) {
                q.push({node->right, level + 1});
            }

            if (node->left) {
                q.push({node->left, level + 1});
            }
        }

        return result;
    }
};


/*
https://leetcode.com/problems/binary-tree-right-side-view/description/

199. Binary Tree Right Side View
Solved
Medium
Topics
premium lock icon
Companies
Given the root of a binary tree, imagine yourself standing on the right side of it, return the values of the nodes you can see ordered from top to bottom.

 

Example 1:

Input: root = [1,2,3,null,5,null,4]

Output: [1,3,4]

Explanation:



Example 2:

Input: root = [1,2,3,4,null,null,null,5]

Output: [1,3,4,5]

Explanation:



Example 3:

Input: root = [1,null,3]

Output: [1,3]

Example 4:

Input: root = []

Output: []

 

Constraints:

The number of nodes in the tree is in the range [0, 100].
-100 <= Node.val <= 100
*/