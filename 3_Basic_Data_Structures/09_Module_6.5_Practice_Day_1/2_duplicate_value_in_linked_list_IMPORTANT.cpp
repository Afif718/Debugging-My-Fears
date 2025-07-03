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

void check_duplicate(Node* head, int freq[]){
    // vector<int> v(101, 0);
    //int freq[101] = {0};

    Node* temp = head;

    int isseen = false;

   while(temp != NULL){

    int val = temp->val;
    //now if the val already 1 then stop and raise the falg to true
    if(freq[val] == 1){
        isseen = true;
        break;
    }

    //make the val seen
    freq[val] = 1;

    temp = temp->next;
   }

    if(isseen){
        cout << "YES\n";
    } else{
        cout << "NO\n";
    }
}

int main(){

    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* tail = new Node(10);

    head->next = a;
    a->next = b;
    b->next = tail;

    int freq[101] = {0};

    check_duplicate(head, freq);

    
    return 0;
}