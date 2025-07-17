#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int val;
        Node* next;
        Node* prev;
    
     Node(int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
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
    newnode->prev = tail;
    tail = newnode;
}

// int size_of_list(Node* head){
//     Node* temp = head;
//     int count_size = 0;

//     while(temp != NULL){
//         count_size++;
//         temp = temp->next;
//     }

//     return count_size;
// }

// void print_list(Node* head){
//     Node* temp = head;

//     while(temp != NULL){
//         cout << temp->val << " ";
//         temp = temp->next;
//     }
// }

bool check_palindrom(Node* &head, Node* &tail){
    Node* temphead = head;
    Node* temptail = tail;

    bool isPal = true;

    while(temphead != NULL){

        if(temphead->val != temptail->val){
            isPal = false;
            break;
        }

        temphead = temphead->next;
        temptail = temptail->prev;
    }


    return isPal;
}

int main(){

    Node* head = NULL;
    Node* tail = NULL;
    
    int val;

    while(true){
        cin >> val;
        if(val == -1){
            break;
        }

        insert_at_tail(head, tail, val);
    }

    cout << (check_palindrom(head, tail)? "YES\n" : "NO\n");

    return 0;
}

/*
Palindrome
Problem
Submissions
Leaderboard
Discussions
Problem Statement

You need to take a doubly linked list of integer value as input. You need to tell if the doubly linked list forms a palindrome or not.

Note: You need to solve this using Doubly Linked List, otherwise you will not get marks.

Input Format

Input will contain the values of the doubly linked list, and will terminate with -1.
Constraints

1 <= N <= 10^6; Here N is the maximum number of nodes of the linked list.
0 <= V <= 1000; Here V is the value of each node.
Output Format

Output "YES" if it forms a palindrom otherwise output "NO".
Sample Input 0

1 2 3 2 1 -1
Sample Output 0

YES
Sample Input 1

1 2 2 1 -1
Sample Output 1

YES
Sample Input 2

1 -1
Sample Output 2

YES
Sample Input 3

1 2 3 1 -1
Sample Output 3

NO

*/