#include<stdio.h>

int main(){

    // Input
    // First line contains a number N (1 ≤ N ≤ 105) number of elements.

    // Second line contains N numbers (0 ≤ Ai ≤ 109).

    // Third line contains a number X (0 ≤ X ≤ 109). 
    
    int arr_size;
    //take size from input
    scanf("%d", &arr_size);

    //array
    int arr[arr_size];

    //input
    for(int i=0; i<arr_size; i++){
        scanf("%d", &arr[i]);
    }

    //search element
    int search_x;
    scanf("%d", &search_x);

    //count 
    int count=0;

    for(int i=0; i<arr_size; i++){
        if(arr[i] == search_x){
            printf("%d", i);
            count++;
            break;
        }
    }

    if(count==0){
        printf("%d", -1);
    }
    
    return 0;
}

//problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/B