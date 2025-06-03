#include<bits/stdc++.h>
using namespace std;

int* sort_it(int arr_size){
    int *arr = new int[arr_size];

    for(int i=0; i<arr_size; i++){
        cin >> arr[i];
    }

    //sort it
    sort(arr, arr+arr_size, greater<int>());

    return arr;
}

int main(){
    int arr_size;
    cin >> arr_size;

    int *arr = sort_it(arr_size);

    for(int i=0; i<arr_size; i++){
        cout << arr[i] << " ";
    }

    return 0;
}