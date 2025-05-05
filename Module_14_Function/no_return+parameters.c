#include<stdio.h>

//if we dont want to return anything from a function then use void
void sum_it(int num1, int num2){
    //inside a void function it cannot retrun any value
    //but return can be used in line just to exit the function just like break;
    int val =  num1 + num2;
    //if we want to exit the function before printing then use just return
    return;
    printf("%d", val);
}

int main(){
    int num1,num2;
    scanf("%d %d", &num1, &num2);
    sum_it(num1, num2);
    
    //right after exiting the function it will print say my name
    //printf("Say my name!");
    return 0;
}

