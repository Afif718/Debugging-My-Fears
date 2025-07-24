#include<bits/stdc++.h>
using namespace std;

class myStack{
    public:
        vector<int> v;

    void push(int val){
        v.push_back(val);
    }

    void pop(){
        if(!v.empty()){
            v.pop_back();
        }
    }

    int top(){
        return v.back();
    }

    int size(){
        return v.size();
    }

    bool empty(){
        return v.empty();
    }

};

int main(){

    myStack st;
    myStack st2;

    int st_size;
    cin >> st_size;
    for(int i=0; i<st_size; i++){
        int val;
        cin >> val;
        st.push(val);
    }

    int st2_size;
    cin >> st2_size;
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

    cout << ((isSame)? "YES\n" : "NO\n");
    
    return 0;
}

/*
Question: Take two stacks of size N and M as input and check if both of them are the same or not. Don’t use STL stack to solve this problem.

Sample Input
Sample Output
5
10 20 30 40 50
5
10 20 30 40 50
YES
5
10 20 30 40 50
4
10 20 30 40
NO
5
10 20 30 40 50
5
50 40 30 20 10
NO


*/