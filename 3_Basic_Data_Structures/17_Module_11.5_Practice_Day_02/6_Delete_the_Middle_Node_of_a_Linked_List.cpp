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

    // Helper function to calculate the size (length) of the linked list
    int list_size(ListNode* head){
        ListNode* temp = head;
        int count_size = 0;

        // Traverse through the list and count the nodes
        while(temp != NULL){
            count_size++;
            temp = temp->next;
        }

        return count_size;
    }

    // Helper function to delete the middle node from the list
    void del_node(ListNode* &head){

        int actual_size = list_size(head); // Get the total number of nodes

        int del_node_index = actual_size / 2; // Index of the middle node (0-based)
        int before_del_node_index = del_node_index - 1; // Index of node just before the middle

        ListNode* temp = head;

        // Traverse to the node just before the node to be deleted
        for(int i = 0; i < before_del_node_index; i++){
            temp = temp->next;
        }

        // Delete the middle node
        ListNode* del_node = temp->next;         // Node to be deleted
        temp->next = temp->next->next;           // Bypass the deleted node
        delete del_node;                         // Free the memory of deleted node
    }

public:
    ListNode* deleteMiddle(ListNode* head) {

        // If there's only one node, deleting the middle means returning NULL
        if(list_size(head) == 1){
            return NULL;
        } else {
            // Otherwise, call helper function to delete the middle node
            del_node(head);
        }

        // Return the updated head of the list
        return head;
    }
};


/*

Code
Testcase
Testcase
Test Result
2095. Delete the Middle Node of a Linked List
Solved
Medium
Topics
premium lock icon
Companies
Hint
You are given the head of a linked list. Delete the middle node, and return the head of the modified linked list.

The middle node of a linked list of size n is the ⌊n / 2⌋th node from the start using 0-based indexing, where ⌊x⌋ denotes the largest integer less than or equal to x.

For n = 1, 2, 3, 4, and 5, the middle nodes are 0, 1, 1, 2, and 2, respectively.
 

Example 1:


Input: head = [1,3,4,7,1,2,6]
Output: [1,3,4,1,2,6]
Explanation:
The above figure represents the given linked list. The indices of the nodes are written below.
Since n = 7, node 3 with value 7 is the middle node, which is marked in red.
We return the new list after removing this node. 
Example 2:


Input: head = [1,2,3,4]
Output: [1,2,4]
Explanation:
The above figure represents the given linked list.
For n = 4, node 2 with value 3 is the middle node, which is marked in red.
Example 3:


Input: head = [2,1]
Output: [2]
Explanation:
The above figure represents the given linked list.
For n = 2, node 1 with value 1 is the middle node, which is marked in red.
Node 0 with value 2 is the only node remaining after removing node 1.
 

Constraints:

The number of nodes in the list is in the range [1, 105].
1 <= Node.val <= 105

*/