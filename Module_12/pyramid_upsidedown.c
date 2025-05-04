#include<stdio.h>

int main(){

    int n;
    scanf("%d", &n);
    int star=(n*2)-1; //for pyramid lets say n is 5 so the starting number of starts will be 5*2= 10 -1 = 9
    int space=n-1;

    for(int i=1; i<=n; i++){
        /*
                *********
                 *******
                  *****
                   ***
                    *
        */

        //this loop is for priniting spaces
        for(int j=0; j<space; j++){
            printf(" ");
        }
       
        for(int k=star; k>=1; k--){ //this is for printing starts
            printf("*");
        }
        printf("\n");
        star-=2;
        space++;
    }

    return 0;
}