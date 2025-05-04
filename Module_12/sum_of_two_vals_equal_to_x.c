#include<stdio.h>

int main(){

    int arr[] = {2,7,5,10,3};
    
    for(int i=0; i<sizeof(arr); i++){
        printf("%d", arr[i]);
    }
    return 0;
}