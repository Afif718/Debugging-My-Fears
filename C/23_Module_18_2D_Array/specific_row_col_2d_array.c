#include<stdio.h>

int main(){

    //take the size row and col
    int row, col;
    scanf("%d %d", &row, &col);
    //initialize the array
    int arr[row][col];

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            scanf("%d", &arr[i][j]);
        }
    }


    //print the 2d array
    // for(int i=0; i<row; i++){
    //     for(int j=0; j<col; j++){
    //         printf("%d", &arr[i][j]);
    //     }
    //     printf("\n");
    // }

    //print specific row
    // int specific_row;
    // scanf("%d", &specific_row);


    //another way to print the row
    //row is fixed but column is changing 
    // for(int i=0; i<col; i++){
    //     printf("%d ", arr[specific_row][i]);
    // }

    //print a column
    //here row is changing but column is fixed
    int specific_col;
    scanf("%d", &specific_col);

    for(int i=0; i<row; i++){
        printf("%d ", arr[i][specific_col]);
    }


    return 0;
}