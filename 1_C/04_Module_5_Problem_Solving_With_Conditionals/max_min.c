#include<stdio.h>

int main(){

    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if(a<=b && a<=c){
        printf("%d ", a);
    } else if(b<=a && b<=c){
        printf("%d ", b);
    } else {
        printf("%d ", c);
    }
    

    if(a>=b && a>=c){
        printf("%d", a);
    } else if(b>=a && b>=c){
        printf("%d", b);
    } else {
        printf("%d", c);
    }

    
    return 0;
}