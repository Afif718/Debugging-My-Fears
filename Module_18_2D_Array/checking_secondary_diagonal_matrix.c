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
    bool isUnitMatrix = true;

    int expected_scalar_value = arr[0][row-1]; // First secondary diagonal element
    bool isScalarMatrix = true;

    //check if square matrix or not
    if(row==col){
        
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                ////check the secondary diagonal 02, 11, 20, etc 
                //see a pattern that i+j equals to row/column -1 always
                if(i+j == row-1){
                    //printf("%d %d ", i, j);

                    //now check if its unit matrix or not
                    if(arr[i][j] != 1){
                        isUnitMatrix = false;
                        //break; 
                    }

                    //now check if its a scalar matrix or not
                    if(arr[i][j] != expected_scalar_value){
                        isScalarMatrix = false;
                        //break;
                    }
                } else{
                    //we are outsidde the secondary diagonal 
                    //now check if outside the secondary diagonal all values are zero or not
                    if(arr[i][j] !=0){
                        isDiagonal = false;
                        //break;
                    }
                }
            }
           // printf("\n");
        }

        //print if diagonal or not
        if(isDiagonal){
            printf("This is a secondary diagonal matrix as outside the secondary diagonal all values are zero\n");
        } else{
            printf("This is a not secondary diagonal matrix as outside the secondary diagonal all values are not zero\n");
        }

        //print if unit matrix or not
        if(isUnitMatrix){
            printf("This is a unit matrix as outside the secondary diagonal all values are 1\n");
        } else{
            printf("This is not a unit matrix as outside the secondary diagonal all values are not 1\n");
        }

        //print if unit matrix or not
        if(isScalarMatrix){
            printf("This is a scalar matrix as outside the secondary diagonal all values are same\n");
        } else{
            printf("This is not a scalar matrix as outside the secondary diagonal all values are not same\n");
        }


    } else{
        printf("This is not sqaure therefore not a diagonal matrix");
    }
    return 0;
}