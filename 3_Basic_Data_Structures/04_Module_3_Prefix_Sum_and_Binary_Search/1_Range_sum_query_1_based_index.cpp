#include<bits/stdc++.h>
using namespace std;

int main(){
    int v_size, q;
    cin >> v_size >> q;

    vector<int> v(v_size + 1);

    for(int i=1; i<=v_size; i++){
        cin >> v[i];
    }

    while(q--){
        int l, r;
        cin >> l >> r;
        
        int sum=0;
        for(int i=l; i<=r; i++){
            sum += v[i];
        }

        cout << sum << endl;
    }
    return 0;
}

//total time complexity : O(Q*N)