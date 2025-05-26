#include<stdio.h>

int sum(int a, int b){
    return a+b;
}

int main(){

    int a, b;
    scanf("%d %d", &a, &b);

    printf("%d\n", sum(a,b));
    return 0;
}

//problem link: https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/A