#include<stdio.h>

int main(){

    char str_in[100];

    //take string inpput
    scanf("%s", str_in);
    printf("%s", str_in);

    // At the end of the string to point the end, there is a null value '\0' 
    // which is automatically added
    printf("\n%c", str_in[4]);

    return 0;
}