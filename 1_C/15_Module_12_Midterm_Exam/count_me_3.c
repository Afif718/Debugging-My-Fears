#include<stdio.h>

int main(){

    int number_of_times;
    scanf("%d", &number_of_times);

    for(int i=1; i<=number_of_times; i++){

        char str[10001];

        scanf("%s", str);

        int count_sm_letters=0;
        int count_capital_letters = 0;
        int count_numbers = 0;

        for(int i=0; str[i]!='\0'; i++){
            if(str[i]>=97 && str[i]<=122){
                count_sm_letters++;
            }

            if(str[i]>=65 && str[i]<=90){
                count_capital_letters++;
            }

            if(str[i]>=48 && str[i]<=57){
                count_numbers++;
            }

        }

        printf("%d %d %d\n", count_capital_letters, count_sm_letters, count_numbers);

    }

    return 0;
}