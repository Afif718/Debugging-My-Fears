#include<stdio.h>

//this array insertion using a new array, copying old array values into it
//And then inserting the new value into the index
//then printing it 

int main(){

    int arr_size;

    scanf("%d", &arr_size);

    int arr[arr_size];

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
    // <------------------
    /*    a[5] = a[4]
          a[4] = a[3]
          a[3] = a[2]
          a[2] = a[1] */
    for(int i=arr_size+1; i>index; i--){
        //printf("%d ", i-1);
        new_arr[i] = arr[i-1];
        //printf("%d ", i);
        //printf("%d ", i-1);
    }

     //now add the new value to the new index
     new_arr[index] = new_val;

    // //print the array
    for(int i=0; i<arr_size+1; i++){

        //print the new array
        printf("%d ", new_arr[i]);
    }

    return 0;
}