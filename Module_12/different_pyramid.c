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
                         1 2
                        1 2 3
                       1 2 3 4
                      1 2 3 4 5
                */
            // printf(" *");
            printf(" %d", k);
        }
        printf("\n");
        star++;
        space--;

    }
    return 0;
}