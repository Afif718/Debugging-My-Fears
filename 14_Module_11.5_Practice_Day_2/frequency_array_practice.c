#include<stdio.h>

int main(){

    int arr_size, range;
    scanf("%d %d", &arr_size, &range);

    int arr[arr_size];

    for(int i=0; i<arr_size; i++){
        scanf("%d", &arr[i]);
    }

    //now we have to create dynamic variables which we will store in an array
    int range_end = range+1;
    int fre_arr[range_end];

    //making all the array elements into 0
    for(int i=1; i<=range_end; i++){
        fre_arr[i] = 0;
    }

    for(int i=0; i<arr_size; i++){
        /*Previously it was
        if(arr[i] == 0){
        count0++;}*/
        int val = arr[i];
        fre_arr[val]++;
    }

    for(int i=1; i<range_end; i++){
        printf("%d\n", fre_arr[i]);
    }

    return 0;
}