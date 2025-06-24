#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int num;
    cin >> num;  // Input the number up to which we want to find the sum

    // Using the formula for the sum of first n natural numbers:
    // sum = n * (n + 1) / 2
    // This gives the sum in O(1) time without using any loops
    long long int sum = (num * (num + 1)) / 2;

    cout << sum << endl;  // Output the result
    return 0;
}
