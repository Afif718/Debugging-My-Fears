#include<stdio.h>

//Below example is called pass by reference

void fun(int* ptr){ //we need a pointer variable here

    //now we can change the value of x from fun function using pointer
    *ptr = 500; //de-referencing the value 
}

int main(){

    int x=10;
    printf("From Main Function %d\n", x);

    fun(&x); // we are passing x as reference 

    printf("From Main Function after changing x using pointer:  %d\n", x);
    printf("Address of x from Main Function: %p\n", &x);
    return 0;
}