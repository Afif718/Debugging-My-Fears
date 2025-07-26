/****************************************************************

    Following is the class structure of the Node class:

    class Node
    {
    public:
        int data;
        Node *next;
        Node()
        {
            this->data = 0;
            next = NULL;
        }
        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
        Node(int data, Node* next)
        {
            this->data = data;
            this->next = next;
        }
    };

*****************************************************************/

class Stack
{
public:
    Node* head = NULL; // Pointer to the top of the stack
    int size = 0;      // Tracks current size of stack

    Stack()
    {
        // Initially, stack is empty
        head = NULL;
        size = 0;
    }

    void push(int data) // PUSH operation: Insert at HEAD (top of stack)
    {
        size++;

        // Create a new node
        Node* newnode = new Node(data);

        // If stack is empty, new node becomes head
        if(head == NULL){
            head = newnode;
            return;
        }

        // Link new node to current head
        newnode->next = head;

        // Update head to point to new node
        head = newnode;

        /*
            Visualization of push:
            Suppose current stack is: 30(top) -> 20 -> 10

            Now push(40):

            newnode = 40
            newnode->next = head (i.e., 30)
            head = newnode

            Updated stack: 40(top) -> 30 -> 20 -> 10
        */
    }

    void pop() // POP operation: Remove from HEAD (top of stack)
    {
        if(head != NULL){
            // Save the current top node to delete later
            Node* delnode = head;

            // Move head to the next node (i.e., pop the top)
            head = head->next;

            // Delete the old top node to free memory
            delete delnode;

            size--;

            /*
                Visualization of pop:
                Suppose current stack is: 40(top) -> 30 -> 20 -> 10

                After pop():
                delnode = 40
                head = 30

                Updated stack: 30(top) -> 20 -> 10
            */
        }
    }

    int getTop()
    {
        // Return the value at the top of the stack
        if(head != NULL){
            return head->data;
        }

        return -1; // Return -1 if stack is empty
    }

    int getSize()
    {
        return size;
    }

    bool isEmpty()
    {
        return head == NULL;
    }

};


/*
Problem link: https://www.naukri.com/code360/problems/implement-stack-with-linked-list_630475?leftPanelTabValue=PROBLEM

question: Implement Stack With Linked List

Problem statement
You must implement the Stack data structure using a Singly Linked List.



Create a class named 'Stack' which supports the following operations(all in O(1) time):



getSize: Returns an integer. Gets the current size of the stack

isEmpty: Returns a boolean. Gets whether the stack is empty

push: Returns nothing. Accepts an integer. Puts that integer at the top of the stack

pop: Returns nothing. Removes the top element of the stack. It does nothing if the stack is empty.

getTop: Returns an integer. Gets the top element of the stack. Returns -1 if the stack is empty
Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1:
4
3 5
3 4
1
2
Sample Output 1:
2
false    
Explanation for Sample Output 1:
The first two queries ('3') push 5 and 4 on the stack. So the size of the stack becomes 2. 

Therefore the third query ('1') prints the size, and since the stack is not empty, the fourth and final query ('2') outputs "false"
Sample Input 2:
4
3 5
3 4
4
5
Sample Output 2:
5   
Explanation for Sample Output 2:
The first two queries ('3') push 5 and 4 on the stack.

The third query ('4') removes the top element of the stack, which is 4.

The fourth and final query ('5') prints the top element of the stack, 5
Constraints:
1 <= q <= 10^6
1 <= type <= 5
1 <= Data <= 2^31 - 1

Where 'type' is the type of query and 'Data' is the values getting pushed and popped from the stack. 

Time Limit: 1sec


*/

/*
Problem link:

question: 
*/