#include<stdio.h>


int sum_it(){
    int num1,num2;
    scanf("%d %d", &num1, &num2);
    return num1 + num2;
}

int main(){

    int sum= sum_it();
    printf("%d\n", sum);
    
    return 0;
}

