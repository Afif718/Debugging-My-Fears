#include<stdio.h>
#include<stdbool.h>

int main(){

    int arr_size;
    scanf("%d", &arr_size);

    int arr[arr_size];
   
    for(int i=0; i<arr_size; i++){
        scanf("%d", &arr[i]);
    }

    int temp;
    for(int i=0; i<arr_size; i++){
        for(int j=i+1; j<arr_size; j++){
            //i<j (10<20) --> true then swap 
            //decending order 50 40 30 20 10
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        printf("%d ", arr[i]);
    }

    
    return 0;
}