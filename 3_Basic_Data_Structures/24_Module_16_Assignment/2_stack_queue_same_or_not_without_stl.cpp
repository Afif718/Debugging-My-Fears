#include<bits/stdc++.h>
using namespace std;

class MyStack{
    public:
        vector<int> st;

    void push(int val){
        st.push_back(val);
    }

    void pop(){
        if(!st.empty()){
            st.pop_back();
        }
    }

    int size(){
        return st.size();
    }

    int top(){
        return st.back();
    }

    bool empty(){
        return st.empty();
    }
};

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

class MyQueue{
    Node* head = NULL;
    Node* tail = NULL;
    int q_size = 0;
    public:
        

    void push(int val){
        q_size++;
       Node* newnode = new Node(val);
       //add in tail
       if(head == NULL){
            head = newnode;
            tail = newnode;
            return;
       }

       tail->next = newnode;
       newnode->prev = tail;
       tail = newnode;
    }

    void pop(){
        //delete at head
        if(head != NULL){
            Node* delnode = head;
            head = head->next;

            if(head != NULL){
                head->prev = NULL;
            } else{
                tail = NULL;
            }

            delete delnode;

            q_size--;
        }
    }

    int size(){
        return q_size;
    }

    int front(){
        return head->val;
    }

     bool empty(){
        return head == NULL;
    }
};

int main(){

    MyStack st;
    MyQueue q;

    int st_size, q_size;
    cin >> st_size >> q_size;

    for(int i=0; i<st_size; i++){
        int val;
        cin >> val;
        st.push(val);
    }

    for(int i=0; i<q_size; i++){
        int val;
        cin >> val;
        q.push(val);
    }

    bool isSame = true;

    if(st_size != q_size){
        cout << "NO\n";
        return 0;
    } else{
        while(!st.empty() && !q.empty()){
            if(st.top() != q.front()){
                isSame = false;
                break;

            }

            st.pop();
            q.pop();
        }
    }

    cout << (isSame ? "YES\n" : "NO\n");
    return 0;
}

/*
problem link: https://www.hackerrank.com/contests/assignment-03-a-basic-data-structure-a-batch-07/challenges/same-or-not-4/problem


question: There is a list of  values that were inserted into a stack and a list of  values that were inserted into a queue. You need to determine whether the stack and queue are the same or not based on the order in which the elements are removed.

Note: You cannot use any  here. You need to implement the stack and queue by yourself. You can use linked list or array as you want.

Input Format

First line will contain  and .
Second line will contain stack  with  values.
Third line will contain queue  with  values.
Constraints

Output Format

Output YES if they were same, otherwise NO.
Sample Input 0

5 5
10 20 30 40 50
50 40 30 20 10
Sample Output 0

YES
Sample Input 1

4 4
10 20 30 40
10 20 30 40
Sample Output 1

NO
Sample Input 2

5 4
1 2 3 4 5
5 4 3 2
Sample Output 2

NO
*/