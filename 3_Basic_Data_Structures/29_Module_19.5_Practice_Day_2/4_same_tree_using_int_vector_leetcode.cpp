class Solution {
public:

    // Helper function to perform level-order traversal (BFS) and store values (including nulls) in vector
    void check(TreeNode* root, vector<int>& v){
        if(root == NULL){
            return; // Base case: empty tree
        }

        queue<TreeNode*> q; // Queue for BFS

        if(root != NULL){
            q.push(root); // Start with root node
        }

        int null_val = -22; // Special value to represent NULL nodes (since TreeNode values can be any int)

        while(!q.empty()){
            TreeNode* parent = q.front(); // Get the current node
            q.pop(); // Remove it from the queue

            if(parent != NULL){
                v.push_back(parent->val); // Store node's value in vector

                // Add children to the queue even if they are NULL to maintain tree structure
                q.push(parent->left);
                q.push(parent->right);
            }else{
                v.push_back(null_val); // Use placeholder for NULLs to distinguish structure
            }
        }
    }
    
    // Main function to compare two binary trees
    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<int> v1, v2;

        check(p, v1); // Traverse first tree
        check(q, v2); // Traverse second tree

        return v1 == v2; // Compare both traversals
    }
};


/*
100. Same Tree
Solved
Easy
Topics
premium lock icon
Companies
Given the roots of two binary trees p and q, write a function to check if they are the same or not.

Two binary trees are considered the same if they are structurally identical, and the nodes have the same value.

 

Example 1:


Input: p = [1,2,3], q = [1,2,3]
Output: true
Example 2:


Input: p = [1,2], q = [1,null,2]
Output: false
Example 3:


Input: p = [1,2,1], q = [1,1,2]
Output: false
 

Constraints:

The number of nodes in both trees is in the range [0, 100].
-104 <= Node.val <= 104
*/