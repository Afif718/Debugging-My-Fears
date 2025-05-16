#include<stdio.h>

int main(){

    //Reference: Value --> Address
    //De-reference: Address --> Value

    int a = 1001957171;
    printf("%d\n", a); //print the variable a
    printf("%p\n", &a); // print the memory address of a

    //pointer variable: it stores another variable's memory location
    int* ptr;
    ptr = &a;
    printf("%p\n", ptr); //it stores memory location a 

    //De-referencing 
    //using dereferencing we can access variable value
    printf("%d\n", *ptr);

    //we can change value of a variable using de-referencing
    *ptr = 500; //changed the value of x
    printf("%d", a); //print the new value of x

    return 0;
}