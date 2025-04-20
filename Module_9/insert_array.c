#include<stdio.h>

int main(){

    int arr_size = 100;
    int arr[arr_size];

    scanf("%d", &arr_size);

    for(int i=0; i<arr_size; i++){
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<arr_size; i++){
        printf("%d ", arr[i]);
    }

    printf("\n");

    int index, new_val;
    scanf("%d %d", &index, &new_val);
    //1 2 3 4 5
    //1 new_val 2 3 4 5
    int new_arr[arr_size + 1];

    //copy the old array into the new array
    for(int i=0; i<arr_size+1; i++){
        new_arr[i]= arr[i];
    }

    //shift from right to left
    for(int i=arr_size+1; i>index; i--){
        //printf("%d ", i-1);
        new_arr[i] = arr[i-1];
    }

    //print the array
    for(int i=0; i<arr_size+1; i++){
        new_arr[index] = new_val;
        printf("%d ", new_arr[i]);
    }

    // //shift from right to left
    // for(int i=arr_size+1; i>=0; i--){
    //     new_arr[i] = arr[i-1];
    //     new_arr[index]=new_val;
    // }

    // printf("\n");

    // //print the array 
    // for(int i=0; i<arr_size+1; i++){
    //     printf("%d ", new_arr[i]);
    // }

    return 0;
}