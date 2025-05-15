#include<stdio.h>
#include<string.h>

void count_vowels(char str[], int i, int count){

    if(i == strlen(str)){
        printf("%d", count);
        return;
    }

    //int countt = 0;
    if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' 
    || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){
        count_vowels(str, i+1, count+1);
    }else{
        count_vowels(str, i+1, count);
    }

    
}

int main(){

    char str[201];
    fgets(str, sizeof(str), stdin);

    int i = 0;
    int count=0;

    count_vowels(str, i, count);

    return 0;
}

//problem link: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/I