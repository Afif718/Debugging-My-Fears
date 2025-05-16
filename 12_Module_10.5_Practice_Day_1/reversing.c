#include<stdio.h>

int main(){

    int arr_size;
    scanf("%d", &arr_size);

    int arr[arr_size];

    for(int i=0; i<arr_size; i++){
        scanf("%d", &arr[i]);
    }

    for(int i=arr_size-1; i>=0; i--){
        printf("%d ", arr[i]);
    }

    return 0;
}

//problem link : https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/F