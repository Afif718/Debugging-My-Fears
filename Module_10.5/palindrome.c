#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main(){

    char str[1001];
    scanf("%s", str);

    int start=0;
    int last= strlen(str)-1;

    bool isPalindrome = true;

    while(start < last){
        if(str[start] != str[last]){
            isPalindrome = false;
            break;
        }

        start++;
        last--;

    }

    if(isPalindrome){
        printf("YES");
    } else{
        printf("NO");
    }

    return 0;
}