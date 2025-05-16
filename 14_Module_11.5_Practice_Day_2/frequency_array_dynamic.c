#include<stdio.h>

int main(){

    int arr_size, range;
    scanf("%d", &arr_size);

    int arr[arr_size];

    for(int i=0; i<arr_size; i++){
        scanf("%d", &arr[i]);
    }

    //find the max element
    int max_ele = arr[0];
    for(int i=0; i<arr_size; i++){
        if(arr[i]>max_ele){
            max_ele = arr[i];
        }
    }

    //frequency array 
    //int fre_arr_size = max_ele +1;
    int fre[max_ele];  // Then initialize manually with a loop

    for (int i = 0; i <= max_ele; i++) {
        fre[i] = 0;
    }

    
    for(int i=0; i<arr_size; i++){
        int val = arr[i];
        fre[val]++;
    }

    int i=0;
    while(i<=max_ele){
        printf("%d --> %d\n", i, fre[i]);
        i++;
    }

    return 0;
}