#include<stdio.h>

void odd_even(){
    
    int arr_size;
    scanf("%d", &arr_size);

    int arr[arr_size];

    for(int i=0; i<arr_size; i++){
        scanf("%d", &arr[i]);
    }

    int count_even=0;
    int count_odd = 0;

    for(int i=0; i<arr_size; i++){
        if(arr[i]%2==0){
            count_even++;
        }else{
            count_odd++;
        }
    }

    printf("%d %d\n", count_even, count_odd);
}

int main(){

    odd_even();

    return 0;
}

//problem link: https://www.hackerrank.com/contests/assignment-03-a-introduction-to-c-programming-a-batch-07/challenges/even-and-odd-8-2/problem