#include<bits/stdc++.h>
using namespace std;

int main(){
    
    //1. Assign another list
    list<int> l = {1,2,3,4,5,6};
    //list<int> l2;
    //can use assign function
    //l2.assign(l.begin(), l.end());
    //l2 = l; // we will use this

    //briefly discuss the difference of vector and linkedlist and memory allocation. mention vector is just dynamic array
    // mention working process of these two
    
    //for inserting at head we can use push_front() function
    //l.push_front(999); //time complexity O(1)
    //for insert at tail we can use push_back() function
    //l.push_back(40); // time complexity 0(1)
    
    //access specific index in the list (though in list there is no index)
    //it's an iterator
    //next(l.begin(), index) its time complexity O(n)
    cout << "Element at index 2 --> " << *next(l.begin(), 2) <<endl; // it will print the index 2

    //insert at any position.
    //to insert we will use next(l.begin(), index) to access specific index
    cout << "After inserting 333 at any position (2) --> "; 
    l.insert(next(l.begin(), 2), 333); //explain it  and its time complexity O(n) explain also

    //we can even insert multiple values or even a whole list in another list's index using insert
    list<int> l2 = {400, 500};
    l.insert(next(l.begin(), 3), l2.begin(), l2.end());

    for(int val:l){
        cout << val << " ";
    }
    cout << endl;

    //for delete_at_head use pop_front()
    l.pop_front();
    //for delete_at_tail use pop_back()
    l.pop_back();


    for(int val:l){
        cout << val << " ";
    }
    return 0;
}