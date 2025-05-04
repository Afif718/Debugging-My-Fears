#include<stdio.h>

int main(){

    int n;
    int star=1; //this will first print one start and then increment 
    scanf("%d", &n);

    for(int i=1; i<=n; i++){ //for printing lines
        //printf("*\n");
        /*
        *
        **
        ***
        ****
        *****
        */
        for(int i=1; i<=star; i++){ //for printing starts
            printf("*");
        }
        printf("\n");
        star++;
    }

    return 0;
}