#include<stdio.h>

int main(){
    float num1, num2;
    // float num2;

    printf("Enter a number: ");
    scanf("%f", &num1);
    printf("Enter another number: ");
    scanf("%f", &num2);

    float sum = num1 + num2;
    float difference = num1 - num2;
    float product = num1 * num2;
    float quotient = num1 / num2;

    printf("Sum : %.2f\n", sum);
    printf("Difference : %.2f\n", difference);
    printf("Product : %.2f\n", product);
    printf("Quotient : %.2f\n", quotient);

    return 0;
}