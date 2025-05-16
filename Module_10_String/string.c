#include<stdio.h>

int main(){

    char a[4];
    //remember space is also a character 
    for(int i=0; i<4; i++){
        scanf("%c", &a[i]);
    } 

    for(int i=0; i<4; i++){
        printf("%c", a[i]);
    }
    return 0;
}