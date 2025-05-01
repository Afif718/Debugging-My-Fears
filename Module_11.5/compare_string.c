#include<stdio.h>
#include<string.h>

int main(){

    char a[21];
    char b[21];

    scanf("%s %s", a, b);
    int determine = strcmp(a,b);

    if(determine<0){
        printf("%s", a);
    } else if(determine>0){
        printf("%s", b);
    } else if(determine == 0){
        printf("%s", a);
    }
    return 0;
}