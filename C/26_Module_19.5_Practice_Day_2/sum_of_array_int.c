#include<stdio.h>

// This function recursively calculates the sum of all elements in the array
int find_max(int arr[], int arr_size, int i) {
    // Base case: when index i reaches the end of the array
    // We return 0 because the sum of "nothing" is 0
    if (i == arr_size) {
        return 0;
    }

    // Recursive call: ask recursion to calculate the sum from the next index onwards
    int sum = find_max(arr, arr_size, i + 1);

    // After getting the sum from rest of the array, add current element to it
    return sum + arr[i];

    // this in one line: return arr[i] + find_max(arr, arr_size, i + 1);
   
}

int main() {
    int arr_size;
    scanf("%d", &arr_size); // Read the size of the array

    int arr[arr_size]; // Declare an array of given size

    // Read each element into the array
    for (int i = 0; i < arr_size; i++) {
        scanf("%d", &arr[i]);
    }

    // Call the recursive function starting from index 0
    int max_ele = find_max(arr, arr_size, 0);

    // Print the final result (sum of the array)
    printf("%d", max_ele);

    return 0;
}
