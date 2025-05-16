#include<stdio.h>
#include<string.h>

int main(){

    char str[100001];

    scanf("%s", str);

    for(int i=0; i<strlen(str); i++){

        if((int)str[i]>=65 && (int)str[i]<=90){
            printf("%c",str[i] + 32); // uppercase to lowercase
        } else if((int)str[i]>=97 && (int)str[i]<=122){
            printf("%c",str[i] - 32); // lowercase to uppercase
        } else if((int)str[i] == 44){
            printf("%c",str[i] - 12); // convert comma to space 
        }
    }

    return 0;
}

//problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/G