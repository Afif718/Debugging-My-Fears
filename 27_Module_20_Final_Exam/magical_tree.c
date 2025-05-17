#include<stdio.h>

/*

1
     *
    ***
   *****
  *******
 *********
***********
     *
     *
     *
     *
     *

*/

int main(){

    int num;
    scanf("%d", &num);

    if(num%2 !=0){
        int count_odd_serial = 0;
    for(int i=0; i<=21; i++){
        if(i%2!=0){
            
            count_odd_serial++;
            if(i==num){
                break;
            }
            
        }
    }

    //printf("%d", count_odd_serial);

    int num_of_rows = count_odd_serial+5;
    int star = 1;
    int space = num_of_rows -1;

    for(int i=1; i<=num_of_rows; i++){ //this is for printing rows
        //this is for printing spaces
        for(int k=space; k>=1; k--){
            printf(" ");
        }

        for(int j=1; j<=star; j++){ //this is for printing stars
            printf("*");
        }
        printf("\n");
        star +=2;
        space--;
    }
    
     int trunk_space = ((star - 2) - num) / 2;

     //printf("%d\n",middle_point_trunk);

     for(int i=1; i<=5; i++){ //printing for rows(always same)
        //for printing spaces
        for(int k=1; k<=trunk_space; k++){
            printf(" ");
        }

        for(int j=1; j<=num; j++){
            printf("*");
        }
        printf("\n");
     }
    }

    
    return 0;
}

//problem link: https://www.hackerrank.com/contests/final-exam-a-introduction-to-c-programming-a-batch-07/challenges/magical-tree-3