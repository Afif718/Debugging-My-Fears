#include <bits/stdc++.h>
using namespace std;

int main() {
    int queries;
    cin >> queries;  // Number of commands to process

    queue<string> str;  // Queue to simulate the line of people waiting for tickets

    /*
    Commands:
    - command_num = 0 followed by a name: A person with that name joins the end of the queue.
    - command_num = 1: The person at the front of the queue gets the ticket and leaves the queue.
      If the queue is empty, print "Invalid".
    */

    while (queries--) {
        int command_num;
        cin >> command_num;

        if (command_num == 0) {
            // Person arrives in the line
            string command;
            cin >> command;  // Read person's name
            str.push(command);  // Add person to the back of the queue

            // Visualization:
            // Queue before: front -> [ ... ] <- back
            // After push: new person at back of queue
        } else if (command_num == 1) {
            // Ticket is given to person at front of the line
            if (!str.empty()) {
                // There is someone in the queue
                string got_ticket = str.front();  // Get name at front
                str.pop();  // Remove person from front (they got the ticket)
                cout << got_ticket << endl;  // Print the name of the person who got the ticket

                // Visualization:
                // Queue before: front -> [person1, person2, ...] <- back
                // After pop: person1 leaves, queue front moves to person2
            } else {
                // Queue empty, no one to give ticket to
                cout << "Invalid\n";  // Indicate no one in line
            }
        }
    }

    return 0;
}


/*
https://www.hackerrank.com/contests/assignment-03-a-basic-data-structure-a-batch-07/challenges/special-queries-1-1/problem

question:

Problem Statement

You will be given  queries. In each query you will get a command. The command is of two types -

You will be given  and  of a person who stood in a line of a ticket counter.
You will be given only  which means the person in front of the line got the ticket and will be removed from the line. You need to print the name of that person who got that ticket. If there are no one in the line, print .
Note: There can be multiple person in the line with same name. You need to solve it using STL Stack or Queue only.

Input Format

First line will contain .
Next  lines will contain the commands.
Constraints

. Here |Name| means the length of the string and it will not contain any space. The string will contain only small English alphabets.
Output Format

For each time someone get out of the line, print his/her name. Print a new line after that.
Sample Input 0

5
0 rahim
0 karim
1
0 sakib
1
Sample Output 0

rahim
karim
Sample Input 1

8
1
0 embappe
0 neymar
1 
1
0 messi
1
1
Sample Output 1

Invalid
embappe
neymar
messi
Invalid
Sample Input 2

6
0 embappe
0 embappe
1 
1
0 messi
1
Sample Output 2

embappe
embappe
messi
*/