#include<stdio.h>

int main(){

    int arr_size;
    scanf("%d", &arr_size);

    //initialize the array
    int arr[arr_size];

    for(int i=0; i<arr_size; i++){
        scanf("%d", &arr[i]);
    }

    //print the array
    for(int i=0; i<arr_size; i++){
        printf("%d ", arr[i]);
    }

    printf("\n");

    //take the index from user
    int rev_index;
    scanf("%d", &rev_index);

    //now to delete shift values from left to right
    //----------------> 
    /*    a[1] = a[2]
          a[2] = a[3]
          a[3] = a[4]
          a[4] = a[5] */
    for(int i=rev_index; i<arr_size; i++){
        //printf("%d ", i+1);
        

        arr[i] = arr[i+1];
    }

    //print the array
    for(int i=0; i<arr_size-1; i++){
        printf("%d ", arr[i]);
    }

    
    return 0;
}