#include <bits/stdc++.h>
using namespace std;

// Node class definition
class Node {
public:
    int val;
    Node* next;

    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

// Function to insert a node at the tail
void insert_at_tail(Node*& head, Node*& tail, int val) {
    Node* newnode = new Node(val);

    if (head == NULL) {
        head = newnode;
        tail = newnode;
        return;
    }

    tail->next = newnode;
    tail = newnode;
}

// Function to count the size of the linked list
int get_size(Node* head) {
    int count = 0;
    Node* temp = head;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}

// Function to insert at a given index
void insert_at_index(Node*& head, Node*& tail, int index, int val) {
    int size = get_size(head);

    // Invalid index case
    if (index < 0 || index > size) {
        cout << "Invalid" << endl;
        return;
    }

    Node* newnode = new Node(val);

    // Insert at head (index 0)
    if (index == 0) {
        newnode->next = head;
        head = newnode;
        if (tail == NULL) tail = newnode; // for empty list
    }
    // Insert at tail (index == size)
    else if (index == size) {
        tail->next = newnode;
        tail = newnode;
    }
    // Insert in the middle
    else {
        Node* temp = head;
        for (int i = 0; i < index - 1; i++) {
            temp = temp->next;
        }
        newnode->next = temp->next;
        temp->next = newnode;
    }

    // Print the list after insertion
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    // Input initial list
    while (true) {
        int val;
        cin >> val;
        if (val == -1) break;
        insert_at_tail(head, tail, val);
    }

    int q;
    cin >> q;

    // Process each query
    while (q--) {
        int index, val;
        cin >> index >> val;
        insert_at_index(head, tail, index, val);
    }

    return 0;
}
