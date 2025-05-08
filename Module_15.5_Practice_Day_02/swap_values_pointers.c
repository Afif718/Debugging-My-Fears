#include<stdio.h>

// Function to swap values of two integers using pointers
void swap_it(int* num1, int* num2){

    // Store the value at address num1 in a temporary variable
    int temp = *num1;

    // Assign the value at address num2 to address num1
    *num1 = *num2;

    // Assign the value stored in temp (original num1) to address num2
    *num2 = temp;

}

int main(){

    int num1, num2;
    scanf("%d %d", &num1, &num2);

    // Call the swap function and pass the addresses of num1 and num2
    swap_it(&num1, &num2);

    // Print the swapped values to verify the result
    printf("%d %d", num1, num2);

    return 0;
}
