#include <bits/stdc++.h>
using namespace std;

/*
STL queue<int> Summary:
Operation       Function    Time Complexity
Insert          push(val)   O(1)
Remove          pop()       O(1)
Access front    front()     O(1)
Check empty     empty()     O(1)
Get size        size()      O(1)
*/

int main() {
    // Declare a queue of integers using STL
    queue<int> q;

    int q_size;
    cin >> q_size; // Input number of elements to insert in the queue

    for (int i = 0; i < q_size; i++) {
        int val;
        cin >> val;

        // Insert element at the back of the queue
        // Time Complexity: O(1)
        q.push(val);
    }

    // Loop until the queue becomes empty
    while (!q.empty()) {
        // Access the front element
        // Time Complexity: O(1)
        cout << q.front() << " ";

        // Remove the front element from the queue
        // Time Complexity: O(1)
        q.pop();
    }

    return 0;
}
