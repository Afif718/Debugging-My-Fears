#include<stdio.h>

// Recursive function to print elements of the array
void printArray(int arr[], int arr_size, int i) {

    // Base case: if index reaches the size of the array, stop recursion
    if(i == arr_size){
        return;
    }

    // Print the current element
    printf("%d\n", arr[i]);

    // Recursive call to print the next element
    printArray(arr, arr_size, i + 1);
}

int main() {

    int arr_size;

    // Read the size of the array from user input
    scanf("%d", &arr_size);

    // Declare an array of the given size (VLA - works in C99 and later)
    int arr[arr_size];

    // Input elements of the array
    for(int i = 0; i < arr_size; i++){
        scanf("%d", &arr[i]);
    }

    int i = 0; // Initial index to start printing from

    // Call the recursive function to print the array
    printArray(arr, arr_size, i);

    return 0;
}
