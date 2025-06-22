#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, q;
    cin >> n >> q;

    vector<int> v(n);

    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    while(q--){
        int search_num;
        cin >> search_num;
        bool isFound = false;

        int l = 0;
        int r = n-1;

        while(l<=r){
            int mid = (l+r)/2;

            if(v[mid] == search_num){
                isFound = true;
                break;
            } else if( v[mid] > search_num){
                r = mid - 1;
            } else{
                l = mid + 1;
            }

        }

        if(isFound){
            cout << "found" << endl;
        } else{
            cout << "not found" << endl;
        }

    }
    return 0;
}