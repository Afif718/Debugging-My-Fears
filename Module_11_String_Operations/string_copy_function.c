#include<stdio.h>
#include<string.h>

int main(){

    char a[51];
    char b[51];
    scanf("%s %s", a, b);

    printf("%s %s\n", a, b);

    //builtin function strcpy(a, b) 
    //here b will be copied in a
    strcpy(a, b);

    printf("%s %s", a, b);


    return 0;
}