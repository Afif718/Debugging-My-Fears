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

vector<int> getLeftView(TreeNode<int> *root)
{
    vector<int> result; // Stores the final left view nodes

    // We assume that the tree will not have more than 3010 levels
    bool freq[3010] = {false}; // Keeps track of whether a node has been added at a particular level

    queue<pair<TreeNode<int> *, int>> q; // Queue stores nodes with their level info

    if(root != NULL){
        // Start BFS traversal from the root at level 1
        q.push({root, 1});
    }

    while(!q.empty()){
        // Get the current node and its level
        pair<TreeNode<int> *, int> parent = q.front();
        q.pop();

        TreeNode<int> * node = parent.first;
        int level = parent.second;

        // If this level hasn't been seen before, this node is the leftmost at this level
        if(freq[level] == false){
            result.push_back(node->data); // Add to left view
            freq[level] = true;           // Mark level as visited
        }

        // Enqueue left child before right child
        // This ensures that leftmost nodes are visited first at each level
        if(node->left){
            q.push({node->left, level + 1});
        }

        if(node->right){
            q.push({node->right, level + 1});
        }
    }

    return result; // Return the final left view list
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