#include<stdio.h>
#include<string.h>

int main(){

    int number_of_times;
    scanf("%d", &number_of_times); // Read the number of test cases

    for(int i=1; i<=number_of_times; i++){ // Loop over each test case

        char a[51]; // First input string
        char b[51]; // Second input string

        scanf("%s %s", a, b); // Read both strings for the test case

        int len_a = strlen(a); // Length of string a
        int len_b = strlen(b); // Length of string b

        int max_len = 0;
        if(len_a > len_b){
            max_len = len_a; // max length is length of a
        } else if(len_b > len_a){
            max_len = len_b; // max length is length of b
        } else {
            max_len = len_a; // both are same length
        }
    
        for(int i = 0; i < max_len; i++){ // Interleave characters from both strings

            // Print character from a if it exists
            if(i < len_a){
                printf("%c", a[i]);
            } 

            // Print character from b if it exists
            if(i < len_b){
                printf("%c", b[i]);
            }
        }

        printf("\n"); // Print a newline after each test case output
    }

    return 0;
}
