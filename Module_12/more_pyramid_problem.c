#include<stdio.h>

int main(){

    int n;
    scanf("%d", &n);

    int star=1;
    int space=n-1;

    for(int i=1; i<=n; i++){ //this is for printing lines

        for(int j=space; j>=1; j--){
            printf(" ");
        }

        for(int k=1; k<=star; k++){ //can print value or stars
            /*
                1
               12
              123
             1234
            12345
                */
            printf("%d",k);
        }
        printf("\n");
        star++;
        space--;

    }
    return 0;
}