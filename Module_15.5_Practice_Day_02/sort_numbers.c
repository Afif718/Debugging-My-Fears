#include<stdio.h>
#include <string.h>

//sorting using char array 

void sort_char_arr(char arr[]){

   

    for(int i=0; i<strlen(arr); i++){
       for(int j=i+1; j<strlen(arr); j++){
        if(arr[i]>arr[j]){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
       }
    }

    //print in acsending order 
    for(int i=0; i<strlen(arr); i++){
        printf("%d ", arr[i]-'0');
    }

}

int main(){

    char num[1000001];
    scanf("%s", num);

    sort_char_arr(num);// array generally passed as reference 
    return 0;
}