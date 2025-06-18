#include<bits/stdc++.h>
using namespace std;

int main(){
    int size;
    cin >> size;

    vector<int> v(size);

    for(int i=0; i<size; i++){
        cin >> v[i];
    }

    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    return 0;
}