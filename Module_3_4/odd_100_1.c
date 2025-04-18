#include<stdio.h>

//start 100 
//end 1 
int main(){
    for(int i=100; i>=1; i--){
        if(i%2 != 0){
            printf("%d\n", i);
        }
    }

    return 0;
}