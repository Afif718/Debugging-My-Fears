#include <bits/stdc++.h>
using namespace std;

int main() {
    stack<int> st;

    int st_size;
    cin >> st_size;

    for(int i=0; i<st_size; i++){
        int val;
        cin >> val;
        st.push(val);
    }

    //10 20 30 40 50 --> 50 is top and 10 is the bottom
    stack<int> st2;

    while(!st.empty()){
        st2.push(st.top()); // 50 40 30 20 10 now 10 is top
        st.pop();
    }

    while(!st2.empty()){
        // it will start printing from the top
        cout << st2.top() << " ";  // 50 40 30 20 10 now 10 is top
        st2.pop();
    }

    return 0;
}