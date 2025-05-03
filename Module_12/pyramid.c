#include<stdio.h>

int main(){

    int n;
    scanf("%d", &n);
    
    int star = 1;
    int space=n-1;

    for(int i=1; i<=n; i++){ //for printing lines
        for(int i=space; i>=1; i--){ //this is for printing the space 
            printf(" "); //first it will add 4 space then 3, 2, 1 0
        }

        for(int j=1; j<=star; j++){ // this is for printing the stars
            /*
            *
            ***
            *****
            *******
            *********
            */
            printf("*");
        }
        printf("\n");
        star += 2;
        space--;
    }
    //printf("");

    return 0;
}