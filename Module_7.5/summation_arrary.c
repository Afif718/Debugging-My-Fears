#include<stdio.h>

int main(){
    long long int arr_size;
    
    scanf("%lld", &arr_size);

    long long int arr[arr_size];

    for(long long int i=0; i<arr_size; i++){
        scanf("%lld", &arr[i]);
    }

    long long int sum=0;
    for(long long int i=0; i<arr_size; i++){
        sum +=arr[i];
    }
    
    if(sum <0){
        printf("%lld", sum * -1);
    } else{
        printf("%lld", sum);
    }

    return 0;
    
}

//problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/A