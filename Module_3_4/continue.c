#include<stdio.h>

int main(){
    for(int i=1; i<=20; i++){

        if(i==10){
            continue; //continue skips the value and the below code and continue from there
        }
        printf("%d\n", i);
    }

}
