#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr_size;
    cin >> arr_size;

    int arr[arr_size];

    for(int i=0; i<arr_size; i++){
        cin >> arr[i];
    }

    int maximum = *max_element(arr, arr+arr_size);

    cout << maximum <<endl;

    return 0;
}

//problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/E