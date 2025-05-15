#include<stdio.h>

void summation(int arr[], int arr_size, int i, long long int sum){

    if(i==arr_size){
        printf("%lld\n", sum);
        return;
        
    }
    
    summation(arr, arr_size, i+1, sum+arr[i]);
    
}

int main(){

    int arr_size;
    scanf("%d", &arr_size);
    int arr[arr_size];

    for(int i=0; i<arr_size; i++){
        scanf("%d", &arr[i]);
    }

    int i=0;
    long long int sum = 0;
    summation(arr, arr_size, i, sum);
    
    return 0;
}

//problem link: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/L