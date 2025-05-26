#include<stdio.h>

int main(){

    char ch;
    scanf("%c", &ch);

    int asci = (int)ch;

    if(asci >=65 && asci <= 90){
        char lower = (char) (asci + 32);
        printf("%c", lower);
    }

    if(asci >=97 && asci <= 122){
        char upper = (char) (asci - 32);
        printf("%c", upper);
    }

    //printf("%c %d", ch, asci);
    return 0;
}