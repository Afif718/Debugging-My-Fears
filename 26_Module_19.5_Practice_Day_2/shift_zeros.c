#include<stdio.h>

int main() {
    int arr_size;
    scanf("%d", &arr_size);  // Example input: 4

    int array[arr_size];

    // Example input values: 2 0 0 5
    for(int i = 0; i < arr_size; i++) {
        scanf("%d", &array[i]);
    }

    int nonZeroIndex = 0;     // Tracks where to place the next non-zero value
    int zeroCount = 0;        // Counts number of zeros

    // First loop: move non-zero elements to the front
    for(int i = 0; i < arr_size; i++) {
        if(array[i] != 0) {
            array[nonZeroIndex] = array[i];
            nonZeroIndex++;
        } else {
            zeroCount++;
        }

        /*
        Step-by-step trace for input: 2 0 0 5

        i = 0 → array[0] = 2 (non-zero)
            → array[0] = 2
            → nonZeroIndex = 1

        i = 1 → array[1] = 0 (zero)
            → zeroCount = 1

        i = 2 → array[2] = 0 (zero)
            → zeroCount = 2

        i = 3 → array[3] = 5 (non-zero)
            → array[1] = 5
            → nonZeroIndex = 2

        Now array = [2, 5, ?, ?]
        */

    }

    // Second loop: fill in the zeros from the end
    for(int i = arr_size - 1; i >= arr_size - zeroCount; i--) {
        array[i] = 0;

        /*
        zeroCount = 2
        arr_size = 4

        Fill from index 3 to 2 with 0s
        i = 3 → array[3] = 0
        i = 2 → array[2] = 0

        Final array = [2, 5, 0, 0]
        */
    }

    // Output result
    for(int i = 0; i < arr_size; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}


//I solved it
//Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/N