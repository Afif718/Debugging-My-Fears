#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr_size;
    cin >> arr_size;

    int arr[arr_size];

    for(int i=0; i<arr_size; i++){
        cin >> arr[i];
    }

    sort(arr, arr+arr_size);

    int query;
    cin >> query;

    

    while(query--){

        int l = 0;
        int r = arr_size - 1;

        int search_num; 
        cin >> search_num;

        bool isFound = false;

        while(l <= r){
            int mid = (l + r) / 2;

            if(arr[mid] == search_num){
                isFound = true;
                break;
            } else if(arr[mid] > search_num){
                r = mid - 1;
            } else{
                l = mid + 1;
            }
        }

        if(isFound){
            cout << "YES\n";
        } else{
            cout << "NO\n";
        }

    }
    return 0;
}

//problem link: https://docs.google.com/document/d/1SInJU7vWMgmLO-lulcQ2aGAeLze-0632fS8Iz-14t_A/edit?tab=t.0#heading=h.rcaw43typj5