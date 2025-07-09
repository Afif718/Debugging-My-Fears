#include<bits/stdc++.h>
using namespace std;

int main(){
    
    //1. Assign another list
    list<int> l = {1,2,3,4,5};
    list<int> l2;
    l2 = l;
    
    for(int val:l2){
        cout << val << " ";
    }
    return 0;
}