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
    void  insert_at_tail(ListNode* &head, ListNode* &tail, int val){
        ListNode* newnode = new ListNode(val);
        
        if(head == NULL){
            head = newnode;
            tail = newnode;
            return;
        }

        tail->next = newnode;
        tail = newnode;

    }

    void reverse_list(ListNode* &head, ListNode* temp){

        if(temp->next == NULL){
            head = temp;
            return;
        }

        reverse_list(head, temp->next);

        temp->next->next = temp;
        temp->next = NULL;
    }

public:
    bool isPalindrome(ListNode* head) {
        ListNode* newhead = NULL;
        ListNode* newtail = NULL;

        ListNode* temp = head;

        while(temp != NULL){

            insert_at_tail(newhead, newtail, temp->val);
            temp = temp->next;
        }

        reverse_list(newhead, newhead);

        ListNode* originalList = head;
        ListNode* reverselist = newhead;

        while(reverselist != NULL){

            // cout << temp->val << " ";
            if(originalList->val != reverselist->val){
                return false;
            }

            originalList = originalList->next;
            reverselist = reverselist->next;
        }

        return true;
    }
};


/*

234. Palindrome Linked List
Solved
Easy
Topics
premium lock icon
Companies
Given the head of a singly linked list, return true if it is a palindrome or false otherwise.

 

Example 1:


Input: head = [1,2,2,1]
Output: true
Example 2:


Input: head = [1,2]
Output: false
 

Constraints:

The number of nodes in the list is in the range [1, 105].
0 <= Node.val <= 9

*/