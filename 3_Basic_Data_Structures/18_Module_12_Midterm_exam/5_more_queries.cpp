#include <bits/stdc++.h>
using namespace std;

int main() {
    list<int> l;  // Declare a doubly linked list of integers using STL list

    int queries;
    cin >> queries;  // Read the number of queries

    while (queries--) {
        int command, val;
        cin >> command >> val;  // Read command and value for each query
        
        if (command == 0) { 
            // Insert at the head (front) of the list
            l.push_front(val);
        } 
        else if (command == 1) {
            // Insert at the tail (back) of the list
            l.push_back(val);
        } 
        else if (command == 2) {
            // Delete element at index 'val' if valid index
            if (val < l.size()) {
                // next(l.begin(), val) returns an iterator pointing to the 'val'th element
                l.erase(next(l.begin(), val));
            }
            // If index invalid, do nothing
        } 

        // Print the list from left to right (head to tail)
        cout << "L -> ";
        for (int v : l) {
            cout << v << " ";
        }

        // Print the list from right to left (tail to head) using reverse iterators
        cout << "\nR -> ";

        // Explanation of reverse iteration:
        // l.rbegin() returns a reverse iterator pointing to the last element of the list.
        // l.rend() returns a reverse iterator pointing just *before* the first element of the list.
        // The loop increments the reverse iterator (moves backwards through the list)
        for (auto it = l.rbegin(); it != l.rend(); ++it) {
            cout << *it << " ";  // Dereference iterator to get the value
        }

        cout << "\n";  // New line after printing both directions
    }

    return 0;  // Successful program termination
}


/*
Problem Statement

You have a doubly linked list which is empty initially. Then you will be given Q queries. In each query you will be given two values X and V.

If X is 0 that means you will insert the value V to the head of the linked list.
If X is 1 then you will insert the value V to the tail of the linked list.
If X is 2 then you will delete the value Vth index of the linked list. Assume that index starts from 0. If the index is invalid, then you shouldn't perform the deletion.
After each query you need to print the linked list from both left to right and right to left.
Note: You must use STL List, otherwise you will not get marks.

Input Format

First line will contain Q.
Next Q lines will contain X and V.
Constraints

1 <= Q <= 1000;
0 <= X <= 2;
0 <= V <= 10^9
Output Format

For each query print the linked list from left to right and right to left.
Print "L -> " before printing the linked list from left to right.
Print "R -> " before printing the linked list from right to left.
Sample Input 0

4
0 10
1 20
1 30
0 40
Sample Output 0

L -> 10 
R -> 10 
L -> 10 20 
R -> 20 10 
L -> 10 20 30 
R -> 30 20 10 
L -> 40 10 20 30 
R -> 30 20 10 40 
Sample Input 1

9
0 10
2 1
2 0
1 20
0 10
2 2
2 1
2 2
2 0
Sample Output 1

L -> 10 
R -> 10 
L -> 10 
R -> 10 
L -> 
R -> 
L -> 20 
R -> 20 
L -> 10 20 
R -> 20 10 
L -> 10 20 
R -> 20 10 
L -> 10 
R -> 10 
L -> 10 
R -> 10 
L -> 
R -> 
Sample Input 2

11
0 10
2 5
1 20
1 30
0 40
2 0
0 50
2 2
1 60
2 3
2 3
Sample Output 2

L -> 10 
R -> 10 
L -> 10 
R -> 10 
L -> 10 20 
R -> 20 10 
L -> 10 20 30 
R -> 30 20 10 
L -> 40 10 20 30 
R -> 30 20 10 40 
L -> 10 20 30 
R -> 30 20 10 
L -> 50 10 20 30 
R -> 30 20 10 50 
L -> 50 10 30 
R -> 30 10 50 
L -> 50 10 30 60 
R -> 60 30 10 50 
L -> 50 10 30 
R -> 30 10 50 
L -> 50 10 30 
R -> 30 10 50 
Sample Input 3

10
1 4
2 1
0 9
0 10
2 2
1 5
2 0
2 1
2 5
2 2
Sample Output 3

L -> 4 
R -> 4 
L -> 4 
R -> 4 
L -> 9 4 
R -> 4 9 
L -> 10 9 4 
R -> 4 9 10 
L -> 10 9 
R -> 9 10 
L -> 10 9 5 
R -> 5 9 10 
L -> 9 5 
R -> 5 9 
L -> 9 
R -> 9 
L -> 9 
R -> 9 
L -> 9 
R -> 9 
*/