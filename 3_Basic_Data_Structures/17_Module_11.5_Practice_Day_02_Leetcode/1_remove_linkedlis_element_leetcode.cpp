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
    // Helper function to insert a new node at the tail of the list
    void insert_at_tail(ListNode* &head, ListNode* &tail, int val) {
        // Create a new node with the given value
        ListNode* newnode = new ListNode(val);

        // If the list is empty, new node becomes both head and tail
        if (head == NULL) {
            head = newnode;
            tail = newnode;
            return;
        }

        // Append the new node at the end and update the tail
        tail->next = newnode;
        tail = newnode;
    }

public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* newhead = NULL;  // New head for the filtered list
        ListNode* newtail = NULL;  // Tail pointer for efficient insertion

        ListNode* temp = head;     // Iterator pointer for the original list

        // Traverse the original list
        while (temp != NULL) {
            // Only insert nodes that don't match the target value
            if (temp->val != val) {
                insert_at_tail(newhead, newtail, temp->val);
            }
            temp = temp->next;
        }

        // Debugging: print the new list (can be removed later)
        // temp = newhead;
        // while (temp != NULL) {
        //     cout << temp->val << " ";
        //     temp = temp->next;
        // }

        // Return the head of the new filtered list
        return newhead;
    }
};


/*
203. Remove Linked List Elements
Solved
Easy
Topics
premium lock icon
Companies
Given the head of a linked list and an integer val, remove all the nodes of the linked list that has Node.val == val, and return the new head.

 

Example 1:


Input: head = [1,2,6,3,4,5,6], val = 6
Output: [1,2,3,4,5]
Example 2:

Input: head = [], val = 1
Output: []
Example 3:

Input: head = [7,7,7,7], val = 7
Output: []
 

Constraints:

The number of nodes in the list is in the range [0, 104].
1 <= Node.val <= 50
0 <= val <= 50
*/