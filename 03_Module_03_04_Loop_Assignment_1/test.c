#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    for(int i = 1; i<=n; i++){
        if(n % i ==0){
            printf("%d\n", i);
        }
    }

    // for(int i=n; i>=1; i--){
    //     if(i%2==0){
    //         printf("%d\n", i);
    //     }

    //     //printf("%d\n", i);
    // }

    // while(n!=0){
    //     printf("%d\n", n);
    //     n /=2;
    // }

    return 0;
}