#include<stdio.h>

//Below example is called pass by value
//in pass by value example x value is different in fun and main function 
//we cannot change it from fun
//thats why we need pass by reference 
void fun(int x){

    x = 20;
    printf("From Fun Function: %d\n", x);
}

int main(){

    int x=10;
    fun(x);

    printf("From Main Function %d\n", x);
    printf("Address of x from Main Function: %p\n", &x);
    return 0;
}