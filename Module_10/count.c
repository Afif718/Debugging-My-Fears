#include<stdio.h>
#include<string.h>

int main(){

    char s[1000001];
    scanf("%s", s);

    int sum=0;
    int strLen = strlen(s);

    // for(int i=0; s[i]!='\0'; i++){
    //     sum += s[i] - '0'; // its converting the character into a number not ascii value
    // }

    for(int i=0; i<strLen; i++){
        //lets say input 351
        //s[0] = will print '3' ascii value which is 51 
        // '0' characters ascii value is 48 
        // so if we 51-48 = 3 which is the desired number or converted number
        // same for 5 --> its ascii value is 53 - 48 = 5
        // for 1 --> 49 - 48 = 1 
        //now we can do the sum 3 + 5 + 1 = 9
        sum += s[i] - '0'; // its converting the character into a number not ascii value
    }

    printf("%d", sum);
    return 0;
}