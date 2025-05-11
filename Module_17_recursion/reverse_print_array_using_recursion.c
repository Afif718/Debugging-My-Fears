#include<stdio.h>

// Recursive function to print elements of the array in reverse order
void printArray(int arr[], int arr_size, int i) {

    // Base case: if index reaches the size of the array, stop recursion
    if(i == arr_size){
        return;
    }

    // Recursive call goes all the way to the end of the array
    // No element is printed until the recursion starts returning
    printArray(arr, arr_size, i + 1);

    // Print happens during the unwinding of the recursion (callback),
    // so the elements are printed in reverse order
    printf("%d\n", arr[i]);
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

    // Call the recursive function to print the array in reverse order
    printArray(arr, arr_size, i);

    return 0;
}
