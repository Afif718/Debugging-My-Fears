#include<stdio.h>

int main(){

    int n;
    scanf("%d", &n);

    int star1=n;
    int start2 = n;

    for(int i=1; i<=n; i++){ //for printing lines
        //printf("*\n");
        for(int i=star1; i>=1; i--){
            /*
            *****
            ****
            ***
            **
            *
            */
            printf("*"); //for printing starts 
        }
        printf("\n");
        star1--;
    }
    return 0;
}