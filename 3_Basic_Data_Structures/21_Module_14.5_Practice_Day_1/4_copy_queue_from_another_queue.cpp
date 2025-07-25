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

    // while(!q.empty()){
    //     cout << q.front() << " "; 
    //     q.pop();
    // }

    stack<int> st;
    while(!q.empty()){
        st.push(q.front());
        q.pop();
    }

    queue<int> q2;
    while(!st.empty()){
        q2.push(st.top());
        st.pop();
    }

    while(!q2.empty()){
        cout << q2.front() << " ";
        q2.pop();
    }
    return 0;
}