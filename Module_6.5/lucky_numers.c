#include<stdio.h>

int main(){

    int n;
    scanf ("%d", &n);

    int first_num= n/10; // will give u the first num
    int second_num= n%10; // will give u the last num

    if((second_num !=0 && first_num % second_num ==0) || (first_num !=0 && second_num % first_num ==0)){
        printf("YES");
    }else{
        printf("NO");
    }

    return 0;
}

//problem link: https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/I