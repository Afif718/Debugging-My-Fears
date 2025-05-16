#include<stdio.h>

int main(){

    int arr_size;
    scanf("%d", &arr_size);

    //initialize the array
    int arr[arr_size];

    for(int i=0; i<arr_size; i++){
        scanf("%d", &arr[i]);
    }

    int sum_positive=0;
    int sum_neg=0;

    for(int i=0; i<arr_size; i++){
        if(arr[i]>0){
            sum_positive +=arr[i];
        }

        if(arr[i]<0){
            sum_neg +=arr[i];
        }
    }

    printf("%d %d", sum_positive, sum_neg);
    
    return 0;
}