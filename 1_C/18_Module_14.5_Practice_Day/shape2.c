#include<stdio.h>

int main(){

    int n;
    scanf("%d", &n);

    int star = 1; //start = 1 bcoz it starts from 1
    int space = n-1;

    for(int i=1; i<=n; i++){ //for printing number of lines

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
    return 0;
}