#include<stdio.h>

void count(int n){

    if(n ==5){
        return;
    }

    count(n+1);
    printf("%d\n", n);
}

int main(){

   count(1);
    return 0;
}