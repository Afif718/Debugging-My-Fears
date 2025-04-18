#include<stdio.h>

int main(){

    int n;
    scanf("%d", &n);

    int even = 0;
    int odd = 0;
    int positive = 0;
    int negative=0;

    for(int i=1; i<=n; i++){
        int num;
        scanf("%d", &num);
        //printf("%d\n", num);
        if(num%2==0){
            even++;
        } else {
            odd++;
        }
        
        if(num>0){
            positive++;
        } 
        
        if(num<0){
            negative++;
        }
    }
    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);
    printf("Positive: %d\n", positive);
    printf("Negative: %d\n", negative);
    return 0;
}