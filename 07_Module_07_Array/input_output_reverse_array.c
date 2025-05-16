#include<stdio.h>

int main(){

    int array_size;
    printf("Enter the size of the array: ");
    scanf("%d", &array_size);

    int arr[array_size];
    
    for(int i=0; i<array_size; i++){
        scanf("%d", &arr[i]);
    }

    printf("Print the array: ");
    for(int i=0; i<array_size; i++){
        printf("%d ", arr[i]);
    }

    printf("\nPrint the arry in reverse: ");
    for(int i=array_size-1; i>=0; i--){
        printf("%d ", arr[i]);
    }
    return 0;
}