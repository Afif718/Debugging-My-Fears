#include<stdio.h>

int main(){

    int arr_size;
    scanf("%d", &arr_size);

    //initialize the array
    int arr[arr_size];

    for(int i=0; i<arr_size; i++){
        scanf("%d", &arr[i]);
    }

    //assume max val
    int max_val = arr[0];
    for(int i=1; i<arr_size; i++){
        if(arr[i]<max_val){
            max_val = arr[i];
        }
    }

    printf("%d", max_val);
    return 0;
}