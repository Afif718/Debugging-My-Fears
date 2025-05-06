#include<stdio.h>

int char_to_ascii(char character){

    int val = (int)character;
    return val;

}

int main(){

    char ch;
    scanf("%c", &ch);

    int val = char_to_ascii(ch);
    printf("%d\n", val);
    
    return 0;
}