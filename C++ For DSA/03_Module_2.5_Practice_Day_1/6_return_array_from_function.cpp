#include<bits/stdc++.h>
using namespace std;

int* get_array(int arr_size){

    int *arr = new int[arr_size];

    for(int i=0; i<arr_size; i++){
        cin >> arr[i];
    }

    return arr;

}

int main(){
    
    int arr_size;
    cin >> arr_size;

    int arr = get_array(arr_size);

    return 0;
}