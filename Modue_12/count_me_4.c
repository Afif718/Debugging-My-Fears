#include<stdio.h>
#include<string.h>

int main(){

    char str[10001];
    scanf("%s", str);
    //printf("%s", str);

    int fre_arr[26] = {0};

    for(int i=0; i<strlen(str); i++){
        fre_arr[str[i] - 'a']++;
    }

    for(int i=0; i<26; i++){
        if(fre_arr[i]!=0){
            printf("%c - %d\n",'a'+i, fre_arr[i]);
        }
        
    }

    return 0;
}

//problem link: https://www.hackerrank.com/contests/mid-term-a-introduction-to-c-programming-a-batch-07/challenges/count-me-4
