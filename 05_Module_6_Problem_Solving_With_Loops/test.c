#include<stdio.h>

int main(){

    // int a,b,c,d;
    // scanf("%d", &a);
    // scanf("%d", &b);
    // scanf("%d", &c);
    // scanf("%d", &d);

    // for(int i=0; i<=10; i++){
    //     printf("hi\n");
    //     if(i>2){
    //         break;
    //     }
    // }

    // int i= 3;
    // while(i<=5){
    //     for(int j=0; j<i; j++){
    //         printf("*");
    //     }
    //     i++;
    // }

    int i=-3;
    while(i<0){
        for(int j=0; j<5; j++){
            printf("#");
        }
        i--;
    }
    return 0;