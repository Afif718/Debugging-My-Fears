#include<stdio.h>
#include<stdbool.h>

int main(){

    int arr_size;
    scanf("%d", &arr_size);

    int arr[arr_size];
   
    for(int i=0; i<arr_size; i++){
        scanf("%d", &arr[i]);
    }

    int val;
    scanf("%d", &val);

    for(int i=0; i<arr_size; i++){
        //printf("%d ", arr[i]);
        for(int j=i+1; j<arr_size; j++){
            printf("%d\n", arr[j]);

            // if(arr[i] + arr[j] == val){
            //     printf("%d + %d = %d\n", arr[i], arr[j], arr[i]+arr[j]);
            //     //equal_x = true;
            // }
        }
        //printf("\n");
    }

    return 0;
}