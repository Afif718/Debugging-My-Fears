#include<stdio.h>

int main(){

    int a,b,c,d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    int mul = 1;

    mul = (mul * a) % 100;
    mul = (mul * b) % 100;
    mul = (mul * c) % 100;
    mul = (mul * d) % 100;
    //printf("%d", mul);

    int last_two_val = mul;

    printf("%d\n", last_two_val);

    return 0;
}