#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<int> st;
    stack<int> st2;

    int st_size;
    cin >> st_size;

    for(int i=0; i<st_size; i++){
        int val;
        cin >> val;
        st.push(val);
    }

    int st2_size;
    cin >> st2_size;

    //input st2 vals in the stack2
    for(int i=0; i<st2_size; i++){
        int val;
        cin >> val;
        st2.push(val);
    }

    bool isSame = true;

    if(st.size() == st2.size()){
        while(!st.empty() && !st2.empty()){
            if(st.top() != st2.top()){
                isSame = false;
                break;
            }

            st.pop();
            st2.pop();
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