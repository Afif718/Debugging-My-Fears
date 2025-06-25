#include<bits/stdc++.h>
using namespace std;

int main(){
    int size;
    cin >> size;

    vector<long long int> v(size);

    for(int i=0; i<size; i++){
        cin >> v[i];
    }

    //prefix sum
    vector<long long int> prefix_sum(size);
    prefix_sum[0] = v[0];

    for(int i=1; i<size; i++){
        prefix_sum[i] = prefix_sum[i-1] + v[i];
    }

    //reverse the prefix sum
    reverse(prefix_sum.begin(), prefix_sum.end());

    for(int i=0; i<size; i++){
        cout << prefix_sum[i] << " ";
    }
    
    return 0;
}