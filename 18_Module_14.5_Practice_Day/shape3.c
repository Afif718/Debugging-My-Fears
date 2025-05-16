#include<stdio.h>

int main(){

    int n;
    scanf("%d", &n);

    int star = 1; //start = 1 bcoz it starts from 1
    int space = n-1;

    for(int i=1; i<=n; i++){ //for printing number of lines

        /*
        *
       ***
      *****
     *******
        */

        //for printing space
        for(int k=space; k>=1; k--){
            printf(" ");
        }

        //inner loop for printing stars
        for(int j=1; j<=star; j++){
            printf("*");
        }
        printf("\n");
        star +=2;
        space--;

    }

    int star_upsidedown_start = (n*2)-1;
    int space2 = 0;
    for(int x=1; x<=n; x++){ //for printing number of lines

        //for printing spaces
        for(int z=0; z<space2; z++){

                printf(" ");
            
        }
        
        //for printing stars
        for(int y=star_upsidedown_start; y>=1; y--){
            printf("*");
        }
        printf("\n");
        star_upsidedown_start -=2;
        space2++;
    }
    return 0;
}