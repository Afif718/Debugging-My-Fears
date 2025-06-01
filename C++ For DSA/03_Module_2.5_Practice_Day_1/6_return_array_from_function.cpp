#include <bits/stdc++.h>  // Includes all standard C++ libraries
using namespace std;

// Function to create and return a dynamic array of given size
int* get_array(int arr_size) {

    // Dynamically allocate memory for the array
    int *arr = new int[arr_size];

    // Take input for each element of the array
    for (int i = 0; i < arr_size; i++) {
        cin >> arr[i];
    }

    // Return the pointer to the dynamically allocated array
    return arr;
}

int main() {
    int arr_size;
    // Input the size of the array
    cin >> arr_size;

    // Get the dynamic array from the function
    int *arr = get_array(arr_size);

    // Print the array elements
    for (int i = 0; i < arr_size; i++) {
        cout << arr[i] << " ";
    }

    // Optional: Free the dynamically allocated memory
    delete[] arr;

    return 0;
}


/*
Question: At first in the main function take an integer N as input. 
Then make a function named get_array() which will receive that N as a parameter. 
Then inside the get_array() function create an integer array of size N. 
Then the values of that array will be taken as input. 
After that return that array from that function and receive it in the main function 
and print the values of the array there.
*/