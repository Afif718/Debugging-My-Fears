#include<stdio.h>
#include<limits.h>

int main(){

    //arry size
    int arr_size;
    scanf("%d", &arr_size);

    if(arr_size >=2){
        

        //array
    int arr[arr_size];

    for(int i=0; i<arr_size; i++){
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<arr_size; i++){
        if(arr[i]>=INT_MIN && arr[i]<=10){
            printf("A[%d] = %d\n", i, arr[i]);
        }
    }

    }
    
    
    return 0;
}

//problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/D