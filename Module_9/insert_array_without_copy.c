#include<stdio.h>

//this insertion using a single array
int main(){

    int arr[101]; // or any value > expected max size

    int arr_size;
    scanf("%d", &arr_size);

    for(int i=0; i<arr_size; i++){
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<arr_size; i++){
        printf("%d ", arr[i]);
    }

    //now take the index and the new element that we want to insert
    int index, new_element;
    scanf("%d %d", &index, &new_element);

    //now we will shift the values from the end to before the index
    for(int i=arr_size+1; i>index; i--){
        //printf("%d ", i);
       arr[i] = arr[i-1];
    }
    
    arr[index] = new_element;

    for(int i=0; i<arr_size+1; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}