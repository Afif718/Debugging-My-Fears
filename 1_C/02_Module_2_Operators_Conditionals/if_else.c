#include<stdio.h>

int main(){
    int taka;

    printf("Enter your money: ");
    scanf("%d", &taka);

    if(taka >=100){
        printf("You can eat a burger");
    }else if(taka >= 50){
        printf("You can eat a sandwich");
    } else{
        printf("You can't eat a burger");
    }

    return 0;
}