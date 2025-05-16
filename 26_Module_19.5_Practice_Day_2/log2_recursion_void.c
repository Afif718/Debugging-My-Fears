#include<stdio.h>
#include<math.h>

void log2_cal(long long int num, long long int count){
    
    if(num<2){
        printf("%d", count);
        return;
    }

    log2_cal(num/2, count+1);
}

int main(){

    long long int num;
    scanf("%lld", &num);

    long long int count=0;

    log2_cal(num, count);

    return 0;
}