#include<stdio.h>

// Recursive function to find the maximum value in the array
int max_number(int arr[], int arr_size, int i) {
    // Base case: if we reach the last element, return it
    // This ends the recursion and starts returning back up the call stack
    if (i == arr_size - 1) {
        return arr[i];
    }

    // Recursive step: call the function for the rest of the array starting from next index
    // This assumes max_number(i + 1 ... N-1) will return the maximum value in that part
    int max_in_rest = max_number(arr, arr_size, i + 1);

    // Now compare the current element arr[i] with the maximum from the rest
    // Return the bigger one to the previous call
    if (arr[i] > max_in_rest) {
        return arr[i];  // current element is bigger
    } else {
        return max_in_rest;  // max from the rest is bigger or equal
    }
}

int main() {
    int arr_size;

    // Read the number of elements in the array
    scanf("%d", &arr_size);
    int arr[arr_size];

    // Read array elements from input
    for(int i = 0; i < arr_size; i++) {
        scanf("%d", &arr[i]);
    }

    // Call the recursive function starting from index 0
    // It will return the maximum value in the entire array
    int result = max_number(arr, arr_size, 0);

    // Print the maximum value found
    printf("%d", result);

    return 0;
}
