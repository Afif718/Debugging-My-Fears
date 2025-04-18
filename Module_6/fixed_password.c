#include<stdio.h>

int main(){

    int password = 1999;

    int inpass;
    scanf("%d", &inpass);

    if(inpass == password){
        printf("Correct\n");
    } else{
        
        while(inpass!=password){
            printf("Wrong\n");
            scanf("%d", &inpass);
        }
        printf("Correct\n");
            
    }

    return 0;
}