#include<stdio.h>

int main(){

    char a[50];
    //scanf cannot input string with space 
    //scanf("%s", &a);

    //there are two ways to get input string with space gets & fgets
    //gets(a);

    //fgets is the standard one so use it 
    //it has name, size and stdin
    fgets(a, 20, stdin);
    printf("%s", a);
    return 0;
}