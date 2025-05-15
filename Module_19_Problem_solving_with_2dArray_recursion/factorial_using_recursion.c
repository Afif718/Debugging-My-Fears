#include<stdio.h>
void factorial(int num, long long int i, long long int facto){

    if(i== num+1){
        printf("%lld", facto);
        return;
    }

    factorial(num, i+1, facto*i);
    //printf("%d", i);

}

int main(){

    int num;
    scanf("%d", &num);

    long long int i= 1;
    long long int facto = 1;
    factorial(num,i, facto);
    return 0;
}

//problem link: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/J