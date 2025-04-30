#include<stdio.h>
#include<string.h>

int main(){

    char a[51];
    char b[51];
    scanf("%s %s", a, b);

    printf("%s %s\n", a, b);

    strcat(b, a);
    printf("%s %s\n", a, b);

    return 0;
}