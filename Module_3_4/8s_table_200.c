#include<stdio.h>

int main(){

    //Write a c program to print 8’s time table to 200
    //8 * 1 = 8
    //8 * 200 = ?

    for(int i=1; i<=200; i++){
        //printf("8 * %d = %d\n", 8*i);
        printf("8 * %d = %d\n", i, i*8);
    }

    return 0;
}