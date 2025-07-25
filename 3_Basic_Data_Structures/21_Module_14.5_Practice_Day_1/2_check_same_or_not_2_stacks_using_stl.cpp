#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<int> st;
    queue<int> q;

    int st_size;
    cin >> st_size;

    for(int i=0; i<st_size; i++){
        int val;
        cin >> val;
        st.push(val);
    }

    int q_size;
    cin >> q_size;

    //input st2 vals in the stack2
    for(int i=0; i<q_size; i++){
        int val;
        cin >> val;
        q.push(val);
    }

    bool isSame = true;

    if(st.size() == q.size()){
        while(!st.empty() && !q.empty()){
            if(st.top() != q.front()){
                isSame = false;
                break;
            }

            st.pop();
            q.pop();
        }
    } else{
        cout << "NO\n";
        return 0;
    }

    cout << (isSame? "YES\n" : "NO\n");
    return 0;
}

/*

Question: Take a stack of size N and a queue of size M as input. Then check if both of them are the same or not in the order of removing. You should use STL to solve this problem.

Sample Input
Sample Output
5
10 20 30 40 50
5
10 20 30 40 50
NO
5
10 20 30 40 50
4
10 20 30 40
NO
5
10 20 30 40 50
5
50 40 30 20 10
YES



*/