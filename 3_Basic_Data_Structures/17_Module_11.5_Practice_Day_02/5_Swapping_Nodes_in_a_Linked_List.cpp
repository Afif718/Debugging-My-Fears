/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {

    // Helper function to insert a new node with value 'val' at the tail of the list
    void insert_at_tail(ListNode* &head, ListNode* &tail, int val){
        // Create a new node dynamically
        ListNode* newnode = new ListNode(val);

        // If the list is empty, initialize both head and tail to this new node
        if(head == NULL){
            head = newnode;
            tail = newnode;
            return;
        }

        // Otherwise, attach new node at the end and update the tail pointer
        tail->next = newnode;
        tail = newnode;
    }

public:
    ListNode* swapNodes(ListNode* head, int k) {
        // Initialize pointers for the new linked list we will build after swapping values
        ListNode* newhead = NULL; // Head of new linked list
        ListNode* newtail = NULL; // Tail of new linked list

        // Vector to store all node values from the original list
        vector<int> v;

        // Temporary pointer to traverse the original linked list
        ListNode* temp = head;

        // Traverse the original list and push each node's value into the vector
        while(temp != NULL){
            v.push_back(temp->val);
            temp = temp->next;
        }

        // Swap the values of the kth node from the start and the kth node from the end
        // Note: Vector is zero-indexed, so the kth node from start is at index k-1
        // and kth node from end is at index v.size() - k
        swap(v[k-1], v[v.size() - k]);

        // Reconstruct the linked list using the updated values in vector 'v'
        // We insert nodes one by one at the tail of the new list
        for(int val : v){
            insert_at_tail(newhead, newtail, val);
        }

        // Return the head of the newly constructed linked list with swapped nodes
        return newhead;
    }
};


/*

1721. Swapping Nodes in a Linked List
Solved
Medium
Topics
premium lock icon
Companies
Hint
You are given the head of a linked list, and an integer k.

Return the head of the linked list after swapping the values of the kth node from the beginning and the kth node from the end (the list is 1-indexed).

 

Example 1:


Input: head = [1,2,3,4,5], k = 2
Output: [1,4,3,2,5]
Example 2:

Input: head = [7,9,6,6,7,8,3,0,9,5], k = 5
Output: [7,9,6,6,8,7,3,0,9,5]
 

Constraints:

The number of nodes in the list is n.
1 <= k <= n <= 105
0 <= Node.val <= 100

*/