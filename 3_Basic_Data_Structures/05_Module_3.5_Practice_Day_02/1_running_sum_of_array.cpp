#include<bits/stdc++.h>
using namespace std;

int main(){
    int v_size;
    cin >> v_size;

    vector<int> v(v_size);

    for(int i=0; i<v_size; i++){
        cin >> v[i];
    }

    vector<int> pre(v_size);
    pre[0] = v[0];
    for(int i=1; i<v_size; i++){
        pre[i] = pre[i-1] + v[i];
    }

    //print the vector
    for(int i=0; i<v_size; i++){
        cout << pre[i] << " ";
    }

    return 0;
}

//problem link: https://docs.google.com/document/d/1SInJU7vWMgmLO-lulcQ2aGAeLze-0632fS8Iz-14t_A/edit?tab=t.0#heading=h.rcaw43typj5