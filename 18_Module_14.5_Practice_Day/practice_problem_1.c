#include<stdio.h>

/*
    *
   **
  ***
 ****     

*/

int main(){

    int n;
    scanf("%d", &n);

    int star = 1; //star will start from n
    int space = n-1;

    for(int i=1; i<=n; i++){ //printing number of lines
        
        //for giving space 
        for(int k=space; k>=1; k--){
            printf(" ");
        }

        //inner loop for printing stars
        for(int j=1; j<=star; j++){
            printf("*");
        }
        printf("\n");
        star++;
        space--;

    }

    return 0;
}