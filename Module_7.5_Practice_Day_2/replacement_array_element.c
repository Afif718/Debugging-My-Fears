#include<stdio.h>

int main(){

    //arry size
    int arr_size;
    scanf("%d", &arr_size);

    //array
    int arr[arr_size];

    for(int i=0; i<arr_size; i++){
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<arr_size; i++){
        if(arr[i]==0){
            arr[i] = 0;
        } 
        
        if(arr[i]>0){
            arr[i] = 1;
        }

        if(arr[i]<0){
            arr[i] = 2;
        }

        printf("%d ", arr[i]);
    }
    return 0;
}

//problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/C