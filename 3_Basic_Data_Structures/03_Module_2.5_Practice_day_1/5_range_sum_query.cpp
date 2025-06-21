#include <bits/stdc++.h> // O(1) - Includes all standard C++ headers
using namespace std;

int main(){
    int arr_size, query;
    cin >> arr_size >> query; // O(1) - Read size of array and number of queries

    int arr[arr_size]; // O(1) - Declare array of given size

    // O(N) - Read all elements into the array
    for(int i = 0; i < arr_size; i++){
        cin >> arr[i]; // O(1) per element → Total O(N)
    }

    // Process Q queries
    for(int i = 0; i < query; i++){ // O(Q) iterations
        int start_index, end_index;
        cin >> start_index >> end_index; // O(1) - Read range for each query

        int sum = 0; // O(1) - Initialize sum

        // ❗ O(R - L + 1) for each query in worst case → can be up to O(N)
        // So total for all queries: O(Q * N) in worst case
        for(int i = start_index - 1; i <= end_index - 1; i++){
            sum += arr[i]; // O(1) - Add each element in the range
        }

        cout << sum << endl; // O(1) - Output the result
    }

    return 0; // O(1)
}

/*
🕒 Final Time Complexity:

Let:
- N = size of the array (arr_size)
- Q = number of queries

📌 Input Reading:       O(N)
📌 Query Processing:    O(Q × N)  (worst-case when queries cover large ranges)

✅ Total Time:          O(Q × N)


question:

Given 2 numbers N
 and Q
, an array A
 of N
 number and Q
 number of pairs L
, R
. For each query Q
 print a single line that contains the summation of all numbers from index L
 to index R
.

Input
First line contains two numbers N
, Q
 (1≤N,Q≤105)
 where N
 is number of elements in A
 and Q
 is number of query pairs.

Second line contains N
 numbers(1≤Ai≤109)
.

Next Q
 lines contains L,R
 (1≤L≤R≤N)
.

Output
For each query Q
 print a single line that contains the summation of all numbers from index L
 to index R
.

Examples
InputCopy
6 3
6 4 2 7 2 7
1 3
3 6
1 6
OutputCopy
12
18
28
InputCopy
4 3
5 5 2 3
1 3
2 3
1 4
OutputCopy
12
7
15
*/
