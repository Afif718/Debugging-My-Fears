#include<stdio.h>

int main(){

    int num;
    scanf("%d", &num);

    int count=0;

    for(int i=1; i<=num; i++){
        if(i%2==0){
            printf("%d\n",i);
            count ++;
        }
        
    }

    if(count==0){
        printf("-1");
    }
    return 0;
}