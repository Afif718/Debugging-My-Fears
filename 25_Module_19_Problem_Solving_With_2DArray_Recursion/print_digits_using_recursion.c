#include<stdio.h>
#include<string.h>

void digits(char str[], int index){

    if(index == strlen(str)){
        return;
    }

    printf("%c ", str[index]);
    digits(str, index+1);
}

int main(){

    int numOfTimes;
    scanf("%d", &numOfTimes);
    for(int i=1; i<=numOfTimes; i++){
        char str[11];
        scanf("%s", str);

        digits(str, 0);
        printf("\n");
    }

    
    
    return 0;
}

//problem link: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/D