#include<stdio.h>

/*
****
***
**
*
*/

int main(){

    int n;
    scanf("%d", &n);

    int star = n; //star will start from n

    for(int i=1; i<=n; i++){ //printing number of lines

        //inner loop for printing stars
        for(int j=star; j>=1; j--){
            printf("*");
        }
        //after each loop give a new line
        printf("\n");
        star--; 

    }
    return 0;
}