#include<stdio.h>

int main(){

    int n;
    scanf("%d", &n);

    int star=1;
    int space=n-1;

    for(int i=1; i<=n; i++){ //for printing lines
        //for printing space
        for(int i=space; i>=1; i--){
            printf(" ");
        }

        //for printing stars
        /*
            *
           ***
          *****
         *******
        *********
            *
            *
            *
            *
            *
        */
        for(int i=1; i<=star; i++){
            printf("*");
        }
        printf("\n");
        star+=2;
        space--;
    }

    for(int i=1; i<=n; i++){

        //give space 
        for(int i=1; i<n; i++){
            printf(" ");
        }

        for(int i=1; i<=1; i++){
            printf("*");
        }
        printf("\n");
        //tree_star--;
    }
    return 0;
}