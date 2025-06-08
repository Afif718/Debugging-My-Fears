#include<bits/stdc++.h>
using namespace std;

int main(){
    int num_of_test_cases;
    cin >> num_of_test_cases; // Read number of test cases

    for(int i = 1; i <= num_of_test_cases; i++){

        int arr_size;
        cin >> arr_size; // Read size of the array

        int arr[arr_size];

        for(int i = 0; i < arr_size; i++){
            cin >> arr[i]; // Read array elements
        }

        int count_even = 0;
        int count_odd = 0;

        // Count the number of even and odd elements in the array
        for(int i = 0; i < arr_size; i++){
            if(arr[i] % 2 == 0){
                count_even++;
            } else {
                count_odd++;
            }
        }

        // If array size is odd, it's impossible to balance even and odd counts
        if(arr_size % 2 != 0){
            cout << -1 << endl;
        } else {
            // If the array already has equal number of even and odd numbers, no operations are needed
            if(count_even == count_odd){
                cout << 0 << endl;
            } else {
                /**
                 * If the array size is even but number of even and odd elements are unequal,
                 * we need to make some changes to balance them.
                 *
                 * EXPLANATION:
                 * We can change an even number to odd or vice versa (i.e., flip parity).
                 * Each such change affects both counts — decreasing one and increasing the other.
                 * So, in effect, one change reduces the imbalance by 2.
                 *
                 * Thus, to balance the number of even and odd numbers:
                 *     required_changes = abs(count_even - count_odd) / 2;
                 *
                 * Why abs()? Because we don’t care which is larger — we only care about the difference.
                 *
                 * ---------- EXAMPLES ----------
                 * Example 1:
                 * Input: 6
                 *        1 2 3 4 5 6
                 * count_even = 3 (2, 4, 6)
                 * count_odd  = 3 (1, 3, 5)
                 * Difference = 0 → Already balanced → Output: 0
                 *
                 * Example 2:
                 * Input: 6
                 *        2 4 6 8 10 11
                 * count_even = 5
                 * count_odd  = 1
                 * Difference = 4 → We need 4 / 2 = 2 changes → Output: 2
                 *
                 * Example 3:
                 * Input: 4
                 *        1 3 5 7
                 * count_even = 0
                 * count_odd  = 4
                 * Difference = 4 → 4 / 2 = 2 changes → Output: 2
                 */

                cout << abs((count_even - count_odd) / 2) << endl;
            }
        }
    }

    return 0;
}
