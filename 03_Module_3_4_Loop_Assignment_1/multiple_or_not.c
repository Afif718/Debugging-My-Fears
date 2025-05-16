#include <stdio.h>

int main() {

    int num1, num2;

    // Prompting the user to enter the first number
    printf("Enter first number: ");
    scanf("%d", &num1);  // Reading first number from user input

    // Prompting the user to enter the second number
    printf("Enter second number: ");
    scanf("%d", &num2);  // Reading second number from user input

    // Check if one number is a multiple of the other
    // If num1 is divisible by num2 OR num2 is divisible by num1
    if ((num1 % num2 == 0) || (num2 % num1 == 0)) {
        printf("Yes");  // Print Yes if one is a multiple of the other
    } else {
        printf("No");   // Otherwise, print No
    }

    return 0;  // Indicate successful program termination
}
