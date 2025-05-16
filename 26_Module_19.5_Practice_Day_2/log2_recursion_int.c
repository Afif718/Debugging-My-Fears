#include<stdio.h>

int log2_cal(long long num, long long count){

    if(num<2){
        return count;
    }
    return log2_cal(num/2, count+1);
}

int main(){

    long long int num;
    scanf("%lld", &num);

    long long int result = log2_cal(num, 0);
    printf("%lld", result);

    return 0;
}