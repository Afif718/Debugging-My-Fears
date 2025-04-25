#include<stdio.h>
#include<string.h>

int main(){

    char str1[11];
    char str2[11];

    scanf("%s", str1);
    scanf("%s", str2);

    int str1_len = strlen(str1);
    int str2_len = strlen(str2);

    printf("%d %d\n", str1_len, str2_len);
    printf("%s%s", str1, str2);

    //swapping first characters of two strings
    char char_at_1_str1 = str1[0];
    char char_at_2_str2 = str2[0];

    char temp = char_at_1_str1;
    char_at_1_str1 = char_at_2_str2;
    char_at_2_str2 = temp;

    str1[0]= char_at_1_str1;
    str2[0] = char_at_2_str2;
 
    //printf("\n%c %c", char_at_1_str1, char_at_2_str2);
    printf("\n%s %s", str1, str2);


    return 0;
}

//problem solving: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/D