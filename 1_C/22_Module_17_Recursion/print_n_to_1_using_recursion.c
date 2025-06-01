#include<stdio.h>

void count(int n){

    if(n ==0){
        return;
    }

    printf("%d\n", n);
    count(n-1);
}

int main(){

   int n;
   scanf("%d", &n);

   count(n);
    return 0;
}