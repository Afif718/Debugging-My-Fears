#include <bits/stdc++.h> 
using namespace std;

/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

/**
 * LEFT SIDE VIEW OF A BINARY TREE:
 * The left side view is the set of nodes visible when you look
 * at the tree from the left side.
 * At each level (depth), the leftmost node is visible.
 * 
 * Visualization Example:
 * 
 *         1
 *        /  \
 *       2    3
 *      / \    \
 *     4   5    6
 * 
 * Levels and their leftmost nodes:
 * Level 1: 1       ← visible from left
 * Level 2: 2       ← visible from left
 * Level 3: 4       ← visible from left
 * 
 * Left side view result: [1, 2, 4]
 */

vector<int> getLeftView(TreeNode<int> *root)
{
    vector<int> result;              // Stores the final left view nodes

    // We assume the tree won't have more than 3010 levels
    bool freq[3010] = {false};       // Tracks if a level is already visited

    // Queue holds pairs of (node, level)
    queue<pair<TreeNode<int> *, int>> q;

    if(root != NULL){
        // Start BFS traversal from root at level 1
        q.push({root, 1});
    }

    while(!q.empty()){
        // Extract current node and its level
        pair<TreeNode<int> *, int> parent = q.front();
        q.pop();

        TreeNode<int> * node = parent.first;
        int level = parent.second;

        // If this level hasn't been visited, this node is the leftmost at this level
        if(freq[level] == false){
            result.push_back(node->data); // Add node to left view
            freq[level] = true;           // Mark level as visited
        }

        // Push left child before right child
        // This ensures that the leftmost nodes at each level are processed first
        if(node->left){
            q.push({node->left, level + 1});
        }

        if(node->right){
            q.push({node->right, level + 1});
        }
    }

    return result; // Return the left view nodes
}


/*


Problem statement
You have been given a binary tree of integers. You are supposed to find the left view of the binary tree. The left view of a binary tree is the set of all nodes that are visible when the binary tree is viewed from the left side.

Example:

The left view of the above binary tree is  {5, 7, 14, 25}.
Detailed explanation ( Input/output format, Notes, Images )
Constraints:
1 <= T <= 100
0 <= N <= 3000
1 <= data <= 10^5 and data!=-1

Where ‘T’ is the number of test cases, and ‘N’ is the total number of nodes in the binary tree, and “data” is the value of the binary tree node

Time Limit: 1 sec
Sample Input 1:
2
3 4 -1 -1 -1 
2 8 7 -1 5 -1 -1 1 -1 -1 -1
Sample Output 1:
3 4
2 8 5 1
Explanation of Sample Input 1:
For the first test case, node 3 and node 4 are visible when the binary tree is viewed from the left.

For the second test case, nodes 2, 8, 5, 1 are visible when the binary tree is viewed from the left.
Sample Input 2:
2
1 3 5 12 -1 8 -1 -1 -1 -1 -1 
9 6 3 -1 -1 4 8 -1 -1 -1 -1 
Sample Output 2:
1 3 12
9 6 4
Explanation of Sample Input 2:
For the first test case, nodes 1, 3, 12 are visible when the binary tree is viewed from the left.

For the second test case, nodes 9, 6, 4 are visible when the binary tree is viewed from the left.
*/