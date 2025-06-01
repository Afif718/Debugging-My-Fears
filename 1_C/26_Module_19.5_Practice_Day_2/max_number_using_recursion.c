#include<stdio.h>

void max_number(int arr[], int arr_size, int max_ele, int i){

    if(i==arr_size){
        printf("%d", max_ele);
        return;
    }

    // printf("%d\n", i);
    if(arr[i]>max_ele){
        max_ele = arr[i];
    }
    max_number(arr, arr_size, max_ele, i+1);
}

int main(){

    int arr_size;
    scanf("%d", &arr_size);
    int arr[arr_size];

    for(int i=0; i<arr_size; i++){
        scanf("%d", &arr[i]);
    }

    int max_ele = arr[0];
    max_number(arr, arr_size, max_ele, 0);

    return 0;
}


//problem link: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/K