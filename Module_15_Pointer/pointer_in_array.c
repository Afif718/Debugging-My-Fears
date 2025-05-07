#include<stdio.h>

int main(){

    int arr[5] = {10, 20, 30, 40, 50};

    //we can print the memory address of each array element
    //printf("%p", &arr[0]);

    //array name itself is a pointer and it represents arr[0]
    printf("%d\n", *arr); //it will print arr[0]=10

    //we can even change array element value using dereferencing 
    *arr= 100; //arr[0]
    //this way we can change other array values as well
    *(arr+1) = 200; //arr[1]
    *(arr+2) = 300; //arr[2] ...

    //after changing arr[0]'s value we are printing 
    for(int i=0; i<5; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}