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

void search_val_in_linkedlist(Node* head, int search_val){
    Node* temp = head;
    int index = 0;
    bool isfound = false;

    while(temp != NULL){
        //cout << temp->val << " ";
        if(temp->val == search_val){
            isfound = true;
            break;
        }
        index++;
        temp = temp->next;
    }

    if(isfound) {
        cout << index <<endl;
    } else{
        cout << -1 <<endl;
    }
}

int main(){

    int queries;
    cin >> queries;
    while(queries--){
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

        //search val
        int search_val;
        cin >> search_val;
        
        search_val_in_linkedlist(head, search_val);
    }

    
    return 0;
}

/*
Problem Statement

You need to take a singly linked list of integer values as input. Afterward, you will be given an integer value X. Your task is to determine whether X is present in the linked list or not. If it is present, print its first index from the left side; otherwise, print -1. Assume that the linked list's index starts with 0.

Note: You must use a singly linked list; otherwise, you will not receive marks.

Input Format

First line will contain T, the number of test cases.
First line of each test case will contain the values of the singly linked list, and will terminate with -1.
Second line of each test case will contain X.
Constraints

1 <= T <= 100
1 <= N <= 10^5; Here N is the maximum number of nodes of the linked list.
-10^9 <= V <= 10^9; Here V is the value of each node.
-10^9 <= X <= 10^9
Output Format

Output the index of X in the linked list.
Sample Input 0

4
1 2 3 4 5 -1
3
1 2 3 -1
5
1 -1
1
10 20 -1
20
Sample Output 0

2
-1
0
1

*/