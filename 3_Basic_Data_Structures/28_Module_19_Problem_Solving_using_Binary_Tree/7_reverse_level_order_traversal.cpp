#include <bits/stdc++.h>
using namespace std;

// Function to perform reverse level order traversal on a binary tree
// and return the values in a vector<int>.
vector<int> reverseLevelOrder(TreeNode<int> *root) {
    vector<int> result;          // To store the traversal result
    queue<TreeNode<int> *> q;    // Queue to help in level order traversal (BFS)

    // Step 1: If the root is not NULL, push it to the queue to start traversal
    if(root != NULL){
        q.push(root);
    }

    // Step 2: Traverse the tree level by level using a queue until empty
    while(!q.empty()){
        TreeNode<int> * parent = q.front();  // Get the front node from the queue
        q.pop();                             // Remove it from the queue

        result.push_back(parent->val);      // Add the current node's value to result

        // Step 3: Push left child to queue if exists (to process next)
        if(parent->left){
            q.push(parent->left);
        }

        // Step 4: Push right child to queue if exists
        if(parent->right){
            q.push(parent->right);
        }
    }

    // Step 5: The traversal stored nodes in normal level order (top-down),
    // but we need reverse level order (bottom-up), so reverse the vector
    reverse(result.begin(), result.end());

    // Step 6: Return the reversed level order traversal
    return result;
}


/*
https://www.naukri.com/code360/problems/reverse-level-order-traversal_764339?leftPanelTabValue=PROBLEM

Problem statement
You have been given a Binary Tree of integers. You are supposed to return the reverse of the level order traversal.

For example:
For the given binary tree

The reverse level order traversal will be {7,6,5,4,3,2,1}.
Detailed explanation ( Input/output format, Notes, Images )
Constraints:
0 <= N <= 5 * 10^5
0 <= data <= 10^5 and data != -1

Where ‘N’ is the total number of nodes in the binary tree, and 'data' is the value of the binary tree node.

Time Limit: 1 sec
Sample Input 1:
1 2 3 4 -1 5 6 -1 7 -1 -1 -1 -1 -1 -1
Sample Output 1:
7 6 5 4 3 2 1
Explanation of Sample Input 1:
Start with the bottom of the tree, i.e. 7, and traverse in the tree in the reverse direction of level order, i.e., bottom to top and right to left. So, the reverse level order traversal will be {7,6,5,4,3,2,1}.
Sample Input 2:
2 7 5 2 6 -1 9 -1 -1 5 11 4 -1 -1 -1 -1 -1 -1 -1
Sample Output 2:
4 11 5 9 6 2 5 7 2
Explanation of Sample Input 2:
Traverse the tree in the reverse direction of level order, i.e., bottom to top and right to left. So reverse level order traversal will be {4,11,5,9,6,2,5,7,2}.
*/