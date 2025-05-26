#include<stdio.h>
#include<string.h>

int main(){

    char a[101];
    char b[101];

    scanf("%s %s", a, b);

    //printf("%s %s", a, b);

    char concat[101];

    printf("%d %d\n", strlen(a), strlen(b));

    int totalLen = strlen(a) + strlen(b);

    printf("%d\n", totalLen);

    for(int i=0; i<strlen(a); i++){
        concat[i] = a[i];
        //printf("%d i\n", i);
    }

    int j_increment=0;
    for(int j=strlen(a); j<=totalLen; j++){
        concat[j] = b[j_increment];
        //printf("%d j\n", j);
        j_increment++;
    }

     printf("%s", concat);
    
    return 0;
}