#include<stdio.h>
#include<stdbool.h>

int main(){

    int row, col;
    scanf("%d %d", &row, &col);
    
    int arr[row][col];

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    //print the last row
    for(int i=0; i<col; i++){
        printf("%d ", arr[row-1][i]);
    }
    printf("\n");

    //print the last col
    for(int i=0; i<row; i++){
        printf("%d ", arr[i][col-1]);
    }

    return 0;
}

//problem link: https://www.hackerrank.com/contests/final-exam-a-introduction-to-c-programming-a-batch-07/challenges/matrix-38