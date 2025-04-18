#include<stdio.h>

int main(){
    int tour;

    printf("Enter your money: ");
    scanf("%d", &tour);

    if(tour >= 5000){
        printf("Will go to coxBazar\n");

        if(tour >= 10000){
            printf("Will go to Saintmartin\n");
        }else{
            printf("We will return home\n");
        }
    } else{
        printf("we will not go anywhere!\n");
    }

    return 0;
}