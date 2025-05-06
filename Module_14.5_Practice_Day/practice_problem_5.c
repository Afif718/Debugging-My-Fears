#include<stdio.h>

char char_to_ascii(char character){

    int cap = (int)character + 32; //capital to small 

    return cap;

}

int main(){

    char ch;
    scanf("%c", &ch);

    int cap = char_to_ascii(ch);
    printf("%c\n", cap);
    
    return 0;
}