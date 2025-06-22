#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, q;
    cin >> n >> q;

    vector<int> v(n);

    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    while(q--){
        int num;
        cin >> num;
        bool isFound = false;

        for(int i=0; i<n; i++){
            if(v[i] == num){
                isFound = true;
                break;
            }
        }

        if(isFound){
            cout << "Found" << endl;
        } else{
            cout << "Not Found" << endl;
        }
    }
    return 0;
}