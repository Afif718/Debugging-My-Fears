#include<stdio.h>
#include<string.h>

int main(){

    char a[101]; // first string
    char b[101]; // second string

    scanf("%s %s", a, b); // input both strings

    int length_a = strlen(a); // store length of first string
    int totalLen = strlen(a) + strlen(b); // total length after concatenation

    //printf("%d\n", totalLen);

    // int i_increment=0;
    // for(int i=strlen(a); i<=totalLen; i++){
    //     a[i] = b[i_increment];
    //     //printf("%d j\n", j);
    //     i_increment++;
    // }

    //another way to do the loop
    for(int i=0; i<=strlen(b); i++){
        a[i + length_a] = b[i]; // e.g., a[0 + 3] = b[0], a[1 + 3] = b[1], ...
        // this ensures we're appending b to the end of a
    }

    printf("%s", a); // print concatenated string
    
    return 0;
}
