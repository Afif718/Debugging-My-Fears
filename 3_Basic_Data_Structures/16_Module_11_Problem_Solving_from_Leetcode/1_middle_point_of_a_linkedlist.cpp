
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
public:
    int list_size(ListNode* head){
        ListNode* temp = head;
        int size = 0;

        while(temp != NULL){
            size++;
            temp = temp->next;
        }

        return size;
    }

    ListNode* middleNode(ListNode* head) {
        
        int size = list_size(head);
        int middle_point = size/2;

        ListNode* temp = head;

        for(int i=0; i<middle_point; i++){
            temp = temp->next;
        }

        return temp;

        return head;
        
    }
};

/*
876. Middle of the Linked List
Solved
Easy
Topics
premium lock icon
Companies
Given the head of a singly linked list, return the middle node of the linked list.

If there are two middle nodes, return the second middle node.

 

Example 1:


Input: head = [1,2,3,4,5]
Output: [3,4,5]
Explanation: The middle node of the list is node 3.
Example 2:


Input: head = [1,2,3,4,5,6]
Output: [4,5,6]
Explanation: Since the list has two middle nodes with values 3 and 4, we return the second one.
 

Constraints:

The number of nodes in the list is in the range [1, 100].
1 <= Node.val <= 100
*/