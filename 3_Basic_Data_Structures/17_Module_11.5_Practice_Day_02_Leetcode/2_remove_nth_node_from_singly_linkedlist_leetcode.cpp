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

    // Function to calculate the size of the linked list
    int list_size(ListNode* head) {
        ListNode* temp = head;
        int count_size = 0;

        while (temp != NULL) {
            count_size++;        // Increment count for each node
            temp = temp->next;   // Move to next node
        }

        return count_size;
    }

    // Function to remove the nth node from the end of the list
    void remove_nth_node(ListNode* &head, int n) {
        ListNode* temp = head;
        int size = list_size(head);

        // Find the position from the front (0-based index)
        int nth_ele = size - n;

        // Case 1: If the node to be removed is the head
        if (size == n) {
            ListNode* delnode = head;
            head = head->next;   // Move head to the next node
            delete delnode;      // Delete the old head
        } 
        // Case 2: General case — delete node in the middle or end
        else {
            // Traverse to the node just before the target
            for (int i = 0; i < nth_ele - 1; i++) {
                temp = temp->next;
            }

            // Unlink and delete the nth node
            ListNode* delnode = temp->next;
            temp->next = temp->next->next;
            delete delnode;
        }
    }

public:
    // Main function to be called
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int size = list_size(head);

        // If the list has only one node, return NULL
        if (size == 1) {
            return NULL;
        }

        // Call helper to remove the nth node from end
        remove_nth_node(head, n);
        return head;  // Return updated head
    }
};
