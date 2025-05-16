#include<stdio.h>
#include<string.h>

int main(){

    char str[100001];
    scanf("%s", str);

    // printf("%s", str);
    int count=0;
    for(int i=0; i<strlen(str); i++){
        //printf("%c\n", str[i]);

        if(str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i]!='o' && str[i]!='u'){
            count++;
        }
    }

    printf("%d", count);
    return 0;
}

// Problem link: https://www.hackerrank.com/contests/mid-term-a-introduction-to-c-programming-a-batch-07/challenges/count-me-2-2/problem
