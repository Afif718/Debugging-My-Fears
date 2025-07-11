#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int> l;

    int val;
    while(true){
        cin >> val;
        if(val == -1){
            break;
        }
        l.push_back(val);
    }

    l.sort(greater<int>()); //descending order
    l.sort(); //ascending order

    for(int val:l){
        cout << val << " ";
    }
    return 0;
}