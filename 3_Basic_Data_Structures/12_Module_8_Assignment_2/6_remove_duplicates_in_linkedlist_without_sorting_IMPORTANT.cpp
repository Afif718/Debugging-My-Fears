#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int val;
        Node* next;
    
     Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(Node* &head, Node* &tail, int val){
    Node* newnode = new Node(val);

    if(head == NULL){
        head = newnode;
        tail = newnode;
        return;
    }

    tail->next = newnode;
    tail = newnode;
}

//remove duplicate using while loop
// void remove_duplicate_from_linkedlist(Node* &head){
//     Node* current = head;

//     while(current != NULL){
//         Node* runner = current;

//         // runner checks every node after current
//         while(runner->next != NULL){
//             if(current->val == runner->next->val){
//                 // Duplicate found, delete it
//                 Node* duplicate = runner->next;
//                 runner->next = runner->next->next; // bypass duplicate
//                 delete duplicate;
//             } else{
//                 // No duplicate, move runner forward
//                 runner = runner->next;
//             }
//         }

//         // Move current to the next node
//         current = current->next;
//     }
// }

/*
    Function to remove duplicates from an unsorted singly linked list

    Logic:
    - Use two nested loops.
    - Outer loop (i) picks each node starting from the head.
    - Inner loop (j) checks all nodes after 'i'.
    - If j->next has a value equal to i->val, it's a duplicate and gets deleted.
    - If not, move j forward.

    Visualization:
    Input: 1 → 2 → 4 → 2 → 3 → 4 → NULL

    Outer loop (i = 1):
        Inner loop (j scans after i):
            j = 2 ✅
            j = 4 ✅
            j = 2 ❌ (duplicate, delete it)
            j = 3 ✅
            j = 4 ❌ (duplicate, delete it)

    Remaining list after loop:
    1 → 2 → 4 → 3 → NULL
*/
void remove_duplicate_from_linkedlist(Node* &head) {
    for (Node* i = head; i != NULL; i = i->next) {
        for (Node* j = i; j->next != NULL;) {
            if (i->val == j->next->val) {
                // Found duplicate value
                Node* duplicate = j->next;

                // Remove duplicate node by skipping it
                j->next = j->next->next;

                // Free the memory of the removed node
                delete duplicate;
            } else {
                // Move to next node only if no deletion was done
                j = j->next;
            }
        }
    }
}


void print_node(Node* head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
}

int main(){

    Node* head = NULL;
    Node* tail = NULL;

    while(true){
        int val;
        cin >> val;

        if(val == -1){
            break;
        }

        insert_at_tail(head, tail, val);
    }
    
    remove_duplicate_from_linkedlist(head);
    print_node(head);
    return 0;
}

/*

Problem Statement

You will be given a singly linked list of integer values as input. You need to remove duplicate values from the linked list and finally print the linked list.

The process is, for each node N, traverse from that node and delete all nodes where the values are same with N.

Note: You must use singly linked list, otherwise you will not get marks.

Input Format

First line will contain the values of the singly linked list, and will terminate with -1.
Constraints

1 <= N <= 1000; Here N is the maximum number of nodes of the linked list.
0 <= V <= 1000; Here V is the value of each node.
Output Format

Output the final linked list where there will be no duplicate values.
Sample Input 0

1 2 3 4 5 -1
Sample Output 0

1 2 3 4 5
Sample Input 1

1 2 4 2 3 5 1 4 5 2 6 1 -1
Sample Output 1

1 2 4 3 5 6
Sample Input 2

5 5 1 1 2 4 2 4 1 3 5 0 -1
Sample Output 2

5 1 2 4 3 0
Sample Input 3

10 10 10 20 20 20 10 20 -1
Sample Output 3

10 20

*/