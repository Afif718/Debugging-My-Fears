#include<stdio.h>
#include<math.h>

int my_abs(int num){

    return abs(num);
}

int main(){

    int num;
    scanf("%d", &num);

    printf("%d", my_abs(num));
    return 0;
}