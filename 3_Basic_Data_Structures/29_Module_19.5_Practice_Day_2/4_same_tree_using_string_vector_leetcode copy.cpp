class Solution {
public:

    // Helper function to perform level-order traversal (BFS)
    // and record both node values and 'null' for absent children
    void check(TreeNode* root, vector<string>& v){
        // If the root is null, simply return (empty tree)
        if(root == NULL){
            return;
        }

        // Queue for BFS traversal
        queue<TreeNode*> q;

        // Start with root node
        q.push(root);

        while(!q.empty()){
            TreeNode* parent = q.front();  // Get the current node
            q.pop();

            if(parent != NULL){
                // Store the value of the current node
                v.push_back(to_string(parent->val));

                // Push left and right children to the queue
                // Even if they are null, push them to maintain structure
                q.push(parent->left);
                q.push(parent->right);
            } else {
                // If current node is null, record "null" to preserve structure
                v.push_back("null");
            }
        }
    }
    
    // Main function to compare two binary trees
    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<string> v1, v2;

        // Traverse both trees and serialize their structures and values
        check(p, v1);
        check(q, v2);

        // Compare the serialized forms
        return v1 == v2;
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