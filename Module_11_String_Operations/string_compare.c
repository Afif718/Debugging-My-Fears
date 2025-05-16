#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main(){

    char a[51];
    char b[51];

    scanf("%s %s", a, b);
   // printf("%s %s", a, b);



    int i=0;

    while(true){

        if(a[i]=='\0' && b[i] == '\0'){
            printf("Equal");
            break;
        } else if(a[i]=='\0'){
            printf("A is smaller");
            break;
        } else if(b[i]=='\0'){
            printf("B is smaller");
            break;
        } else if(a[i]<b[i]){
            printf("A is smaller");
            break;
        } else if(b[i] < a[i]){
            printf("B is smaller");
            break;
        } else if(a[i] == b[i]){
            i++;
        }
    }

    return 0;
}