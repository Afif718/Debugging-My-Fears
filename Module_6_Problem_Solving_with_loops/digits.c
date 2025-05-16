#include<stdio.h>

int main(){

    int test_case;
    scanf("%d", &test_case);

    for(int i=1; i<=test_case; i++){
        int num;
        scanf("%d", &num);
    
        if(num == 0){
            printf("%d",0);
        }
        while(num!=0){
            int last_num = num % 10;
            printf("%d ", last_num);
            num = num / 10;
            
        }
        printf("\n");
    }
    
    

    return 0;
}