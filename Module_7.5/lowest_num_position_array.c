#include <stdio.h>
#include <limits.h>

int main()
{
    // Read the size of the array
    int arr_size;
    scanf("%d", &arr_size);

    // Proceed only if array size is valid (as per constraints)
    if (arr_size >= 2)
    {
        // Declare an array of given size
        int arr[arr_size];

        // Read all elements into the array
        for (int i = 0; i < arr_size; i++)
        {
            scanf("%d", &arr[i]);
        }

        // Initialize minimum value as the first element
        int min_val = arr[0];

        // Initialize index of minimum value as 1 (1-based indexing)
        int index_min = 1;

        // Loop through the array starting from the second element
        for (int i = 1; i < arr_size; i++)
        {
            // If a smaller value is found, update both min_val and index
            if (arr[i] < min_val)
            {
                min_val = arr[i];
                index_min = i + 1;  // Convert 0-based index to 1-based
            }
        }

        // Print the minimum value and its 1-based position
        printf("%d %d", min_val, index_min);
    }

    return 0;
}

// problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/E
