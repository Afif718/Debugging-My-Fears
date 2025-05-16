#include<stdio.h>

// Given a number X. Print "EVEN" if the first digit of X is even number. Otherwise print "ODD".

// For example: In 4569 the first digit is 4, the second digit is 5, the third digit is 6 and the fourth digit is 9.

int main(){
    
    int n;
    
    scanf("%d", &n);
   
    while(n>=10){
        n = n/10;
        printf("%d\n", n);

    }
    printf("%d\n", n);
    
    return 0;
}