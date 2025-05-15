#include<stdio.h>

int main(){

    //for checking primary diagonal 
    // for(int i=0; i<3;i++){
    //     for(int j=0; j<3; j++){
    //         if(i==j){
    //             //we are on the diagonal / Korno
    //             printf("%d %d ", i, j);
    //         } else{
    //             //we are outside diagonal/korno
    //             //check if the other values are zero or not
    //             if()
    //         }
            
    //     }
    //     printf("\n");
    // }

    //for checking secondary diagonal 02, 11, 20 etc
    //look at the pattern here row starting from 0 and col staring from the end
    for(int i=0; i<3; i++){
        //printf("%d ", i);
        for(int j=0; j<3; j++){
            if(i+j == 3-1){
                printf("%d %d", i, j);
            }
        }
        printf("\n");
    }
    return 0;
}