#include<stdio.h>

int main(){

    int arr_size;
    scanf("%d", &arr_size);

    int arr[arr_size];

    for(int i=0; i<arr_size; i++){
        scanf("%d", &arr[i]);
    }

    //find the minimum value from the array
    int min = arr[0];
    for(int i=0; i<arr_size; i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
   // printf("%d", min);

    //check how many times min occouring in the array odd or even times
    int count_min=0;
    for(int i=0; i<arr_size; i++){
        if(arr[i] == min){
            count_min++;
        }
    }

    if(count_min%2==0){
        printf("Unlucky");
    } else{
        printf("Lucky");
    }
    return 0;
}

//problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/J