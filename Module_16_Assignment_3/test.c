#include <stdio.h>

int main() {
    int height;
    scanf("%d", &height);  // Read the number of rows for the top half

    int symbol_count = 1;      // Number of symbols to print on current line (starts at 1)
    int leading_spaces = height - 1;  // Number of spaces before symbols

    // Top half of the pattern (pyramid)
    for (int row = 1; row <= height; row++) {
        // Print leading spaces
        for (int s = leading_spaces; s >= 1; s--) {
            printf(" ");
        }

        // Print symbols: '#' for odd rows, '-' for even rows
        for (int sym = 1; sym <= symbol_count; sym++) {
            if (row % 2 != 0) {
                printf("#");
            } else {
                printf("-");
            }
        }

        printf("\n");
        symbol_count += 2;   // Increase symbol count by 2 for next row
        leading_spaces--;    // Decrease leading spaces
    }

    int bottom_symbol_count = (height * 2) - 3;  // Start with 2 less than last top row
    int bottom_leading_spaces = 1;

    // Bottom half of the pattern (inverted pyramid)
    for (int row = 1; row <= height - 1; row++) {
        // Print leading spaces
        for (int s = 0; s < bottom_leading_spaces; s++) {
            printf(" ");
        }

        // Print symbols: same pattern as mirrored top
        // Mapping bottom row to corresponding top row using (height - row)
        for (int sym = 1; sym <= bottom_symbol_count; sym++) {
            if ((height - row) % 2 != 0) {
                printf("#");
            } else {
                printf("-");
            }
        }

        printf("\n");
        bottom_symbol_count -= 2;   // Decrease symbol count by 2
        bottom_leading_spaces++;    // Increase leading spaces
    }

    return 0;
}
