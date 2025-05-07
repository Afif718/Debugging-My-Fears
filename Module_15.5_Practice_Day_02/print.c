#include <stdio.h>

// Function to print numbers from 1 to n without leading or trailing spaces
void upToN(int n){
    for(int i = 1; i <= n; i++){
        if(i == n){
            // If it's the last number, print without a trailing space and add a newline
            printf("%d\n", i);
        } else {
            // Print number followed by a space
            printf("%d ", i);
        }
    }
}

int main(){
    int n;
    // Read input number from user
    scanf("%d", &n);

    // Call function to print numbers from 1 to n
    upToN(n);

    return 0; // Indicate successful program termination
}
