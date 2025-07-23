#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<int> q;

    int q_size;
    cin >> q_size;

    for(int i=0; i<q_size; i++){
        int val;
        cin >> val;

        q.push(val);
    }

    while(!q.empty()){
        cout << q.front()  << " ";
        q.pop();
    }
    return 0;
}