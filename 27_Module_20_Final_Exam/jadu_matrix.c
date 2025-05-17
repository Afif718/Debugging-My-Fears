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

    bool isPrimaryUnit = true;
    bool isSecondaryUnit = true;
    bool isDiagonal = true;

    if(row == col){
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                if(i==j){
                    if(arr[i][j] != 1)
                    //printf("%d %d", i, j);
                    isPrimaryUnit = false;
                } else if(i+j == row-1){
                    if(arr[i][j] != 1)
                    //printf("%d %d", i, j);
                    isSecondaryUnit = false;
                } else{
                   // printf("Not Diagonal");
                   //printf("%d %d", i, j);
                   if(arr[i][j] !=0){
                        isDiagonal = false;
                   }
                   
                }
            }
            //printf("\n");
        }
    } else{
        printf("NO\n");
        return 0;
    }

    if(isDiagonal){
        if(isPrimaryUnit && isSecondaryUnit){
                printf("YES\n");
            } else{
                printf("NO\n");
            }
    }  else{
        printf("NO\n");
    }

    return 0;
}

//problem link: https://www.hackerrank.com/contests/final-exam-a-introduction-to-c-programming-a-batch-07/challenges/jadu-matrix
