
int max_val; // Global variable to keep track of the maximum diameter found so far

// Function to compute the height of the tree and update the diameter
int max_height(TreeNode<int> *root){
    // Base case: if current node is NULL, height is 0
    if(root == NULL){
        return 0;
    }

    // If current node is a leaf (no children), height is 1
    if(root->left == NULL && root->right == NULL){
        return 1;
    }

    // Recursively find the height of left subtree
    int l = max_height(root->left);

    // Recursively find the height of right subtree
    int r = max_height(root->right);

    /*
       Diameter at this node:
       Diameter is the longest path between two nodes in the tree,
       which can be the sum of left subtree height and right subtree height
       (path passes through this node).
       
       Visualization example:
       
                1
               / \
              2   3
             / \
            4   5
       
       At node 2:
       Left subtree height = height(4) = 1
       Right subtree height = height(5) = 1
       Diameter passing through 2 = 1 + 1 = 2 edges (or 3 nodes)
    */
    int diameter = l + r;

    // Update global max_val if current diameter is larger
    max_val = max(max_val, diameter);

    // Return height of current subtree = max height of its subtrees + 1 (for current node)
    return max(l, r) + 1;
}

// Function to calculate diameter of binary tree
int diameterOfBinaryTree(TreeNode<int> *root){
    max_val = 0;  // Reset global max diameter before starting

    // Compute max height and update diameter during the recursion
    max_height(root);

    // max_val now holds the largest diameter found in the tree
    return max_val;
}

/*
Summary and visualization:

- The diameter of a binary tree is the length of the longest path between any two nodes in the tree.
- This path may or may not pass through the root.
- The max_height function returns the height of the current node's subtree.
- At each node, the diameter passing through it = left subtree height + right subtree height.
- We keep track of the maximum diameter found in max_val.
- Finally, diameterOfBinaryTree returns the maximum diameter found in the entire tree.

Example:
        1
       / \
      2   3
     / \
    4   5

Heights:
- height(4) = 1
- height(5) = 1
- height(2) = max(1,1) + 1 = 2
- height(3) = 1
- height(1) = max(2,1) + 1 = 3

Diameters at nodes:
- node 4: 0 (no children)
- node 5: 0 (no children)
- node 2: 1 + 1 = 2
- node 3: 0
- node 1: 2 + 1 = 3

Max diameter = 3 (path: 4 -> 2 -> 1 -> 3)

*/


/*
https://www.naukri.com/code360/problems/diameter-of-the-binary-tree_920552?leftPanelTabValue=PROBLEM

Problem statement
You are given a Binary Tree.



Return the length of the diameter of the tree.



Note :
The diameter of a binary tree is the length of the longest path between any two end nodes in a tree.

The number of edges between two nodes represents the length of the path between them.
Example :
Input: Consider the given binary tree:

Output: 6

Explanation:
Nodes in the diameter are highlighted. The length of the diameter, i.e., the path length, is 6.


Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1 :
1 2 3 4 7 -1 -1 -1 -1 -1 -1


Sample Output 1 :
3


Explanation of Sample Input 1 :
The binary tree in the given test case will look like

The length of the diameter of the above tree is the length of the path between nodes 4 and 3, i.e., 4->2->1->3. Hence the output will be 3.


Sample Input 2 :
1 2 3 -1 -1 -1 -1


Sample Output 2 :
2


Explanation of Sample Input 2 :
The binary tree in the given test case will look like

The length of the diameter of the above tree is the length of the path between nodes 2 and 3, i.e., 2.


Expected Time Complexity:
Try to do this in O(n).


Constraints:
1 <= n <= 10000

Where 'n' is the total number of nodes in the binary tree.

Time Limit: 1 sec
*/
