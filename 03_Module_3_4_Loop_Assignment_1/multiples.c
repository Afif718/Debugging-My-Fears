#include<stdio.h>

// Given two numbers A and B. Print "Multiples" if A is multiple of B or vice versa. 
// Otherwise print "No Multiples".

int main(){
    
    int a,b;
    
    scanf("%d", &a);
    scanf("%d", &b);
    
    if(a%b==0 || b%a==0){
        printf("Multiples");
    } else{
        printf("No Multiples");
    }
    
    return 0;
}