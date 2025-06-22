#include <bits/stdc++.h> // Includes all standard C++ libraries
using namespace std;

int main(){
    int arr_size;
    cin >> arr_size; // Input the size of the array

    int arr[arr_size]; // Declare an array of the given size

    // Input array elements
    for(int i = 0; i < arr_size; i++){
        cin >> arr[i];
    }

    int search_num;
    cin >> search_num; // Input the number to search for

    // ❗IMPORTANT: Binary search works correctly ONLY if the array is sorted.
    // This code assumes the array is already sorted in ascending order.
    // If not, the result will be incorrect.

    bool isFound = false;       // Flag to indicate if the number is found
    int l = 0;                  // Left boundary of the search space
    int r = arr_size - 1;       // Right boundary of the search space

    // Binary Search Loop — O(log n) time complexity
    while(l <= r){
        int mid = (l + r) / 2;  // Find the middle index of the current search range

        /*
        👇 How binary search works internally — Example:

        Suppose the array is:
        arr = [2, 4, 6, 8, 10, 12]
        and you are searching for: search_num = 8

        Step 1:
        l = 0, r = 5 → mid = (0 + 5) / 2 = 2 → arr[2] = 6
        - Since 6 < 8 → discard the left half including mid
        - Update l = mid + 1 = 3

        Step 2:
        l = 3, r = 5 → mid = (3 + 5) / 2 = 4 → arr[4] = 10
        - Since 10 > 8 → discard the right half including mid
        - Update r = mid - 1 = 3

        Step 3:
        l = 3, r = 3 → mid = (3 + 3) / 2 = 3 → arr[3] = 8
        - Match found ✅
        */

        if(arr[mid] == search_num){
            // ✅ Match found at index mid
            isFound = true;
            break;
        } 
        else if(arr[mid] > search_num){
            // 🔍 Target is smaller than mid → discard right half
            r = mid - 1;
        } 
        else {
            // 🔍 Target is larger than mid → discard left half
            l = mid + 1;
        }

        /*
        🔁 The loop continues by shrinking the search range [l, r]
        on each iteration — moving either left or right — until the
        number is found or the range becomes invalid (l > r).

        This divide-and-conquer logic gives binary search its
        O(log n) time complexity — the search space is halved each time.
        */
    }

    // Output result based on whether search_num was found
    if(isFound){
        cout << "Found\n";
    } else {
        cout << "Not Found\n";
    }

    return 0;
}

/*
-----------------------------------------------------
📝 Summary Notes:
-----------------------------------------------------
- Binary Search is efficient: Time complexity is O(log n)
- It works by repeatedly dividing the search range in half.
- It is MUCH faster than linear search for large data.

⚠️ VERY IMPORTANT:
- The array must be sorted in ascending order.
  This code does NOT sort the array — it assumes you gave it sorted input.

🧠 Example Input:
6
2 4 6 8 10 12
8

✅ Output:
Found

🧠 Example Input:
6
2 4 6 8 10 12
7

❌ Output:
Not Found
*/
