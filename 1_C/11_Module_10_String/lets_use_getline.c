#include<stdio.h>
#include<limits.h>

int main(){

    char s[1000001];    
    //fgets(s, sizeof(s), stdin);
    fgets(s, 1000001, stdin);

    for(int i=0; s[i]!='\\'; i++){
        printf("%c", s[i]);
    }

    return 0;
}

//problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/B