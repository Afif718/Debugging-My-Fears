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
    }

    tail->next = newnode;
    tail = newnode;
}

int get_size(Node* head){
    Node* temp = head;

    int count_size = 0;

    while(temp != NULL){
        count_size++;
        temp = temp->next;
    }

    return count_size;
}

void check_node_vals(Node* head1, Node* head2){
    Node* temp1 = head1;
    Node* temp2 = head2;

    bool isSame = true;

    while(temp1 != NULL && temp2 != NULL){
        
        if(temp1->val != temp2->val){
            isSame = false;
            break;
        }

        temp1 = temp1->next;
        temp2 = temp2->next;
    }

    if(isSame){
        cout << "YES\n";
    } else{
        cout << "NO\n";
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

    Node* head1 = NULL;
    Node* tail1 = NULL;

    while(true){
        int val;
        cin >> val;

        if(val == -1){
            break;
        }

        insert_at_tail(head1, tail1, val);
    }

    //node 2
    Node* head2 = NULL;
    Node* tail2 = NULL;

    while(true){
        int val;
        cin >> val;

        if(val == -1){
            break;
        }

        insert_at_tail(head2, tail2, val);
    }
    
    // print_node(head1);
    // cout << endl;
    // print_node(head2);
    // cout << endl;

    //check size
    if(get_size(head1) != get_size(head2)){
        cout << "NO\n";
    } else{
        //cout << "YES\n";
        check_node_vals(head1, head2);
    }
    return 0;
}

/*
Problem Statement

You will be given two singly linked list of integer values as input. You need to check if all the elements of both list are same which means both list are same. If they are same print "YES" otherwise print "NO".

Note: You must use singly linked list, otherwise you will not get marks.

Input Format

First line will contain the values of the first singly linked list, and will terminate with -1.
Second line will contain the values of the second singly linked list, and will terminate with -1.
Constraints

1 <= N1, N2 <= 1000; Here N1 and N2 is the maximum number of nodes of the first and second linked list.
0 <= V <= 1000; Here V is the value of each node.
Output Format

Output "YES" or "NO".
Sample Input 0

10 20 30 40 -1
10 20 30 40 -1
Sample Output 0

YES
Sample Input 1

10 20 30 40 -1
10 20 30 -1
Sample Output 1

NO
Sample Input 2

10 20 30 40 -1
40 30 20 10 -1
Sample Output 2

NO
*/