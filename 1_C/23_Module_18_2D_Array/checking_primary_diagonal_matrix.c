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

    bool isDiagonal = true;
    bool isScalarMatrix = true;
    bool isUnitMatrix = true;
    int diagonalfirst_value = arr[0][0];


    //to check if diagonal or not first have to check if square or not
    if(row == col){ ////square matrix

        //get into the diagonal / korno 00, 11, 22 or i==j
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                if(i==j){
                    //we are on the primary diagonal/korno

                    if(arr[i][j] != diagonalfirst_value){
                        isScalarMatrix = false;
                        break;
                    }

                    if(arr[i][j] != 1){
                        // printf("This is a unit matrix\n");
                        isUnitMatrix = false;
                        break;
                    } 
                } else{
                    //we are outside the primary diagonal/korno
                    if(arr[i][j] != 0){
                        isDiagonal = false;
                        break;
                    }
                }
            }
        }

        if(isDiagonal){
            printf("Outside diagonal all values are zero therefore a primary diagonal matrix\n");
        } else{
            printf("Outside diagonal all values are not zero therefore not a diagonal or primary diagonal matrix\n");
        }

        if(isScalarMatrix){
            printf("This is a scalar matrix as all primary diagonal values are same\n");
        }else{
            printf("This is not a scalar matrix as all primary diagonal values are not same\n");
        }

        if(isUnitMatrix){
            printf("This is a unit matrix as all primary diagonal values are 1\n");
        }else{
            printf("This is a not unit matrix as all primary diagonal values are not 1\n");
        }



    } else{
        printf("This is not a square matrix therefore not a diagonal\n");
    }
    return 0;
}