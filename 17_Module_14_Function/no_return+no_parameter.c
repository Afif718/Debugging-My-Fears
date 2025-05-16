#include<stdio.h>

//if we dont want to return anything from a function then use void
void sum_it(){
    int num1,num2;
    scanf("%d %d", &num1, &num2);

    int val =  num1 + num2;

    printf("%d", val);
}

int main(){

    //call the function
    sum_it();
    return 0;
}

