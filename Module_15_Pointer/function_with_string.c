#include<stdio.h>
#include<string.h>

/*
    Note:
    1. Array --> Pass by reference
    2. Variable --> Pass by value
*/

//same as normal array passing as string is also a char array
void fun(char a[]){

    a[1]='E';

    printf("%s\n", a);
    printf("%d\n", strlen(a));
}

int main(){

    char a[10];
    scanf("%s", a);

    fun(a);

    return 0;
}