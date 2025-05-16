#include<stdio.h>

int main(){


    int arr_size;
    scanf("%d", &arr_size);

    int arr[arr_size];

    
    for(int i=0; i<arr_size; i++){
        scanf("%d", &arr[i]);
    }

    //print the array
    printf("The array:");
    for(int i=0; i<arr_size; i++){
        printf("%d ", arr[i]);
    }

    printf("\n");
    int sum=0;
    for(int i=0; i<arr_size; i++){
        sum +=arr[i];
    }
    printf("Sum of the array is: %d ",sum);
    return 0;
}