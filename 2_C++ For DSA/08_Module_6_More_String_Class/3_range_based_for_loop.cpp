#include <bits/stdc++.h>
using namespace std;

int main(){
    // ============================
    // Example 1: Iterating over a string
    // ============================

    string s = "hello";

    // Range-based for loop over each character in the string
    // It prints:
    // h
    // e
    // l
    // l
    // o
    for(char c : s){
        cout << c << endl;
    }

    // ============================
    // Example 2: Iterating over an array
    // ============================

    int arr[4] = {1, 2, 3, 4};

    // Range-based for loop over elements of the array
    // It prints:
    // 1
    // 2
    // 3
    // 4
    for(int i : arr){
        cout << i << endl;
    }

    return 0;
}
