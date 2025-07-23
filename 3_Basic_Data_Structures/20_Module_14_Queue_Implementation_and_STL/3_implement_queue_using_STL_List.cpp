#include<bits/stdc++.h>
using namespace std;


class myQueue {
public:
    list<int> l;

    // Insert a new element at the back (tail) of the queue — O(1)
    void push(int val) {
        l.push_back(val);
    }

    // Remove an element from the front (head) of the queue — O(1)
    void pop() {
        l.pop_front();
    }

    // Return the front value (element at head)
    int front() {
        return l.front();
    }

    // Return the back value (element at tail)
    int back() {
        return l.back();
    }

    // Return the number of elements in the queue
    int size() {
        return l.size();
    }

    // Check if the queue is empty
    bool empty() {
        return l.empty();
    }
};

int main() {

    myQueue q; // Create a queue instance

    int queue_size;
    cin >> queue_size; // Take number of elements to be inserted

    // Insert elements into the queue
    for (int i = 0; i < queue_size; i++) {
        int val;
        cin >> val;
        q.push(val);
    }

    // Print front, back, size, and empty status of the queue
    cout << q.front() << " " << q.back() << " " << q.size() << " " << q.empty() << endl;
    
    // Dequeue and print each element until queue becomes empty
    while (!q.empty()) {
        cout << q.front() << " "; // Print front element
        q.pop();                  // Remove front element
    }

    return 0;
}

