#include<stdio.h>

/*
    Note:
    1. Array --> Pass by reference
    2. Variable --> Pass by value
*/


void fun(int a[], int n){

    a[1] = 500; //updating the value of a[1]
    for(int i=0; i<n; i++){
        printf("%d ", a[i]);
    }
}

int main(){

    int n;
    scanf("%d", &n);

    int arr[n];

    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    //pass array and array size into the fun function
    fun(arr, n);
    
    return 0;
}