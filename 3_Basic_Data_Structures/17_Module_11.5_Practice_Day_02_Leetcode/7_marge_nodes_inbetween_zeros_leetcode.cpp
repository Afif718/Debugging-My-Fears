class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        ListNode* dummy = new ListNode(0); // Create a dummy node to start building the result list
        ListNode* tail = dummy;            // 'tail' will always point to the last node in the new list
        ListNode* curr = head->next;       // Skip the first node (it's always 0), start from the next

        int sum = 0; // This will hold the sum of values between two 0s

        // Traverse the linked list
        while(curr != NULL){
            if(curr->val != 0){
                sum += curr->val; // Keep adding values until we find a 0
            } else {
                // We've hit a 0, which means we finish a segment
                // So we create a new node with the sum and attach it to the result list
                tail->next = new ListNode(sum);
                tail = tail->next; // Move the tail to the newly added node
                sum = 0; // Reset the sum for the next segment
            }
            curr = curr->next; // Move to the next node
        }

        dummy = dummy->next; // Skip the initial dummy node (value 0) to return the actual result head
        
        return dummy;
    }
};


/*
2181. Merge Nodes in Between Zeros
Solved
Medium
Topics
premium lock icon
Companies
Hint
You are given the head of a linked list, which contains a series of integers separated by 0's. The beginning and end of the linked list will have Node.val == 0.

For every two consecutive 0's, merge all the nodes lying in between them into a single node whose value is the sum of all the merged nodes. The modified list should not contain any 0's.

Return the head of the modified linked list.

 

Example 1:


Input: head = [0,3,1,0,4,5,2,0]
Output: [4,11]
Explanation: 
The above figure represents the given linked list. The modified list contains
- The sum of the nodes marked in green: 3 + 1 = 4.
- The sum of the nodes marked in red: 4 + 5 + 2 = 11.
Example 2:


Input: head = [0,1,0,3,0,2,2,0]
Output: [1,3,4]
Explanation: 
The above figure represents the given linked list. The modified list contains
- The sum of the nodes marked in green: 1 = 1.
- The sum of the nodes marked in red: 3 = 3.
- The sum of the nodes marked in yellow: 2 + 2 = 4.
 

Constraints:

The number of nodes in the list is in the range [3, 2 * 105].
0 <= Node.val <= 1000
There are no two consecutive nodes with Node.val == 0.
The beginning and end of the linked list have Node.val == 0.
*/