#include<stdio.h>

int count_before_one(int arr[], int arr_size){

    int count_before_one=0;

    for(int i=0; i<arr_size; i++){

        if(arr[i]==1){
            break;

        }
        
        count_before_one++;
        
    }

    return count_before_one;
}

int main(){

    int arr_size;
    scanf("%d", &arr_size);
    int arr[arr_size];

    for(int i=0; i<arr_size; i++){
        scanf("%d", &arr[i]);
    }

    printf("%d", count_before_one(arr, arr_size));
    
    return 0;
}