#include<stdio.h>

int main(){

    //2D array declaration [row] [col]
    // int arr[3][4];

    // //insert value in a[1][2]
    // arr[1][2] = 33;

    // printf("%d", arr[1][2]);

    //declare row and column 
    int r, c;
    scanf("%d %d", &r, &c);
    int arr[r][c];

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}