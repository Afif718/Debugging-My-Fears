#include<stdio.h>

int main(){
    int num;

    printf("Enter your money: ");
    scanf("%d", &num);

    if(num%2 == 0){
        printf("Even Number");
    } else{
        printf("Odd Number");
    }

    return 0;
}