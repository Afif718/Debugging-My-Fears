#include<stdio.h>

int main(){

    int arr_size;
    scanf("%d", &arr_size);

    char arr[arr_size];
    scanf("%s", arr);

    int sum = 0; 

    for(int i=0; i<arr_size; i++){
        //printf("%c\n", arr[i]);
        sum += arr[i] - '0';
    }

    printf("%d", sum);
    return 0;
}

//problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/K