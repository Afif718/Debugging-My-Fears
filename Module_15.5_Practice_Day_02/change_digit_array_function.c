#include<stdio.h>

void change_it(int arr[], int arr_size){

    arr[arr_size-1] = 100;

    for(int i=0; i<arr_size; i++){
        printf("%d ", arr[i]);
    }

}

int main(){

    int arr_size;
    scanf("%d", &arr_size);
    int arr[arr_size];

    for(int i=0; i<arr_size; i++){
        scanf("%d", &arr[i]);
    }

    change_it(arr, arr_size); //array itself is passed as reference
    return 0;
}