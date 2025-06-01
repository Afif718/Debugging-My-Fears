#include<stdio.h>

//the function which call itself is called recursion function. 
//And the whole process is called recursion
void hello(){
    printf("Hello\n");
    hello();
}

int main(){

    printf("Hi\n");
    hello();
    return 0;
}