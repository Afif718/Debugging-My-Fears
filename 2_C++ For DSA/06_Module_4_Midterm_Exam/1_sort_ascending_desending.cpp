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
    for(int i=0; i<arr_size; i++){
        cout << arr[i] << " ";
    }

    cout << "\n";

    sort(arr, arr+ arr_size, greater<int>());

    for(int i=0; i<arr_size; i++){
        cout << arr[i] << " ";
    }
    return 0;
}

//problem link: https://www.hackerrank.com/contests/mid-term-a-introduction-to-c-for-dsa-a-batch-07/challenges/sort-it-6-3
