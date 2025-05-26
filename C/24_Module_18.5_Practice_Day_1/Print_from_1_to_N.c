#include<stdio.h>

void print_from_1_to_n(int i, int n){

    if(i == n+1){
        return;
    }

    printf("%d\n",i);
    print_from_1_to_n(i+1, n);
}

int main(){

    int n;
    scanf("%d", &n);

    int i = 1;
    print_from_1_to_n(i, n);
    
    return 0;
}

//problem link: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/B