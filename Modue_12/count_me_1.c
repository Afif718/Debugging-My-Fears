#include<stdio.h>

int main(){

    int arr_size;
    scanf("%d", &arr_size);

    int arr[arr_size];

    for(int i=0; i<arr_size; i++){
        scanf("%d", &arr[i]);
    }

    int count2=0;
    int count3=0;

    for(int i=0; i<arr_size; i++){
        //printf("%d ", arr[i]);

        if(arr[i]%2==0){
            count2++;
            
            if(arr[i]%3==0){
                count3--;
            }
        }

        if(arr[i]%3 ==0){
            count3++;
        }
    }

    printf("%d %d", count2, count3);


    return 0;
}