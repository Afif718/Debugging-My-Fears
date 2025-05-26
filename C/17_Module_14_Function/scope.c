#include<stdio.h>

int x = 1000; //global variable

void print_it(){
    printf("From Print function--> %d\n", x);
}

int main(){

    printf("From Main function--> %d\n", x);

     //call the function
     print_it();

    return 0;
}

