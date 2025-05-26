#include<stdio.h>

int main(){

    int num;
    scanf("%d", &num);

    int count=0;
    while(num>=1){
        
        num = num/2;
        //printf("%d\n", num);

        if(num!=0){
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}