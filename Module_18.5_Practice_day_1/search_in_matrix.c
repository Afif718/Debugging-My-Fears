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

    int num; 
    scanf("%d", &num);
    bool isNum_exist = false;

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(arr[i][j] == num){
                isNum_exist = true;
                break;
            }
        }
    }

    if(isNum_exist){
        printf("will not take number");
    } else{
        printf("will take number");
    }

    return 0;
}

//problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/S