#include<bits/stdc++.h>
using namespace std;

int main(){
    
    // Node* head = NULL;
    // Node* tail = NULL;
    list<int> l;

    int val;
    while(true){
        cin >> val;
        if(val == -1){
            break;
        }

        l.push_back(val);
    }

    l.reverse();

    for(int val: l){
        cout << val << " ";
    }
    cout << endl;

    cout << "After reversing head --> " << l.front() <<endl;
    cout << "After reversing head --> " <<  *l.end() << endl;
    
    return 0;
}