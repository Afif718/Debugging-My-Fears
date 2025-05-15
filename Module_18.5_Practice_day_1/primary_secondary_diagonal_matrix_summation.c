#include<stdio.h>
#include<math.h>

int main(){

    int row_col;
    scanf("%d", &row_col);
    int arr[row_col] [row_col];

    for(int i=0; i<row_col; i++){
        for(int j=0; j<row_col; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    // we know it will be square matrix
    //find the primary and secondary diagonal
    int primary_diagonal_summation=0;
    int secondary_diagonal_summation=0;

    //find the primary diagonal
    for(int i=0; i<row_col; i++){
        for(int j=0; j<row_col; j++){
            if(i==j){
                //printf("%d %d", i, j);
                primary_diagonal_summation += arr[i][j];
            }
        }
        //printf("\n");
    }

    //find the secondary diagonal 
    for(int i=0; i<row_col; i++){
        for(int j=0; j<row_col; j++){
            if(i+j == row_col-1){
                //printf("%d %d", i, j);
                secondary_diagonal_summation += arr[i][j];
            }
        }
        //printf("\n");
    }

    int abs_difference = abs(primary_diagonal_summation - secondary_diagonal_summation);
    printf("%d", abs_difference);

    return 0;
}

//problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/T