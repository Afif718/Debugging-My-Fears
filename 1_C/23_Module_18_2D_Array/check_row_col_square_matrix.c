#include<stdio.h>

int main(){

    //in row matrix, row is only one
    int row, col;
    scanf("%d %d", &row, &col);

    int arr[row][col];

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    if(row==1){
        printf("It's a row Matrix");
    } else if(col ==1){
        printf("It's a column Matrix");
    } else if(row == col){
        printf("It's a square Matrix");
    }
    return 0;
}