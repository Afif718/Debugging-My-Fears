#include<stdio.h>

int main(){

    int a = 10;
    int b = 5;

    printf("%d %d\n", a, b);

    int temp = a; //means temp = 10

    a = b; // means a = 5
    b = temp; //means b = 10

    printf("%d %d", a, b);

    return 0;
}