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

int main(){
    //Dynamic Object
    //head is a pointer
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);

    //previously a.next = &b but now we can use
    head->next = a;
    a->next = b;

    cout << head->val <<endl; // head is a pointer and it will print first 
    cout << head->next->val << endl; // it will print a
    // cout << head->next->next.val << endl;
    
    return 0;
}