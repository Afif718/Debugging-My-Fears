#include <stdio.h>

int main(){
    int a;
    float f;
    char c;

    printf("Enter a int float char ---> ");
    scanf("%d %f %c", &a, &f, &c);
    printf("Input elements are --> %d\n%.2f\n%c", a, f, c);
    return 0;
}