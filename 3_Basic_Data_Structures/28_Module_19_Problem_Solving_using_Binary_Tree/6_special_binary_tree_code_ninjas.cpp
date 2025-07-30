#include <bits/stdc++.h> 
/*************************************************************

    Following is the Binary Tree node structure

    template <typename T>
    class BinaryTreeNode
    {
    public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

*************************************************************/

/*
  Problem: Check if a binary tree is a "special binary tree".
  
  Definition of Special Binary Tree in this context:
  - Every node in the tree must either have both children (left and right) or none at all.
  - Nodes with exactly one child (only left or only right) are not allowed.
  
  Goal:
  - Return true if the binary tree satisfies the above condition.
  - Return false if any node violates this property.
  
  Why is this important?
  - This property is often used to check "full binary trees".
  - A full binary tree is a tree where every node has 0 or 2 children.
  
  Approach:
  - Use recursion to visit each node in the tree.
  - At each node:
    - Check if it has either both children or none.
    - If it has exactly one child, return false immediately.
  - Recursively apply the check to left and right subtrees.
  - Combine the results with logical AND (both subtrees must be special).

  Visualization example:

            1
           / \
          2   3
         / \   \
        4   5   6
      
  At node 1: left and right children exist → okay
  At node 2: left and right children exist → okay
  At node 3: left child is NULL, right child exists → violates condition → return false
  
  So the whole tree is not special binary tree.

  Another example:

            1
           / \
          2   3
         / \ / \
        4  5 6  7

  Here, every node has either 0 or 2 children, so it is a special binary tree.
*/

bool isSpecialBinaryTree(BinaryTreeNode<int>* root)
{
    // Base case: empty tree is considered special
    if(root == NULL){
        return true;
    }

    // Check if current node has exactly one child (not allowed)
    if((root->left != NULL && root->right == NULL) || (root->left == NULL && root->right != NULL)){
        // One child exists, other does not → violates property
        return false;
    }

    // Recursively check left subtree
    bool l = isSpecialBinaryTree(root->left);

    // Recursively check right subtree
    bool r = isSpecialBinaryTree(root->right);

    // Return true only if both subtrees are special binary trees
    return l && r;
}


/*
https://www.naukri.com/code360/problems/special-binary-tree_920502?leftPanelTabValue=PROBLEM

Problem statement
You are given an arbitrary binary tree. A binary tree is called special if every node of this tree has either zero or two children. You have to determine if the given binary tree is special or not.

If the given binary tree is special, return True. Else, return False to the given function.

Note:

1. A binary tree is a tree in which each node can have at most two children. 
2. The given tree will be non-empty i.e the number of non-NULL nodes will always be greater than or equal to 1.
3. Multiple nodes in the tree can have the same values, all values in the tree will be positive.
Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1:
2
3 5 1 6 2 0 8 -1 -1 7 4 -1 -1 -1 -1 -1 -1 -1 -1
1 2 3 4 5 -1 -1 6 -1 -1 -1 -1 -1    
Sample Output 1:
True
False
Explanation for sample input 1:

Test Case1: 

The tree given in Test Case 1, is shown in the image above. Note that nodes with the values 6, 7, 4, 0, 8, are leaf nodes and have no children, other nodes in the tree have two children each. So the given binary tree is special.

Test Case 2:

The tree given in Test Case 2, is shown in the image above. Note that node with the value 4, has only one child, thus the given binary tree is not special.
Sample Input 2:
2
5 2 3 8 1 -1 -1 7 9 -1 -1 5 6 -1 -1 -1 -1 -1 -1
1 5 7 -1 -1 6 3 9 8 -1 -1 -1 -1 13 -1 -1 -1 
Sample Output 2:
True
False
*/