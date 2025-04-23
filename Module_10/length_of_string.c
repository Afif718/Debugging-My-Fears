#include<stdio.h>

int main(){

    char s[101];
    scanf("%s", s);

    int count_length=0;
    
    // for(int i=0; i<101; i++){
    //     if(s[i] == 0){
    //         break;
    //     }
    //     count_length++;
    // }

    // for(int i=0; s[i]!='\0'; i++){
    //     count_length++;
    // }

    int i=0;
    while(s[i]!='\0'){
        count_length++;
        i++;
    }

    printf("Length of the String is: %d", count_length);
    return 0;
}