#include<stdio.h>
#include <string.h>

int main(){

    int num_times;
    scanf("%d", &num_times);

    char word[101];

    for(int i=0; i<num_times; i++){
        scanf("%s", word);

        if(strlen(word)>10){
            int first_char = word[0];
        
            int last_char_index = strlen(word)-1;
            int last_char = word[last_char_index];
            int between_first_last= strlen(word) - 2;
        
            printf("%c%d%c\n", word[0], between_first_last, word[last_char_index]);
        }else{
            printf("%s\n", word);
        }
        
    }
    
    return 0;
}

//problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/F