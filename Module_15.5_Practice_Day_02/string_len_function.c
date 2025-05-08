#include<stdio.h>

int my_len(char str[]){

    int count=0;
    for(int i=0; str[i]!='\0'; i++){
        count++;
    }

    return count;
}

int main(){

    char str[51];
    scanf("%s", str);

    printf("%d", my_len(str));

    return 0;
}