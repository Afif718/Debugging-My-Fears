#include<stdio.h>

int count_odd(int arr[], int arr_size){

    int count_odd=0;

    for(int i=0; i<arr_size; i++){
        if(arr[i]%2!=0){
            count_odd++;
        }
    }

    return count_odd;
}

int main(){

    int arr_size;
    scanf("%d", &arr_size);
    int arr[arr_size];

    for(int i=0; i<arr_size; i++){
        scanf("%d", &arr[i]);
    }

    printf("%d", count_odd(arr, arr_size)); //array itself is passed as reference
    return 0;
}