#include<stdio.h>

void minMaxFunc(int arr[], int arr_size){

    // for(int i=0; i<arr_size; i++){
    //     printf("%d ", arr[i]);
    // }

    int min=arr[0];

    for(int i=0; i<arr_size; i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }

    int max=arr[0];

    for(int i=0; i<arr_size; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }

    printf("%d %d\n", min, max);
}

int main(){

    int arr_size;
    scanf("%d", &arr_size);

    int arr[arr_size];

    for(int i=0; i<arr_size; i++){
        scanf("%d", &arr[i]);
    }

    minMaxFunc(arr, arr_size);

    return 0;
}