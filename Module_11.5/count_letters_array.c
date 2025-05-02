#include<stdio.h>
#include<string.h>

int main(){
    
    char str[1000001]; // 10^7 + 1 to hold null terminator
    scanf("%s", str);
    //printf("%s", str);

    //  printf("%d\n", max_ele);
    //no need max min as in the question it clearly mentioned small letters from 97 to 122
    int fre_arr[26] = {0};

    //now count the str array
    for(int i=0; str[i] != '\0'; i++){
        fre_arr[str[i] - 'a']++;
    }

    //print the frequency array
    for(int i = 0; i < 26; i++){
        if(fre_arr[i] != 0){
            printf("%c : %d\n", 'a' + i, fre_arr[i]);
        }
    }

    return 0;
}

//problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/J