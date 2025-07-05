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
        
    } else{
        tail->next = newnode;
        tail = newnode;
    }


}

// int get_size(Node* head){
//     Node* temp = head;

//     int count_size = 0;

//     while(temp != NULL){
//         count_size++;
//         temp = temp->next;
//     }

//     return count_size;
// }

int find_max(Node* head){

    int maxval = head->val;

    for(Node* i=head; i != NULL; i = i->next){
        if(i->val > maxval){
            maxval = i->val;
        }
    }

    return maxval;
}

int find_min(Node* head){

    int minval = head->val;

    for(Node* i=head; i != NULL; i = i->next){
        if(i->val < minval){
            minval = i->val;
        }
    }

    return minval;
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

    cout << find_max(head) - find_min(head);
   
    return 0;
}

/*

Problem Statement

You need to take a singly linked list of integer value as input and print the difference between the maximum and minimum value of the singly linked list.

Note: You must use singly linked list to solve this problem, otherwise you will not get marks.

Input Format

Input will contain the values of the singly linked list, and will terminate with -1.
Constraints

1 <= N <= 10^5; Here N is the maximum number of nodes of the linked list.
-10^9 <= V <= 10^9; Here V is the value of each node.
Output Format

Output the difference between the maximum and minimum value.
Sample Input 0

2 4 1 5 3 6 -1
Sample Output 0

5
Sample Input 1

2 -1
Sample Output 1

0

*/