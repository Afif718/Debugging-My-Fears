#include<stdio.h>
#include <stdbool.h>

int main(){

    int num;
    scanf("%d", &num);

    bool no_even_num=true;

    for(int i=1; i<=num; i++){
        if(i%2==0){
            printf("%d\n",i);
            no_even_num = false;
        }
        
    }
    //printf("%d", no_even_num); 

    if(no_even_num){
        printf("-1");
    }
    return 0;
}