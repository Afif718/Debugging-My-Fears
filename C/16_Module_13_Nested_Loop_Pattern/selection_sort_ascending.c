#include<stdio.h>
#include<stdbool.h>

int main(){

    int arr_size;
    scanf("%d", &arr_size);

    int arr[arr_size];
   
    for(int i=0; i<arr_size; i++){
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<arr_size; i++){
        for(int j=i+1; j<arr_size; j++){
            //choto hole boro (>)
            //(i>j) 20>10 --> true then swap 
            //ascending order 10 20 30 40 50
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

       //print the sorted array in ascending order
       for(int i=0; i<arr_size; i++){
        printf("%d ", arr[i]);
    }

    
    return 0;
}