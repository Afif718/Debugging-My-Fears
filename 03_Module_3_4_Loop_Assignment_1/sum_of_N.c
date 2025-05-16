#include<stdio.h>

int main(){

    int sum = 0;
        
    for(int i=0; i<=10; i++){
        sum += i;
    }

    printf("Sum of numbers from 0-10: %d\n", sum);
}