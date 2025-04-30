#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main(){

    char a[51];
    char b[51];

    scanf("%s %s", a, b);
   
    // printf("%d", );
    int val = strcmp(a,b);

    /*strcmp can return 3 values -1, 0, 1
    -1 or any negative value, it will show a is smaller
    0 will show if both string are same
    1 will show if second string is smaller*/

    if(val <0){
        printf("A is smaller");
    } else if(val >0){
        printf("B is smaller");
    } else if(val == 0){
        printf("A & B equal");
    }

    return 0;
}