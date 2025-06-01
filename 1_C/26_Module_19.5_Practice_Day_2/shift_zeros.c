#include<stdio.h>

int main(){

    int arr_size;
    scanf("%d", &arr_size);  // Take the size of the array as input
    int arr[arr_size];

    // Input array elements
    for(int i = 0; i < arr_size; i++){
        scanf("%d", &arr[i]);
    }

    int increment = 0;     // This variable keeps track of where to place the next non-zero value
    int count_zero = 0;    // This will count how many zeros are present in the array

    // Iterate through the array to shift all non-zero elements to the front
    for(int i = 0; i < arr_size; i++){

        if(arr[i] != 0){
            // If current element is not zero, move it to the 'increment' index
            // This helps compact all non-zero elements to the left, preserving their order
            arr[increment] = arr[i];

            increment++;  // Move increment forward for the next non-zero placement
        } else {
            count_zero++; // Keep track of zeros encountered
        }
    }

    // Now, fill the rest of the array with zeros starting from the 'increment' index
    for(int i = arr_size - 1; i >= arr_size - count_zero; i--){
        arr[i] = 0;
    }

    // Print the final array with all zeros shifted to the right
    for(int i = 0; i < arr_size; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}



//I solved it
//Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/N