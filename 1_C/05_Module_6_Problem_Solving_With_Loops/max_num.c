#include<stdio.h>

int main(){

    int num;
    scanf("%d", &num);
    int max = 0;

    for(int i=1; i<=num; i++){
        int input_num;
        

        scanf("%d", &input_num);

        if(input_num >= max){
            max = input_num;
            
        }

    }
    printf("%d", max);

    return 0;
}