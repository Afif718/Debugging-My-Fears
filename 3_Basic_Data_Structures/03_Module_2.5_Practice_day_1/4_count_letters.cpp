#include <bits/stdc++.h> // O(1) - Includes all standard C++ libraries
using namespace std;

int main(){
    string str;
    cin >> str; // O(n) - Reads the input string of length n

    // O(1) - Initializes a vector of size 26 to store frequency of letters 'a' to 'z'
    // Each index corresponds to a character: 0 -> 'a', 1 -> 'b', ..., 25 -> 'z'
    vector<int> alpha_arr(26, 0); 

    // O(n) - Loop through the input string to count frequency of each letter
    for(int i = 0; i < str.size(); i++){
        int val = (int)str[i] - 'a'; // O(1) - Map character to index (0 to 25)
        alpha_arr[val]++;            // O(1) - Increment count at that index
    }

    // O(26) => O(1) - Loop through 26 possible characters to print frequencies
    for(int i = 0; i < 26; i++){
        if(alpha_arr[i] > 0){ // O(1) - Check if character appeared in input
            // O(1) - Print the character and its frequency
            cout << (char)(i + 'a') << " : " << alpha_arr[i] << endl;
        }
    }
    
    return 0; // O(1)
}

// problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/J

/*
🧠 Problem Summary:
Given a lowercase string S, count how many times each character appears and print them in alphabetical order.

🕒 Time Complexity:
- Reading input: O(n)
- Counting frequencies: O(n)
- Printing results: O(26) = O(1)
- 👉 Total: O(n), where n = length of the input string


✅ Efficient and optimal solution for large input sizes (up to 10^7 characters)

📥 Examples:

Input:
aaabbc
Output:
a : 3  
b : 2  
c : 1  

Input:
regff
Output:
e : 1  
f : 2  
g : 1  
r : 1  
*/
