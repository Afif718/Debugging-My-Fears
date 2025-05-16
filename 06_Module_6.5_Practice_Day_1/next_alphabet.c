#include<stdio.h>

int main(){

    char ch;
    scanf("%c",&ch);

    if((int)ch == 122){
        printf("%c", 97);
    }else if((int)ch >=97 && (int)ch <= 121){
        printf("%c", (int)ch + 1);
    }

    return 0;
}

// problem link: https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/C