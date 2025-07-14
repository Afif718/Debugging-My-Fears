#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int> l; // Create an STL list to store integers

    int val;
    // Input loop until -1 is encountered
    while(true){
        cin >> val;
        if(val == -1){
            break; // Stop input when -1 is entered
        }
        l.push_back(val); // Insert value at the end of the list
    }

    // Sort the list in descending order using greater<int>()
    // l.sort(greater<int>()); 

    // Sort the list again in ascending order (default sort)
    // This overrides the previous sort and sets the final order to ascending
    l.sort(); 

    // Print the sorted list
    for(int val : l){
        cout << val << " ";
    }

    return 0;
}

// Problem link for reference:
// https://docs.google.com/document/d/13vRt1XJ7C_rOw-DXi2-ayTxAPM6zMM67/edit?tab=t.0
