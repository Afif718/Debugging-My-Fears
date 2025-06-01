#include<stdio.h>

int main(){

    int arr_size, range;
    scanf("%d %d", &arr_size, &range);

    int arr[arr_size];

    for(int i=0; i<arr_size; i++){
        scanf("%d", &arr[i]);
    }

    //frequency array 
    int fre_arr_size = range + 1;
    int fre[fre_arr_size+1];  // Then initialize manually with a loop

    for (int i = 1; i <= fre_arr_size; i++) {
        fre[i] = 0; // make all the values to 0
    }
    
    for(int i=0; i<arr_size; i++){
        int val = arr[i];
        fre[val]++;
    }

    for(int i=1; i<=range; i++){
        //printf("%d\n%d\n", i, fre[i]);
        //printf("%d --> %d\n", i, fre[i]);
        printf("%d\n",fre[i]);
    }
    

    return 0;
}