#include<stdio.h>
#include <stdbool.h>

int main(){

    int arr_size;
    scanf("%d", &arr_size);

    int arr[arr_size];

    for(int i=0; i<arr_size; i++){
        scanf("%d", &arr[i]);
    }
    
    int new_arr[arr_size];

    //copy reversed array elements in a new array
    
    for(int i=arr_size-1; i>=0; i--){
        //printf("%d ", arr[i]);
        new_arr[i] = new_arr[i];
    }

    bool isPallindrome = false;

    //check if palindrome or not
    /*arr[0] = arr[4]
      arr[1] = arr[3]
      arr[2] = arr[2]
      arr[3] = arr[1]
      arr[4] = arr[0]
      */
    int start=0;
    int end=arr_size-1;

    while(start < end){
        if(arr[start] != arr[end]){
            isPallindrome = false;
            break;
        }

        isPallindrome = true;

        start++;
        end--;
    }

    if(isPallindrome){
        printf("YES");
    }else{
        printf("NO");
    }

    return 0;
}

//problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/G