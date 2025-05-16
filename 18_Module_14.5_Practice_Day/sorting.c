#include<stdio.h>

int main(){

    int arr_size;
    scanf("%d", &arr_size);
    
    int arr[arr_size];

    for(int i=0; i<arr_size; i++){
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<arr_size; i++){ //choto hole boro(>)
        //printf("%d ", arr[i]);
        //need another loop to start from j+1 
        for(int j=i+1; j<arr_size; j++){
            if(arr[i]>arr[j]){  // if arr[i] grater than arr[j] then swap
                //swap
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for(int i=0; i<arr_size; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}

//problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/H