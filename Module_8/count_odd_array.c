#include<stdio.h>

int main(){

    int arr_size;
    scanf("%d", &arr_size);

    //initialize the array
    int arr[arr_size];

    for(int i=0; i<arr_size; i++){
        scanf("%d", &arr[i]);
    }

    int count_odd;
    for(int i=0; i<arr_size; i++){
        if(arr[i]% 2 != 0){
            count_odd++;
        }
    }

    printf("%d", count_odd);
    
    return 0;
}