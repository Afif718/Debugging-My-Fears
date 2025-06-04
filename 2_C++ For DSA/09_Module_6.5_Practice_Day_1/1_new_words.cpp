#include<bits/stdc++.h> 
using namespace std;

int main(){
    string s;
    getline(cin, s);  // Take full line input including spaces

    // Convert all uppercase letters to lowercase manually
    // This ensures case-insensitive comparison when checking for letters of "egypt"
    for(int i=0; i<s.size(); i++){
        if((int)s[i] >= 65 && (int)s[i] <= 90){ // Check if character is uppercase
           s[i] = char((int) s[i] + 32);        // Convert to lowercase using ASCII value
            // cout << s[i] << " ";             // Optional debug output
        } 
        // cout << (int)s[i] <<endl;            // Optional: to see ASCII values
    }

    // Initialize counters for each letter needed to form the word "egypt"
    int count_e = 0;
    int count_g = 0;
    int count_y = 0;
    int count_p = 0; 
    int count_t = 0;

    // Count occurrences of each character in the input string
    for(int i=0; i<s.size(); i++){
        if(s[i] == 'e'){
            count_e++;
        }
        if(s[i] == 'g'){
            count_g++;
        }
        if(s[i] == 'y'){
            count_y++;
        }
        if(s[i] == 'p'){
            count_p++;
        }
        if(s[i] == 't'){
            count_t++;
        }
    }

    // Find the minimum count among the required characters.
    // This determines how many complete "egypt" words we can form
    cout << min({count_e, count_g, count_y, count_p, count_t}) << endl;

    return 0;
}
