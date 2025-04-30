#include<stdio.h>
#include<string.h>

int main(){

    char a[101];
    char b[101];

    scanf("%s %s", a, b);

    int totalLen = strlen(a) + strlen(b);

    //printf("%d\n", totalLen);

    int i_increment=0;
    for(int i=strlen(a); i<=totalLen; i++){
        a[i] = b[i_increment];
        //printf("%d j\n", j);
        i_increment++;
    }

     printf("%s", a);
    
    return 0;
}