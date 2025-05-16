#include<stdio.h>
#include<string.h>

int is_palindrome(char str[]){

    int i=0;
    
    int j= strlen(str)-1;
    //printf("%d\n", j);

     int isPal=1;

     if(j==0){
        return 1;
     }

    while (i<j)
    {
            if(str[i] == str[j]){
                isPal =  1;
                    
            }

            if(str[i] != str[j]){
                isPal =  0;
                return isPal;
                    
            }


            i++;
            j--;
        } 
        
        return isPal;

}

int main(){

    char str[1001];
    scanf("%s", str);

    int isPal = is_palindrome(str);

    //printf("%d\n", isPal);

    if(isPal ==1){
        printf("Palindrome\n");
    }else{
        printf("Not Palindrome\n");
    }

    return 0;
}