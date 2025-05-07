#include<stdio.h>

int main(){

    int x = 20;
    printf("%d\n", x); //print the variable x
    printf("%p\n", &x); //print the memory address of x and for that use &

    //pointer variable --> it stores another variable's memory location
    //syntax --> datatype* pointer_name;
    int* ptr;
    ptr = &x;
    printf("%p\n", ptr);

    //we can also print the memory location of pointer variable
    printf("%p\n", &ptr);

    return 0;
}