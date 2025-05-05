#include<stdio.h>

int double_it(int num){
    num *=2;
    return num;
}

int sum_it(int num1, int num2){
    return num1 + num2;
}



int main(){

    int x= 10;
    int dbl = double_it(x);
    printf("%d\n", dbl);


    int a,b;
    scanf("%d %d", &a, &b);
    int sum= sum_it(a, b);
    printf("%d\n", sum);

    say_my_name();
    
    return 0;
}

