#include<stdio.h>

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

    //take two variables
    int i =0; //start point
    int j=arr_size -1; //end point

    while(i<j){

        //swapping values
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;

        //we need to increase i and decrease j everytime by one untill i<j
        i++;
        j--;
    }

    printf("\n");

    for(int i=0; i<arr_size; i++){
        printf("%d ", arr[i]);
    }


    return 0;
}