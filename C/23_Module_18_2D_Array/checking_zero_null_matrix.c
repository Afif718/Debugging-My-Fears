#include<stdio.h>
#include<stdbool.h>

//in a zero matrix all the values are zero 0

int main(){

    int row, col;
    scanf("%d %d", &row, &col);
    int arr[row][col];

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    //print the matrix
    // for(int i=0; i<row; i++){
    //     for(int j=0; j<col; j++){
    //         printf("%d ", arr[i][j]);
    //     }
    //     printf("\n");
    // }

    //check if zero matrix or not
    bool isZero = true; 
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(arr[i][j] != 0){
                isZero = false;
                break;
            }
        }
    }

    if(isZero){
        printf("Its a zero matrix");
    } else{
        printf("Its not zero matrix");
    }
    return 0;
}