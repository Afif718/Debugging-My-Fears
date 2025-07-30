
int nodeLevel(TreeNode<int>* root, int searchedValue)
{
    // We use a queue of pairs. Each pair contains a pointer to a node and its corresponding level in the tree.
    // Format: queue< pair< TreeNode*, int > >
    queue<pair<TreeNode<int>*, int>> q;

    // If the root is not null, push it to the queue with level 1 (assuming root is level 1)
    if(root != NULL){
        q.push({root, 1});
    }

    // Start Breadth-First Search (Level Order Traversal)
    while(!q.empty()){
        // Get the front element from the queue
        pair<TreeNode<int>*, int> parent = q.front();
        q.pop();

        // Separate the node and its level
        TreeNode<int>* node = parent.first;
        int level = parent.second;

        // Check if current node is the one we are searching for
        if(node->val == searchedValue){
            return level; // Return its level if found
        }

        // If the current node has a left child, enqueue it with level + 1
        if(node->left){
            q.push({node->left, level+1});
        }

        // If the current node has a right child, enqueue it with level + 1
        if(node->right){
            q.push({node->right, level+1});
        }
    }
}


/*
https://www.naukri.com/code360/problems/node-level_920383?leftPanelTabValue=PROBLEM

Problem statement
Ninja has been given a binary tree having N nodes and an integer M, he needs to find the level of node M. He finds it difficult to solve and asks for your help.

Note:

Consider root to be at level 1. It is guaranteed that all the nodes in the binary tree have distinct values.
Detailed explanation ( Input/output format, Notes, Images )
Constraints:
1 <= T <= 5
0 <= N <= 3000
0 <= node data <= 10^9  

Time Limit: 1 sec
Sample Input 1:
2
1 2 3 -1 -1 -1  6 -1 -1
6
1 2 -1 -1 -1
1
Sample Output 1:
3
1
Explanation of Sample Input 1:
 For the first test case, the given binary tree is shown below.
 Here, we see that node 6 is at a distance of 2 units from the root(node 1). Hence, our level will be 3.

For the second test case, the given binary tree is shown below.

As we are looking for node 1 which is itself the root node, hence our level is 1.
Sample Input 2:
1
1 3 8 5 -1 7 -1 -1 -1 -1 -1
10
Sample Output 2:
0
Explanation of Sample Input 2:
For the first test case, the given binary tree is shown below.

As node 10 is not present in the tree, so we return 0.
*/