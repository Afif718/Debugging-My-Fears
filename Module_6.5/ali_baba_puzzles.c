#include<stdio.h>

int main(){

    int num1;
    int num2;
    int num3;
    int num4;

    scanf ("%d %d %d %d", &num1, &num2, &num3, &num4);

    if((num1+num2-num3)==num4){
        printf("YES");
    } else if((num1+num2*num3)==num4){
        printf("YES");
    } else if((num1-num2+num3)==num4){
        printf("YES");
    } else if((num1-num2*num3)==num4){
        printf("YES");
    } else if((num1*num2+num3)==num4){
        printf("YES");
    } else if((num1*num2-num3)==num4){
        printf("YES");
    }else{
        printf("NO");
    }

    return 0;
}

// problem link: https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/D