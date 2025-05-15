#include<stdio.h>

int main(){

    int row, col;
    scanf("%d %d", &row, &col);
    int arr[row][col];

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    //printf("\n");

    //print in reverse/mirror
    for(int i=0; i<row; i++){
        for(int j=col-1; j>=0; j--){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

//problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/W