#include<bits/stdc++.h>
using namespace std;

int main(){
    int vector_size;
    cin >> vector_size;

    vector<int> v(vector_size);

    for(int i=0; i<vector_size; i++){
        cin >> v[i];
    }

    for(int i=0; i<vector_size; i++){
        if(v[i]>0){
            replace(v.begin(), v.end(), v[i], 1);
        } else if(v[i]<0){
            replace(v.begin(), v.end(), v[i], 2);
        }
    }

    for(int x:v){
        cout << x << " ";
    }
    return 0;
}

//problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/C