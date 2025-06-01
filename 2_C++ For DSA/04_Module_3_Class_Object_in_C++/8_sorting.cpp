#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr_size;
    cin >> arr_size;

    int arr[arr_size];

    for(int i=0; i<arr_size; i++){
        cin >> arr[i];
    }

    //sort(arr, arr+arr_size); //ascending order
    //sort(arr+1, arr+4); // it will sort from a[1] to arr[3]

    //sort in desending order
    sort(arr, arr+arr_size, greater<int>()); //descending order
    for(int i=0; i<arr_size; i++){
        cout << arr[i] << " ";
    }
    return 0;
}