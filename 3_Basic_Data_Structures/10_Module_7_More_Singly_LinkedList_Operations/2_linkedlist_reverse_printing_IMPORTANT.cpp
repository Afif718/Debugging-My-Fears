#include<bits/stdc++.h>
using namespace std;

// Node class for singly linked list
class Node {
public:
    int val;        // stores the value
    Node* next;     // pointer to the next node

    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

// Function to insert a node at the tail of the linked list
// Time Complexity: O(1) — because we maintain a tail pointer
void insert_at_tail(Node* &head, Node* &tail, int val) {
    Node* newnode = new Node(val); // O(1)

    if (head == NULL) {
        // First node to be inserted
        head = newnode;
        tail = newnode;
        return;
    }

    // Attach new node at the end and update tail
    tail->next = newnode;
    tail = newnode;
}

// Function to print the linked list normally (head to tail)
// Time Complexity: O(n) — traverses all nodes once
void print_node(Node* head) {
    Node* temp = head;

    while (temp != NULL) {
        cout << temp->val << endl;
        temp = temp->next;
    }
}

// Function to print the linked list in reverse order using recursion
// Time Complexity: O(n)
// Space Complexity: O(n) — due to recursion call stack
void print_node_reverse(Node* head) {
    // Base case
    if (head == NULL) return;

    // Recursive call first, which goes to the end
    print_node_reverse(head->next);

    // Print after the call stack unwinds (reverse order)
    cout << head->val << endl;
}

// Function to calculate the sum of all node values recursively
// Time Complexity: O(n)
// Space Complexity: O(n) — due to recursion call stack
int get_node_sum(Node* head) {
    if (head == NULL) {
        return 0; // base case: no nodes, sum is 0
    }

    // Sum = current value + sum of rest of the list
    return head->val + get_node_sum(head->next);
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    int val;
    // Input loop: takes integers until -1 is entered
    // Time Complexity: O(n)
    while (true) {
        cin >> val;

        if (val == -1) {
            break;
        }

        insert_at_tail(head, tail, val); // O(1) insertion
    }

    // Print the list in order
    cout << "Linked List (normal order):" << endl;
    print_node(head); // O(n)

    cout << "\nLinked List (reverse order):" << endl;
    print_node_reverse(head); // O(n) time, O(n) space

    cout << "\nSum of the node: " << get_node_sum(head) << endl; // O(n)

    return 0;
}
