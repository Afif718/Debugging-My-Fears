#include<stdio.h>

int main(){

    int arr_size;
    scanf("%d", &arr_size);

    //initialize the array
    int arr[arr_size];

    for(int i=0; i<arr_size; i++){
        scanf("%d", &arr[i]);
    }

    //update array index and array value
    int arr_index;
    int update_val;
    scanf("%d %d", &arr_index, &update_val);

    for(int i=0; i<arr_size; i++){
        //update
        arr[arr_index] = update_val;
    }

    for(int i=arr_size-1; i>=0; i--){
        printf("%d ", arr[i]);
    }

    
    return 0;
}