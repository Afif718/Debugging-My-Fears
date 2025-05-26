#include<stdio.h>

/*
    1
   21
  321
 4321
54321

*/

int main(){

    int n;
    scanf("%d", &n);

    int space= n-1;

    for(int i=1; i<=n; i++){ //this is for printing the lines

        //for printing spaces
        for(int k=space; k>=1; k--){
            printf(" ");
        }

        //this is for printing the stars
        for(int j=i;j>=1; j--){
            printf("%d", j);
            //printf("*");
        }
        printf("\n");
        space--;
    }
    return 0;
}