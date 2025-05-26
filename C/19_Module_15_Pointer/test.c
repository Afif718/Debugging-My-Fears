#include<stdio.h>

// int fun(int p, int q){
//     int temp = p;
//     p = q;
//     q = temp;
// }

int main(){

    // int a=6,b=5;
    // fun(a, b);
    int arr[4] = {1,2,3,4};

    int *p;
    p = arr +3;
    *p = 5;
    printf("%d\n", arr[3]);
    return 0;
}